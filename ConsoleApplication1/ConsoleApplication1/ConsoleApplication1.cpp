// ConsoleApplication1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"


using namespace std;

int main()
{
    string t[4] = { "aa", "bb", "cc", "dd" };
    cout << "sizeof string: " << sizeof(string) << endl;
    cout << "sizeof string t[4]: " << sizeof(t) << endl;
    cout << "now start swapping t[0] and t[2]" << endl;
    char *tmp;
    tmp = (char*)malloc(sizeof(string));
    memcpy(tmp, &t[0], sizeof(string));
    memcpy(&t[0], &t[2], sizeof(string));
    memcpy(&t[2], tmp, sizeof(string));
    cout << "swap done!" << endl;
    cout << "now the value of t[0] and t[2] is " << t[0] << " and " << t[2] << endl;
    return 0;
}

