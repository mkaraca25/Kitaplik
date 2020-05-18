/*Melik KARACA 190757079 Bil.M�h.(�.�) C grubu 
Nesneye Y�nelik Programlama BIM-104-50-50-C Bahar 2020
PROJES� 3 Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER*/

#include "Kitaplik.h" //Kitapl�k k�t�phanem

unsigned int Kitaplik::index = 0;  //kitap say�s� 

Kitaplik::Kitaplik()   //yap�c� constructor
{
}
void Kitaplik::addKitap(Kitap& input)  //kitaplar� ekleme fonksiyonum
{
	if (index >= 10)  //index kitap say�s� 10 oldu�undan uyar� ko�ulu
		std::cout << "Kitapl�k doldu" << std::endl;
	else {
		kitaplar[index] = input;
		index++;
	}
}
unsigned int Kitaplik::getKitapSayisi() //kitaplar� say�s� fonksiyonum
{
	std::cout<<"\n";
	return index;
}

void Kitaplik::print()        //kitaplar� yazd�rma fonksiyonum
{
	for (int i = 0; i < index; i++) 
	{
		std::cout<<"\n";
		std::cout << i+1 << ". kitap ismi = " << kitaplar[i].getAd() << " kitabin yazari = " << kitaplar[i].getYazar() << " kitabin turu = " << kitaplar[i].getTur() << " kitabin yayinevi = " << kitaplar[i].getYayinevi() << " kitabin isbnNo = " << kitaplar[i].getisbnNo() << " kitabin sayfaSayisi = " << kitaplar[i].getSayfaSayisi() << " kitabin fiyati = " << kitaplar[i].getFiyat() << " kitabin baski yili = " << kitaplar[i].getBaskiYili() << " kitabin baski sayisi = " << kitaplar[i].getBaskiSayisi() << std::endl;
		std::cout<<"\n";
	}
}
