// 2. Тэгш өнцөгтийн талуудыг өгөхөд талбайг буцаадаг хэрэглэгчийн функц бич.

#include <iostream>

using namespace std;

double talbaioloh(double urt, double orgon)
{
    return urt * orgon;
}

int main()
{
    double a, b;

    cout << "Tegsh ontsogtiin taluudiig oruulna uu: ";
    cin >> a >> b;

    double S = talbaioloh(a, b);

    cout << "Talbai:" << S << endl;
    return 0;
}