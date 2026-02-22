// 4. Хүснэгтийг өсөх/буурахаар эрэмбэл.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Husnegtiin hemjeeg oruulna uu: ";
    cin >> n;

    int a[100];

    cout << "Toonuudiig oruulna uu:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nOsoh erembe:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nBuurah erembe:\n";
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";

    return 0;
}
