#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A, B;
    cout << "¬вед≥ть число A\n";
    cin >> A;
    cout << "¬вед≥ть число B\n";
    cin >> B;
    cout << boolalpha << (A > 2 && B >= 3) << endl;
    system("pause");
}
