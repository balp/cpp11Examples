#include <iostream>
#include <vector>
#include <algorithm>

void populateList(std::vector<int>& list)
{
    for(int i = 0 ; i < 10 ; ++i) {
        list.push_back(5 - i);
    }
}

int main(int argc, char **argv)
{
    std::vector<int> int_list;
    populateList(int_list);
    int total = 0;
    std::for_each(int_list.begin(), int_list.end(),
            [&total](int x) {
            total += x;
            });
    std::sort(int_list.begin(), int_list.end(),
            [](int a, int b){ return abs(a) < abs(b);}
            );

    std::for_each(int_list.begin(), int_list.end(),
            [](int x) {
            std::cout << x << std::endl;
            });
}
