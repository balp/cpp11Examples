#include <iostream>
#include <vector>
#include <algorithm>

void populateList(std::vector<int>& list)
{
    for(int i = 0 ; i < 10 ; ++i) {
        list.push_back(5 - i);
    }
}

template<class T> void printall(const std::vector<T>& v)
{
    for(auto p = v.begin(); p != v.end(); ++p) {
        std::cout << *p << std::endl;
    }
}

int main(int argc, char **argv)
{
    std::vector<int> int_list;
    populateList(int_list);
    auto i = 0;
    auto c = 'c';

    printall(int_list);

}

