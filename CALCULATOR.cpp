#include <cmath> //fmod fonksiyonu üretmek için , fmod olmadan modül işlemi double değişkenleri ile yapılamadığından cmatch kütüphanesini ekledim
#include <iostream>
using namespace std;
/*
   STUDENT NAME & SURNAME : WALAA ALSABOUNI
   STUDENT ID NUMBER : 1306230115
   Assignment #1
   DATE : 06* / 11 / 2024  *bazı eskikleri düzeltmek zorunda kaldım
*/
void topla(double a, double b) {
  cout << "toplama Islemi Sonucu =" << a + b << endl;
}

void cikar(double a, double b) {
  cout << " cikarma Islemi Sonucu = " << a - b << endl;
}

void carp(double a, double b) {
  cout << "carpma Islemi Sonucu =" << a * b << endl;
}
void bol(double a, double b) {
  if (b == 0) {
    cout << " Bolme Islemi Yapılamaz " << endl;
  } else
    cout << " Bolme Islemi Sonucu = " << a / b << endl;
}
void mod(double a, double b) {
  std ::cout << "Modul Islemi Sonucu = " << fmod(a, b) << endl;
}
int main() {
  double num1, num2;
  char islem;
  for (int i = 0; i < 11; i++) {
    cout << " ";
  }
  string baslik = "***CALCULATOR***";
  cout << baslik << endl;

  cout << " Lutfen Islem Seciniz ( + , - ,* , / , % ) : ";
  cin >> islem;

  cout << " Ilk Sayiyi Giriniz : ";
  cin >> num1;

  cout << " Ikinci Sayiyi Giriniz : ";
  cin >> num2;

  switch (islem) {
  case ('+'):
    topla(num1, num2);
    break;

  case ('-'):
    cikar(num1, num2);
    break;

  case ('*'):
    carp(num1, num2);
    break;

  case ('/'):
    bol(num1, num2);
    break;

  case ('%'):
    mod(num1, num2);
    break;
  default:
    cout << " eksik veya hatali giris yaptiniz " << endl;
  }
  return 0;
}
