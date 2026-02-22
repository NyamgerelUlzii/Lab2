// 8. Хаяган хувьсагч ашиглан (функцын параметер нь хаяган хувьсагч байна) хоёр хувьсагчийн утгыг
// солих хэрэглэгчийн функц бич.

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int m = *a;
    *a = *b;
    *b = m;
}

int main()
{
    int a = 2, b = 3;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b;
}