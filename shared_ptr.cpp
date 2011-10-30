
#include <vector>
#include <algorithm>
#include <iostream>
#include <memory>

class MyClass {
    public:
        MyClass(int i): m_value(i) {}
        int m_value;
};

std::vector<std::shared_ptr<MyClass>> v;

void add(int no)
{
    while(--no) {
        std::shared_ptr<MyClass> value(new MyClass(no));
        v.push_back(value);
    }
}

int main(int argc, char** argv)
{
    add(10);
    std::for_each(v.begin(), v.end(),
            [](std::shared_ptr<MyClass> i) {
            std::cout << i->m_value << std::endl;
            });
}
