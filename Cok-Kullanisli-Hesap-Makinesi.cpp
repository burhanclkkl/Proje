#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

class OzelIslem {
private:

	int deger1;
	int deger2;
	int deger3;

public:

	void setislemler(int sayi1, int sayi2)
	{
		deger1 = sayi1;
		deger2 = sayi2;
	}

	void setislem2(float buyuksayi, float kucuksayi, float sayi)
	{
		deger1 = buyuksayi;
		deger2 = kucuksayi;
		deger3 = sayi;
	}

	void setFaktoriyel(int degerinfak)
	{
		deger1 = degerinfak;
	}


	// 1 --- EKOK ÝÞLEMÝ  --> fonksiyon : 2 parametreli
	int ekok(int kucuksayi, int buyuksayi)// 1 --- EKOK ÝÞLEMÝ
	{

		if (deger1 > deger2)
		{
			buyuksayi = deger1;
			kucuksayi = deger2;
		}
		else
		{
			kucuksayi = deger1;
			buyuksayi = deger2;
		}

		int enksayi = kucuksayi;
		while (enksayi % kucuksayi != 0 || enksayi % buyuksayi != 0)
		{
			enksayi += kucuksayi;
		}
		return enksayi;
	}

	// 1--- EKOK ÝÞLEMÝ  --> fonksiyon : 3 parametreli
	int ekok(int kucuksayi, int buyuksayi, int sayi)// 1 --- EKOK ÝÞLEMÝ 
	{

		if (deger1 > deger2)
		{
			buyuksayi = deger1;
			kucuksayi = deger2;
		}
		else
		{
			kucuksayi = deger1;
			buyuksayi = deger2;
		}

		int enksayi = kucuksayi;
		while (enksayi % kucuksayi != 0 || enksayi % buyuksayi != 0 || enksayi % sayi != 0)
		{
			enksayi += kucuksayi;
		}
		return enksayi;
	}


	// 2 --- EBOB ÝÞLEMÝ  --> fonksiyon : 2 parametreli
	int ebob(int kucuksayi, int buyuksayi)// 2 --- EBOB ÝÞLEMÝ 
	{


		if (deger1 > deger2)
		{
			kucuksayi = deger1;
			buyuksayi = deger2;
		}
		else
		{
			kucuksayi = deger1;
			buyuksayi = deger2;
		}

		int bolensayi = kucuksayi;

		while (deger2 % bolensayi != 0 || deger1 % bolensayi != 0)
		{
			bolensayi--;
		}

		return bolensayi;

	}

	// 2 --- EBOB ÝÞLEMÝ  --> fonksiyon : 3 parametreli
	int ebob(int kucuksayi, int buyuksayi, int sayi)// 2 --- EBOB ÝÞLEMÝ 
	{

		if (deger1 > deger2)
		{
			kucuksayi = deger1;
			buyuksayi = deger2;
		}
		else
		{
			kucuksayi = deger1;
			buyuksayi = deger2;
		}

		int bolensayi = kucuksayi;

		while (buyuksayi % bolensayi != 0 || kucuksayi % bolensayi != 0 || sayi % bolensayi != 0)
		{
			bolensayi--;
		}

		return bolensayi;

	}

	// 3 --- FAKTÖRÝYEL ÝÞLEMÝ  --> fonksiyon : 1 parametreli

	int faktoriyel(int degerinfak)// 3 --- FAKTÖRÝYEL ÝÞLEMÝ 
	{
		int sonuc;

		if (degerinfak == 1 || degerinfak == 0)
		{
			return 1;
		}

		else
		{
			sonuc = degerinfak * faktoriyel(degerinfak - 1);
		}
		return sonuc;

	}

	// 4 --- ÜS ALMA ÝÞLEMÝ  --> fonksiyon : 2 parametreli

	int usalma(int deger2, int deger1)	// 4 --- ÜS ALMA ÝÞLEMÝ 
	{
		int cevap = 1;
		for (int i = 1; i <= deger2; i++)
		{
			cevap *= deger1;
		}
		return cevap;
	}
};



// Dört Ýþlem Class' ý 

class DortIslem
{
private:

	float deger1;
	float deger2;
	float deger3;


public:
	void setislem(float sayi1, float sayi2)
	{
		deger1 = sayi1;
		deger2 = sayi2;
	}

	void settopla(float deger1, float deger2) // TOPLAMA ÝÞLEMÝ
	{

	}

	float gettopla() {
		return deger1 + deger2;
	}




	// 1 --- ÇIKARMA ÝÞLEMÝ  --> fonksiyon : 2 parametreli
	void setcikar(float deger1, float deger2) // ÇIKARMA ÝÞLEMÝ
	{

	}

	float getcikar(float deger1, float deger2) {

		return deger1 - deger2;
	}


	// 1 --- ÇARPMA ÝÞLEMÝ  --> fonksiyon : 2 parametreli
	void setcarp(float deger1, float deger2) // ÇARPMA ÝÞLEMÝ

	{

	}

	float getcarp(float deger1, float deger2) {

		return deger1 * deger2;
	}

	// 1 --- BÖLEM ÝÞLEMÝ  --> fonksiyon : 2 parametreli
	void getbol(float deger1, float deger2) // BÖLME ÝÞLEMÝ
	{

	}
	float getbol() {

		return deger1 / deger2;
	}

	void setislem2(float sayi1, float sayi2, float sayi3)
	{
		deger1 = sayi1;
		deger2 = sayi2;
		deger3 = sayi3;
	}


	// 2 --- TOPLAMA ÝÞLEMÝ  --> fonksiyon : 3 parametreli
	void settopla(float deger1, float deger2, float deger3) // TOPLAMA ÝÞLEMÝ
	{

	}
	float gettopla(float deger1, float deger2, float deger3) {
		return deger1 + deger2 + deger3;
	}

	// 2 --- ÇIKARMA ÝÞLEMÝ  --> fonksiyon : 3 parametreli
	void setcikar(float deger1, float deger2, float deger3) // ÇIKARMA ÝÞLEMÝ
	{

	}
	float getcikar(float deger1, float deger2, float deger3) {
		return  deger1 - deger2 - deger3;
	}
	// 2 --- ÇARPMA ÝÞLEMÝ  --> fonksiyon : 3 parametreli
	void setcarp(float deger1, float deger2, float deger3) // ÇARPMA ÝÞLEMÝ
	{

	}

	float getcarp(float deger1, float deger2, float deger3) {
		return deger1 * deger2 * deger3;
	}

};



class Islemler
{
private:
	int tercih;

public:
	Islemler()
	{
		tercih = 0;
	}
	void menu() {
		setlocale(LC_ALL, "Turkish");

		int secim;

		while (true)
		{
			cout << "          ÇOK KULLANIÞLI HESAP MAKÝNESÝ  \n ";
			cout << "_________________________________________________ \n\n" << endl;

			cout << " 1 - EKOK ( En Küçük Ortak Kat ) Ýþlemi" << endl;
			cout << " 2 - EBOB ( En Büyük Ortak Bölen ) Ýþlemi" << endl;
			cout << " 3 - Faktöriyel Hesabý " << endl;
			cout << " 4 - Üs Alma Ýþlemi" << endl;
			cout << " 5 - Toplama Ýþlemi" << endl;
			cout << " 6 - Çýkarma Ýþlemi" << endl;
			cout << " 7 - Çarpma Ýþlemi" << endl;
			cout << " 8 - Bölme Ýþlemi" << endl;
			cout << "     Seçim : " << endl;

			cin >> secim;
			cout << "\n";

			if (secim > 8 || secim <= 0)
			{
				cout << "Yanlýþ seçim yaptýnýz \n" << endl;

				cout << " _________________________________________________ \n\n" << endl;
			}





			// 111111 ------------------------

			if (secim == 1) //  1 ---- EKOK ( En Küçük Ortak Kat ) Ýþlemi
			{
				cout << " 2 - EKOK ( En Küçük Ortak Kat ) Ýþlemi " << endl;
				cout << " _____________________________________________" << endl;

				char sec;
				while (true)
				{

					int sayi; // Ekok alma Ýþlemi

					cout << " \n Ekok' unu Almak Ýstediðiniz Sayý Miktarýný Seçiniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanlýþ Deðer Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2) // Eðer EKOK' u alýnmak istenen sayý miktarý 2 ise
					{
						int kucuksayi, buyuksayi;


						cout << " Ekok' unu Almak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> kucuksayi;

						cout << " Ýkinci Deðer : ";
						cin >> buyuksayi;

						OzelIslem v;
						v.setislemler(kucuksayi, buyuksayi);

						cout << "Ýþlem Sonucu : " << v.ekok(kucuksayi, buyuksayi) << endl;
						cout << "\n\n\n";
					}

					if (sayi == 3) // Eðer EKOK' u alýnmak istenen sayý miktarý 3 ise
					{
						int kucuksayi, buyuksayi, sayi;

						OzelIslem t;

						cout << " Ekok' unu Almak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> kucuksayi;

						cout << " Ýkinci Deðer : ";
						cin >> buyuksayi;

						cout << " Üçüncü Deðer : ";
						cin >> sayi;

						t.setislem2(buyuksayi, kucuksayi, sayi);
						cout << "Ýþlem Sonucu : " << t.ekok(buyuksayi, kucuksayi, sayi) << endl;
						cout << "\n\n\n";
					}


					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> EKOK Ýþlemi Menüsü ' - 'H/h -> Ana Menü' " << endl;
					cin >> sec;
					cout << "\n\n\n";

					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}






			// 222222 ------------------------
			else if (secim == 2) // 2 ---- EBOB ( En Büyük Ortak Bölen ) Ýþlemi
			{
				char sec;
				while (true)
				{
					int sayi; // EBOB alma Ýþlemi

					cout << " \n Ebob' unu Almak Ýstediðiniz Sayý Miktarýný Seçiniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanlýþ Deðer Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2) // Eðer EBOB' unu Alýnmak istenen sayý miktarý 2 ise
					{
						int kucuksayi, buyuksayi;


						cout << " Ebob' unu Almak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> kucuksayi;

						cout << " Ýkinci Deðer : ";
						cin >> buyuksayi;

						OzelIslem v;
						v.setislemler(kucuksayi, buyuksayi);

						cout << "Ýþlem Sonucu : " << v.ebob(kucuksayi, buyuksayi) << endl;
						cout << "\n\n\n";
					}

					if (sayi == 3) // Eðer EBOB' unu Alýnmak istenen sayý miktarý 3 ise
					{
						int kucuksayi, buyuksayi, sayi;

						OzelIslem t;

						cout << " Ebob' unu Almak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> kucuksayi;

						cout << " Ýkinci Deðer : ";
						cin >> buyuksayi;

						cout << " Üçüncü Deðer : ";
						cin >> sayi;

						t.setislem2(buyuksayi, kucuksayi, sayi);
						cout << "Ýþlem Sonucu : " << t.ebob(buyuksayi, kucuksayi, sayi) << endl;
						cout << "\n\n\n";
					}


					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> EBOB Ýþlemi Menüsü ' - 'H/h -> Ana Menü' " << endl;
					cin >> sec;
					cout << "\n\n\n";

					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}









			// 333333 ------------------------
			else if (secim == 3) // 3 ---- Faktöriyel Hesabý
			{
				char sec;
				while (true)
				{
					cout << " 3 - Faktöriyel Hesabý " << endl;
					cout << " _____________________________________________" << endl;

					int deger1;


					cout << " Faktöriyel Almak Ýstediðiniz Deðeri Giriniz :" << endl;

					cout << " Sayý Deðeri : ";
					cin >> deger1;

					OzelIslem a;
					a.setFaktoriyel(deger1);

					cout << "Ýþlem Sonucu : " << a.faktoriyel(deger1) << endl;
					cout << "\n\n\n";



					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> Faktöriyel Ýþlemi Menüsü ' - 'H/h -> Ana Menü' " << endl;
					cin >> sec;
					cout << "\n\n\n";


					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}

			}









			// 444444 ------------------------
			else if (secim == 4) // 4 ---- Üs Alma Ýþlemi
			{

				char sec;
				while (true)
				{
					cout << " 4 - Üs Alma Ýþlemi" << endl;
					cout << " _____________________________________________" << endl;


					int deger1;
					int deger2;


					cout << " Üs Almak Ýstediðiniz Deðeri Giriniz :" << endl;

					cout << " Sayýyý Deðeri Giriniz : ";
					cin >> deger1;

					cout << " Üs Deðeri GÝriniz : ";
					cin >> deger2;

					OzelIslem a;
					a.setislemler(deger2, deger1);

					cout << "Ýþlem Sonucu : " << a.usalma(deger2, deger1) << endl;
					cout << "\n\n\n";



					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> Üs Alma Ýþlemi Menüsü ' - 'H/h -> Ana Menü' " << endl;
					cin >> sec;
					cout << "\n\n\n";


					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}







			// 555555 ------------------------
			else if (secim == 5) // 5 ---- Toplama Ýþlemi
			{

				char sec;
				while (true)
				{
					cout << " 5 - Toplama Ýþlemi" << endl;
					cout << " _____________________________________________" << endl;


					int sayi; // Toplamak istenen sayý miktarý

					cout << " \n Toplamak Ýstediðiniz Sayý Miktarýný Seçiniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanlýþ Deðer Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2)// Eðer Toplamak istenen sayý miktarý 2 ise
					{

						float deger1, deger2;


						cout << " Toplamak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> deger1;

						cout << " Ýkinci Deðer : ";
						cin >> deger2;

						DortIslem a;
						a.setislem(deger1, deger2);

						cout << "Ýþlem Sonucu : " << a.gettopla() << endl;
						cout << "\n\n\n";
					}
					if (sayi == 3) // Eðer Toplamak istenen sayý miktarý 3 ise
					{
						float deger1, deger2, deger3;

						DortIslem a;

						cout << " Toplamak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> deger1;

						cout << " Ýkinci Deðer : ";
						cin >> deger2;

						cout << " Üçüncü Deðer : ";
						cin >> deger3;

						a.setislem2(deger1, deger2, deger3);
						cout << "Ýþlem Sonucu : " << a.gettopla(deger1, deger2, deger3) << endl;
						cout << "\n\n\n";
					}


					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> Toplama Ýþlemi Menüsü ' - 'H/h -> Ana Menü' " << endl;
					cin >> sec;
					cout << "\n\n\n";

					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}









			// 666666 ------------------------
			else if (secim == 6) // 6 ---- Çýkarma Ýþlemi
			{
				char sec;

				while (true)
				{
					cout << " 6 - Çýkarma Ýþlemi" << endl;
					cout << " _____________________________________________" << endl;

					int sayi; // Çýkarýlmak istenen sayý miktarý

					cout << " \n Çýkarmak Ýstediðiniz Sayý Miktarýný Seçiniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanlýþ Deðer Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2)// Eðer Çýkarýlmak istenen sayý miktarý 2 ise
					{
						float deger1, deger2;
						DortIslem b;

						cout << " Çýkarmak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> deger1;

						cout << " Ýkinci Deðer : ";
						cin >> deger2;

						b.setislem(deger1, deger2);
						cout << "Ýþlem Sonucu : " << b.getcikar(deger1, deger2) << endl;

						cout << "\n\n\n";

					}
					if (sayi == 3) // Eðer Çýkarýlmak istenen sayý miktarý 3 ise
					{

						float deger1, deger2, deger3;
						DortIslem b;

						cout << " Çýkarmak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> deger1;

						cout << " Ýkinci Deðer : ";
						cin >> deger2;

						cout << " Üçüncü Deðer : ";
						cin >> deger3;

						b.setislem2(deger1, deger2, deger3);
						cout << "Ýþlem Sonucu : " << b.getcikar(deger1, deger2, deger3) << endl;

						cout << "\n\n\n";


					}


					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> Çýkarma Ýþlemi Menüsü ' - 'H/h -> Ana Menü '  " << endl;
					cin >> sec;
					cout << "\n\n\n";

					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}







			// 777777 ------------------------
			else if (secim == 7) // 7 ---- Çarpma Ýþlemi
			{
				char sec;
				while (true)
				{
					cout << " 7 - Çarpma Ýþlemi" << endl;
					cout << " _____________________________________________" << endl;

					int sayi; // Çarpmak istenen sayý miktarý

					cout << " \n Çarpmak Ýstediðiniz Sayý Miktarýný Seçiniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanlýþ Deðer Girdiniz ... " << endl;
						cout << "\n\n\n";
					}


					if (sayi == 2) // Eðer Çarpmak istenen sayý miktarý 3 ise
					{

						float deger1, deger2;
						DortIslem c;

						cout << " Çarpmak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> deger1;

						cout << " Ýkinci Deðer : ";
						cin >> deger2;

						c.setislem(deger1, deger2);

						cout << "Ýþlem Sonucu : " << c.getcarp(deger1, deger2) << endl;
						cout << "\n\n\n";

					}
					if (sayi == 3) // Eðer Çarpmak istenen sayý miktarý 3 ise
					{

						float deger1, deger2, deger3;
						DortIslem c;

						cout << " Çarpmak Ýstediðiniz Deðerleri Giriniz :" << endl;

						cout << " Birinci Deðer : ";
						cin >> deger1;

						cout << " Ýkinci Deðer : ";
						cin >> deger2;

						cout << " Üçüncü Deðer : ";
						cin >> deger3;

						c.setislem2(deger1, deger2, deger3);
						cout << "Ýþlem Sonucu : " << c.getcarp(deger1, deger2, deger3) << endl;
						cout << "\n\n\n";

					}


					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> Çarpma Ýþlemi Menüsü ' - 'H/h -> Ana Menü ' " << endl;
					cin >> sec;
					cout << "\n\n\n";

					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}









			// 888888 ------------------------
			else if (secim == 8) // 8 ---- Bölme Ýþlemi 
			{

				char sec;
				while (true)
				{
					cout << " 8 - Bölme Ýþlemi " << endl;
					cout << " _____________________________________________" << endl;

					int sayi; // Bölmek istenen sayý miktarý


					float deger1, deger2;
					DortIslem d;

					cout << " Bölmek Ýstediðiniz Deðerleri Giriniz :" << endl;

					cout << " Pay Deðeri : ";
					cin >> deger1;

					cout << " Payda Deðeri : ";
					cin >> deger2;

					d.setislem(deger1, deger2);
					cout << "Ýþlem Sonucu : " << d.getbol() << endl;
					cout << "\n\n\n";


					// YENÝDEN DENEME KODLARI 
					cout << " Yeniden Denemek Ýster Misiniz ? ' E/e -> Bölme Ýþlemi Menüsü ' - 'H/h -> Ana Menü ' " << endl;
					cin >> sec;
					cout << "\n\n\n";

					if (sec == 'H' || sec == 'h')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}

		}


	}


};

int main()
{

	Islemler ekran;
	ekran.menu();

	system("PAUSE");
	return 0;
}
