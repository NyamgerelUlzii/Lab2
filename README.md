C++ Хэлний Суурь Ойлголтуудыг Судлах Лабораторийн Ажил (Лаборатори №2)

ОРШИЛ/УДИРТГАЛ Энэхүү лабораторын ажлын хүрээнд хэрэглэгчийн функц, функцийн программчлалын зарчим, cin, cout объект, параметр дамжуулах арга, санах ойн хаяг, хаяган хувьсагч, new оператор, санах ойн цоорхой зэрэг онолын ойлголтуудыг судалж, тэдгээрийг өгөгдсөн бодлогын хүрээнд хэрэгжүүлж, практик туршлага дээр үндэслэн ойлгоно.
ЗОРИЛГО C++ хэлний функц болон санах ойтой холбоотой онолын ойлголтуудыг судалж, тэдгээрийг бодлогын хүрээнд хэрэгжүүлэх арга зүйг тодорхойлоход оршино.
Хэрэглэгчийн функцийн ойлголт болон функцийн программчлалын зарчмыг судлах.
cin, cout объектын ажиллах зарчим, оролт-гаралтын урсгалыг ойлгох.
Функцэд утга болон хүснэгт дамжуулах онолын үндсийг судлах.
Санах ойн хаяг болон хаяган хувьсагчийн ойлголт, төрөл, багтаамжийг тодорхойлох.
new операторын гүйцэтгэх үүрэг болон динамик санах ойн зарчмыг судлах.
Санах ойн цоорхой үүсэх нөхцөл, шалтгаан, сэргийлэх аргыг тодорхойлох.
Судалсан онолын мэдлэгийг ашиглан алгоритмын бодлогуудыг хэрэгжүүлэх.
ОНОЛЫН СУДАЛГАА 3.1 Хэрэглэгчийн функц гэж юу болох, функцийн программчлалын зарчим Хэрэглэгчийн функц гэдэг нь програм бичиж буй хүн өөрөө тодорхойлж бичсэн, тодорхой нэртэй, параметр авч тодорхой үйлдэл гүйцэтгэн үр дүн буцаадаг дахин ашиглагдах боломжтой кодын блок юм. Функц нь: • Тодорхой нэртэй. • Оролт (параметр) авна. • Тодорхой үйлдэл гүйцэтгэнэ • Үр дүн (return value) буцаана. Ашиглах шалтгаан нь: • Кодыг хялбар ойлгомжтой болгох • Давхардсан кодоос зайлсхийх • Програмыг модульчлах (modularization) • Алдааг олж засварлахад хялбар болгох 3.2 cin, cout объект cin болон cout нь C++ хэлний стандарт оролт, гаралтын объектууд юм. Эдгээр нь сан дотор тодорхойлогдсон байдаг. • cin → стандарт оролтын урсгал (keyboard input) • cout → стандарт гаралтын урсгал (console output) Эдгээр нь >> болон << оператороор өгөгдөл дамжуулдаг. 3.3 Функцийн параметерт утга, хүснэгт дамжуулах. Функцэд параметр дамжуулах дараах 3 үндсэн арга бий:
Утгаар дамжуулах (Pass by value) Хувьсагчийн хуулбар функцэд дамжина. Функц дотор хийсэн өөрчлөлт эх хувьсагчид нөлөөлөхгүй.
Хаягаар дамжуулах (Pass by address) Pointer ашиглан хувьсагчийн санах ойн хаягийг дамжуулна. Функц доторх өөрчлөлт эх өгөгдөлд шууд нөлөөлнө.
Заалтаар дамжуулах (Pass by reference) Reference (&) ашиглан хувьсагчийг шууд холбоно. Хуулбар үүсэхгүй, анхны хувьсагч өөрчлөгдөнө. Хүснэгт дамжуулах Массив функцэд дамжихдаа эхний элементийн хаяг хэлбэрээр дамждаг. Иймээс функц дотор массивын утгыг өөрчлөхөд эх массив өөрчлөгдөнө. Энэ нь массив санах ойд дараалсан бүтэцтэй хадгалагддагтай холбоотой. 3.4 Санах ойн хаяг гэж юу вэ? Санах ой нь байт (byte)-аар хаяглагдсан дараалсан бүтэцтэй. Санах ойн хаяг нь тухайн өгөгдөл байрлаж буй байршлын дугаар юм. Хувьсагч бүр санах ойд тодорхой хэмжээний зай эзэлж, өөрийн гэсэн хаягтай байдаг. Хаягийг & оператороор авна. Санах ойн хаяг нь ихэвчлэн 16-тын тооллын системээр илэрхийлэгддэг. 3.5 Хаяган хувьсагч гэж юу вэ? Хаяган хувьсагчийн төрөл ямар байдаг мөн багтаамж нь хэдэн байт байдаг вэ? Хаяган хувьсагч нь өөр хувьсагчийн санах ойн хаягийг хадгалдаг хувьсагч юм. Жишээ: int* p; – int төрлийн утгын хаягийг хадгалах pointer. Pointer-ийн төрөл • int* • double* • char* • float* • void* Pointer-ийн төрөл нь ямар төрлийн өгөгдлийг зааж байгааг тодорхойлно. Pointer-ийн багтаамж Pointer-ийн хэмжээ нь системийн архитектураас хамаарна: • 32-bit системд – 4 байт • 64-bit системд – 8 байт Өгөгдлийн төрлөөс үл хамааран бүх pointer ижил хэмжээтэй байдаг. 3.6 new оператор гэж юу вэ? Ямар үйлдэл хийж юу буцаадаг вэ? new оператор нь динамик санах ой (heap memory)-оос зай нөөцөлдөг. Үйлдэл:
Heap санах ойд шаардлагатай хэмжээний зай үүсгэнэ.
Нөөцөлсөн санах ойн хаягийг буцаана. Жишээ: int* p = new int; Динамик санах ойг чөлөөлөхдөө delete оператор ашиглана. new операторыг ашигласнаар програм ажиллах явцдаа санах ойг динамикаар удирдах боломжтой болдог. 3.7 Санах ойн цоорхойн(Memory leak) талаар дэлгэрэнгүй тайлбарла. Санах ойн цоорхой гэж юу болох, ямар дохиолдолд үүсэх, яаж сэргийлэх вэ? Санах ойн цоорхой нь динамик санах ой нөөцөлсний дараа түүнийг чөлөөлөхгүй орхисноор ашиглагдах боломжгүй санах ойн хэсэг үүсэх үзэгдэл юм. Үүсэх нөхцөл • new ашигласан боловч delete хийгээгүй • Pointer-ийн хаягийг сольж өмнөх хаягийг алдах • Exception үүсэх үед чөлөөлөх код ажиллахгүй үлдэх • Цикл дотор олон дахин динамик санах ой нөөцлөх Үр дагавар • Санах ойн хэрэглээ нэмэгдэх • Програмын гүйцэтгэл буурах • Урт хугацаанд системийн тогтвортой байдал алдагдах Сэргийлэх арга • new ашигласан тохиолдолд заавал delete хийх • RAII зарчим баримтлах • Smart pointer ашиглах (unique_ptr, shared_ptr) • Кодын хяналт, тест хийх
ХЭРЭГЖҮҮЛЭЛТ
Хэрэглэгчийн функц ашиглан бодлого бодох #include
using namespace std;

double talbaioloh(double urt, double orgon) { return urt * orgon; }

int main() { double a, b;

cout << "Tegsh ontsogtiin taluudiig oruulna uu: ";
cin >> a >> b;

double S = talbaioloh(a, b);

cout << "Talbai:" << S << endl;
return 0;
} Үр дүн:

cin, cout объект ашиглах #include
using namespace std;

int main() { double p = 3.14; double r; double S;

cout << "Radius: ";
cin >> r;

S = p * r * r;
cout << "Talbai: " << S << endl;
return 0;
} Үр дүн:

Функцийн параметерт утга, хүснэгт дамжуулахыг турших. #include
using namespace std;

int main() { int a = 125; // a huwisagchid 125 gesen utga onooh int *p = &a; // p huwisagchid a huwisagchiin haygiig onooh cout << p << endl; // p huwisagchiin utga buyu a huwisagchiin haygiig hewleh cout << *p << endl; //*p ni p huwisagchiin zaasan haygiin utga buyu a huwisagchiin utga 125-g hewleh p++; // p-d hadgalsan hayag buyu a huwisagchiin haygiig nemegduuleh buyu daraagiin haygiig zaah cout << p << endl; // p-d hadgalsan hayag buyu 1-n haygiin daraagiin haygiig hewleh cout << *p << endl; //*p ni p huwisagchiin zaasan haygiin utga tul daraagiin buyu nemegduulsen hayagiin utgiig hewleh }

Хүнэгт дамжуулах #include

using namespace std;

int main() { int numbers[5]; // 5 urttai massive-t utga onooh int *p; // p huwisagchid int turliin zaagch onooh p = numbers; // p huwisagchid numbers massivnii haygiig onooh *p = 10; // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 0-r haygiin utgad 10 gsn toog onooh p++; // p-d hadgalsan hayag buyu 0-r haygiig nemegduuleh buyu daraagiin haygiig zaah *p = 20; // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 1-r haygiin utgad 20 gsn toog onooh p = &numbers[2]; // p huwisagchid numbers massivnii 2-r haygiin haygiig onooh *p = 30; // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 2-r haygiin utgad 30 gsn toog onooh p = numbers + 3; // p huwisagchid numbers massivnii 3-r haygiin haygiig onooh *p = 40; // *p ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 3-r haygiin utgad 40 gsn toog onooh p = numbers; // p huwisagchid numbers massivnii haygiig onooh *(p + 4) = 50; // *(p + 4) ni p huwisagchiin zaasan haygiin utga buyu numbers massivnii 4-r haygiin utgad 50 gsn toog onooh for (int n = 0; n < 5; n++) // n huwisagchid 0-s 4 hurtel utga onooh buyu massivnii hayguudiig davtah cout << numbers[n] << ", "; // numbers massivnii hayguudiin utguudiig hewleh } 4. Өгөгдлийн төрлөөс үл хамааран pointer хэмжээ ижилхэн байдгийг батлах. #include

using namespace std;

int main() { char *p1; int *p2; double *p3; cout << sizeof(p1) << endl << sizeof(p2) << endl << sizeof(p3); return 0; } Үр дүн: /Миний ашиглаж буй үйлдлийн систем нь 64 bit тул 8 гэсэн утга хэвлэж байна./

Санах ойн хаяг ашиглан 2 хувьсагчийн утга солих #include
using namespace std;

void swap(int *a, int *b) { int m = *a; *a = *b; *b = m; }

int main() { int a = 2, b = 3; swap(&a, &b); cout << "a = " << a << ", b = " << b; } Үр дүн:

new, delete операторын ашиглалтыг шалгах. #include using namespace std;
int main() { int *p = new int; *p = 42;

cout << "Dynamically allocated int utga: " << *p << endl;

delete p;
p = nullptr;
return 0;
} Үр дүн:

ДҮГНЭЛТ Хэрэглэгчийн функц, параметр дамжуулах арга, санах ойн хаяг, pointer, динамик санах ой болон memory leak зэрэг ойлголтууд нь C++ хэлний үндсэн онолын суурь болдог. Эдгээр ойлголтыг зөв эзэмшсэнээр: • C++ хэлний суурь зөв тавигдана • Кодын бүтэц сайжирна • Санах ойн алдаа багасна • Програмын найдвартай ажиллагаа хангагдана Иймд функц болон санах ойн удирдлагын онолыг системтэйгээр ойлгож хэрэгжүүлэх нь программчлалын мэргэжлийн суурь чадварын нэг юм.
АШИГЛАСАН МАТЕРИАЛ cplusplus.com — C++ хэлний үндсэн ойлголтууд, функц, pointer, dynamic memory-ийн тайлбар. cppreference.com — C++ стандарт номын сан болон хэлний дэлгэрэнгүй лавлах. W3Schools — C++ функц, массив, pointer-ийн анхан шатны жишээ, тайлбар. GeeksforGeeks — Pass by value, pass by reference, memory leak-ийн тайлбар ба жишээ. TutorialsPoint — C++ new/delete оператор болон санах ойн удирдлагын тайлбар.
ХАВСРАЛТ
