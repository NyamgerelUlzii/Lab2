// 1. Тойргийн радиусыг гараас авч талбайг бодож хэвлэ.

#include <iostream>

using namespace std;

int main()
{
    double p = 3.14;
    double r;
    double S;

    cout << "Radius: ";
    cin >> r;

    S = p * r * r;
    cout << "Talbai: " << S << endl;
    return 0;
}
