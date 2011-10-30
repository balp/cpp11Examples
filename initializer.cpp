#include <list>
#include <string>

using namespace std;

class X {
    static const int m_1 = 7;
    //static int m_2 = 7; // GCC 4.7 ++
    //int m_3 = 7; // GCC 4.7 ++

};

int main(int argc, char** argv)
{
    list<pair<string,string>> languages = {
        {"Ritchie", "C"},
        {"Nygaard", "Simula"},
    };
}
