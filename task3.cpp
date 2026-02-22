// 3. Өгөгдсөн тоо анхны тоо эсэхийг шалга.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Too oruulna uu: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Anhnii too bish";
        return 0;
    }

    bool prime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "Anhnii too";
    else
        cout << "Anhnii too bish";
}