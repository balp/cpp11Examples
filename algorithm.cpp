#include <vector>
#include <algorithm>


int main(int argc, char** argv)
{
    std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(all_of(v.begin(), v.end(), [](int x) { return x >= 0;})) {};
    if(any_of(v.begin(), v.end(), [](int x) { return x > 10;})) {};
    if(none_of(v.begin(), v.end(), [](int x) { return x <= 0;})) {};

    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    std::copy_n(a, 5, b);
}
