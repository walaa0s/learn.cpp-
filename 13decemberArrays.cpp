#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    /*1.a name will be entered
    2. The array that finds the copy of the first name will be created
    3.second name string to be entered
    4. Comparison of two names will be calculated */
    char name1[100];

    cout << "isim giriniz ";
    cin >> name1;

    int uzunluk = strlen(name1);

    char kopya[100];
    strcpy(kopya, name1);
    cout << "ilk ismin kopyasi : " << kopya << endl;

    char name2[100];

    cout << "ikinci ismi giriniz :" << name2;
    cin >> name2;

    strcmp(name1, name2);
    cout << "iki ismin karsilastirilmasi : " << strcmp(name2, name1);
}
