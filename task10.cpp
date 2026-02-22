// 10. Цаг, минут, секундыг зөв формат руу хөрвүүлдэг хэрэглэгчийн функц зохио. Жишээ нь, h=0,
// m=315, s=500 утгыг оруулбал үр дүн нь h=5, m=23, s=20 байх ёстой.

#include <iostream>

using namespace std;

void function(int &h, int &m, int &s)
{
    h = h + m / 60 + s / 3600;
    m = (m % 60) + (s % 3600) / 60;
    s = s % 60;
}
int main()
{
    int h, m, s;
    cout << "Tsag, minute, sekundiig oruulna uu: ";
    cin >> h >> m >> s;
    function(h, m, s);
    cout << "Tsag: " << h << ", Minute: " << m << ", Sekund: " << s << endl;
}