// 6. Доорх кодыг туршиж мөр бүрийн үр дүнг тайлбарлан бич.
// int a=125;
// int *p = &a;
// cout<<p<<endl;
// cout<<*p<<endl;
// p++;
// cout<<p<<endl;
// cout<<*p<<endl;

#include <iostream>

using namespace std;

int main()
{
    int a = 125;        // a huwisagchid 125 gesen utga onooh
    int *p = &a;        // p huwisagchid a huwisagchiin haygiig onooh
    cout << p << endl;  // p huwisagchiin utga buyu a huwisagchiin haygiig hewleh
    cout << *p << endl; //*p ni p huwisagchiin zaasan haygiin utga buyu a huwisagchiin utga 125-g  hewleh
    p++;                // p-d hadgalsan hayag buyu a huwisagchiin haygiig nemegduuleh buyu daraagiin haygiig zaah
    cout << p << endl;  // p-d hadgalsan hayag buyu 1-n haygiin daraagiin haygiig hewleh
    cout << *p << endl; //*p ni p huwisagchiin zaasan haygiin utga tul daraagiin buyu nemegduulsen hayagiin utgiig hewleh
}