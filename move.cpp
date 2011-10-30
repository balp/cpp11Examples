
#include <utility>

class X {
    public:
        X(X&& x) {
            *this = std::move(x);
        }
};

template<class T>
void swap(T& a, T& b)
{
    T tmp = move(a);
    a = move(b);
    b = move(tmp);
}

int main(int argc, char **argv)
{
}
