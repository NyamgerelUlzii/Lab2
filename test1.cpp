#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 42;

    cout << "Dynamically allocated int utga: " << *p << endl;

    delete p;
    p = nullptr;
    return 0;
}
