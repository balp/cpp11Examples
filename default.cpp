
class X {
    X& operator=(const X&) = delete;
    X(const X&) = delete;
};

struct x {
    x()=default;
};

int main(int argc, char** argv)
{
}
