#include <thread>
#include <iostream>

std::mutex m;
std::timed_mutex tm;
std::condition_variable cond;
bool data_ready;

void foo()
{
    std::unique_lock<std::mutex> lk(m);
    cond.wait(lk, []{return data_ready;} );
    std::cout << "foo done." << std::endl;
}

class timed
{
    public:
        void operator()() {
            std::unique_lock<std::timed_mutex> lk(tm,
                    std::chrono::milliseconds(3));
            if(lk) {
                ++i;
            }
        }
        int i;
};
class Worker
{
    public:
        Worker(int s) : m_work(s) {}
        void operator()() {
            while(m_work > 0) {
                std::lock_guard<std::mutex> lk(m);
                --m_work;
            }
            std::lock_guard<std::mutex> lk(m);
            data_ready = true;
            std::cout << "thead done." << std::endl;
            cond.notify_one();
        };
    private:
        int m_work;
};

int main(int argc, char** argv)
{
    data_ready = false;
    Worker worker(10000);
    std::thread t1(worker);
    std::thread t2(worker);
    std::thread t3(foo);
    t1.join();
    t2.join();
    t3.join();
    std::cout << "main done." << std::endl;
}

