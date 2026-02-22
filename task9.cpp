// 9. Заалтан хувьсагч (функцын параметер нь заалт байна) хоёр хувьсагчийн утгыг солих
// хэрэглэгчийн функц бич.

#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int m = a;
    a = b;
    b = m;
}

int main()
{
    int a, b;
    cout << "a, b-iin utgiig oruulna uu: ";
    cin >> a >> b;
    swap(a, b);
    cout << "a = " << a << ", b = " << b;
}
