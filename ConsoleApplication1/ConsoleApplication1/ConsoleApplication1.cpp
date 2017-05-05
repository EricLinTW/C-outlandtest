// ConsoleApplication1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"


//using namespace std;

int main()
{
    std::string t[4] = { "aa", "bb", "cc", "dd" };
    std::cout << "sizeof string: " << sizeof(std::string) << std::endl;
    std::cout << "sizeof string t[4]: " << sizeof(t) << std::endl;
    std::cout << "now start swapping t[0] and t[2]" << std::endl;
    auto tmp = static_cast<char*>(malloc(sizeof(std::string)));
    memcpy(tmp, &t[0], sizeof(std::string));
    memcpy(&t[0], &t[2], sizeof(std::string));
    memcpy(&t[2], tmp, sizeof(std::string));
    std::cout << "swap done!" << std::endl;
    std::cout << "now the value of t[0] and t[2] is " << t[0] << " and " << t[2] << std::endl;
    return 0;
}

