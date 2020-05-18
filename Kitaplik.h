/*Melik KARACA 190757079 Bil.M�h.(�.�) C grubu 
Nesneye Y�nelik Programlama BIM-104-50-50-C Bahar 2020
PROJES� 3 Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER*/

#ifndef KITAPLIK_H //ifndef, define ve endif  �ni�lemci direktifleri Polinom S�n�f� tan�m�n�n projenin 
#define KITAPLIK_H //birden fazla dosyas� i�erisinde kullan�m�n�n nesne kodu (object code) b�nyesinde tekrar�n� engeller.

#include "Kitap.h"
class Kitaplik  //kitapl�k s�n�f�m�n ad�
{
public:

	Kitaplik();  //yap�c� constructor
	void addKitap(Kitap& input); //kitaplar� ekleme fonksiyonu �a��rma

	unsigned int getKitapSayisi(); //kitaplar� say�s� fonksiyonu �a��rma

	void print();  //kitaplar� yazd�rma fonksiyonu �a��rma
private:

	Kitap* kitaplar = new Kitap[10];  //komposizyon

	static unsigned int index; 
};
#endif
