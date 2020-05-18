/*Melik KARACA 190757079 Bil.M�h.(�.�) C grubu 
Nesneye Y�nelik Programlama BIM-104-50-50-C Bahar 2020
PROJES� 3 Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER*/

#include "Kitaplik.h" //kitapl�k k�t�phanem
#include <string> //metin karakterler

int main() 
{
    setlocale(LC_ALL, "Turkish"); //kitab� yazd�ktan sonra t�rk�e karakteri de d�zg�n yazmna kodu
	char program;
	Kitaplik kitaplik;

	while (true)  //kitaplar� ekleme,yazd�rma ve say�s�n�, programdan ��k�� d�ng�s�
	{
		std::cout << "Kitap eklemek icin : 'A' "<< std::endl;
		std::cout << "Kac kitap oldu�unu ��renmek icin : 'B' "<< std::endl; 
		std::cout << "T�m kitaplara ait bilgileri g�r�nt�lemek icin : 'C' "<< std::endl;
		std::cout << "Programdan ��kmak i�in 'D' giriniz : " << std::endl;
		std::cout << "\nBir se�enek se�in l�tfen :";
		std::cin >> program;

		if (program == 'A')  //'A'girdi�inde kitaplar� ekleme ko�ulu
		{

			Kitap kitap;
			std::string ad, yazar, tur, yayinevi, isbnNo;
			int sayfaSayisi, baskiYili, baskiSayisi;
			double fiyat;
            std::getline(std::cin,ad);
			std::cout << "Kitab�n ad�n� giriniz :" << std::endl;
			std::getline(std::cin,ad);
			std::cout << "Kitab�n yazar�n� giriniz :" << std::endl;
			std::getline(std::cin, yazar);
			std::cout << "Kitab�n t�r� giriniz :" << std::endl;
			std::getline(std::cin, tur);
			std::cout << "Kitab�n yayinevi giriniz :" << std::endl;
			std::getline(std::cin, yayinevi);
			std::cout << "Kitab�n isbnNo giriniz :" << std::endl;
			std::getline(std::cin, isbnNo);
			std::cout << "Kitab�n sayfa say�s�n� giriniz :" << std::endl;
			std::cin >> sayfaSayisi;
			std::cout << "Kitab�n fiyat�n� giriniz :" << std::endl;
			std::cin >> fiyat;
			std::cout << "Kitab�n bask� y�l�n� giriniz :" << std::endl;
			std::cin >> baskiYili;
			std::cout << "Kitab�n bask� say�s�n� giriniz :" << std::endl;
			std::cin >> baskiSayisi;

			kitap.setAd(ad);
			kitap.setYazar(yazar);
			kitap.setTur(tur);
			kitap.setYayinevi(yayinevi);
			kitap.setisbnNo(isbnNo);
			kitap.setSayfaSayisi(sayfaSayisi);
			kitap.setFiyat(fiyat);
			kitap.setBaskiYili(baskiYili);
			kitap.setBaskiSayisi(baskiSayisi);

			kitaplik.addKitap(kitap); //kitaplar� kitapl��a ekleme
		}
		else if (program == 'B')  //kitap say�s� ko�ulu
		{
			std::cout << "Kitap say�s� = " << kitaplik.getKitapSayisi() <<std::endl;
		}
		else if (program == 'C')  //kitaplar� yazd�rma ko�ulu
		{
			kitaplik.print();
		}
		else if (program == 'D') //programdan ��k�� ko�ulu
		 {
			return 0;
		}
		else          //yanl�� de�er girdi�inde ko�ulu
		 {
			std::cout << "Yanl�� girdiniz. L�tfen tekrar deneyiniz :" << std::endl;
		}
	}
}
