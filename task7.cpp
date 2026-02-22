// 7. Доорх кодын мөр бүрийг тайлбарла.
//  int numbers[5];
//  int * p;
//  p = numbers; *p = 10;
//  p++; *p = 20;
//  p = &numbers[2]; *p = 30;
//  p = numbers + 3; *p = 40;
//  p = numbers; *(p+4) = 50;
//  for (int n=0; n<5; n++)
//  cout << numbers[n] << ", ";

#include <iostream>

using namespace std;

int main()
{
    int numbers[5];                 // 5 urttai massive-t utga onooh
    int *p;                         // p huwisagchid int turliin zaagch onooh
    p = numbers;                    // p huwisagchid numbers massivnii haygiig onooh
    *p = 10;                        // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 0-r haygiin utgad 10 gsn toog onooh
    p++;                            // p-d hadgalsan hayag buyu 0-r haygiig nemegduuleh buyu daraagiin haygiig zaah
    *p = 20;                        // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 1-r haygiin utgad 20 gsn toog onooh
    p = &numbers[2];                // p huwisagchid numbers massivnii 2-r haygiin haygiig onooh
    *p = 30;                        // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 2-r haygiin utgad 30 gsn toog onooh
    p = numbers + 3;                // p huwisagchid numbers massivnii 3-r haygiin haygiig onooh
    *p = 40;                        // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 3-r haygiin utgad 40 gsn toog onooh
    p = numbers;                    // p huwisagchid numbers massivnii haygiig onooh
    *(p + 4) = 50;                  // *(p + 4) ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 4-r haygiin utgad 50 gsn toog onooh
    for (int n = 0; n < 5; n++)     // n huwisagchid 0-s 4 hurtel utga onooh buyu massivnii hayguudiig davtah
        cout << numbers[n] << ", "; // numbers massivnii hayguudiin utguudiig hewleh
}