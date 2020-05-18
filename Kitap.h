/*Melik KARACA 190757079 Bil.M�h.(�.�) C grubu 
Nesneye Y�nelik Programlama BIM-104-50-50-C Bahar 2020
PROJES� 3 Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER*/

#ifndef KITAP_H //ifndef, define ve endif  �ni�lemci direktifleri Polinom S�n�f� tan�m�n�n projenin 
#define KITAP_H //birden fazla dosyas� i�erisinde kullan�m�n�n nesne kodu (object code) b�nyesinde tekrar�n� engeller.
#include <iostream>

class Kitap //kitap s�n�f�m
{
public:

	Kitap(); //yap�c� constructor

	void setAd(std::string& input); //set fonksiyonlar�
	void setYazar(std::string& input);
	void setTur(std::string& input);
	void setYayinevi(std::string& input);
	void setisbnNo(std::string& input);

	std::string& getAd();            //get fonksiyonlar�
	std::string& getYazar();
	std::string& getTur();
	std::string& getYayinevi();
	std::string& getisbnNo();

	void setSayfaSayisi(int input);
	void setBaskiYili(int input);
	void setBaskiSayisi(int input);

	int getSayfaSayisi();
	int getBaskiYili();
	int getBaskiSayisi();

	void setFiyat(double input);
	
	double getFiyat();

private:
	std::string ad,yazar,tur,yayinevi,isbnNo;
	int sayfaSayisi, baskiYili, baskiSayisi;
	double fiyat;
};
#endif
