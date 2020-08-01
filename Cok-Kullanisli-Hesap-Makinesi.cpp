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


	// 1 --- EKOK ��LEM�  --> fonksiyon : 2 parametreli
	int ekok(int kucuksayi, int buyuksayi)// 1 --- EKOK ��LEM�
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

	// 1--- EKOK ��LEM�  --> fonksiyon : 3 parametreli
	int ekok(int kucuksayi, int buyuksayi, int sayi)// 1 --- EKOK ��LEM� 
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


	// 2 --- EBOB ��LEM�  --> fonksiyon : 2 parametreli
	int ebob(int kucuksayi, int buyuksayi)// 2 --- EBOB ��LEM� 
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

	// 2 --- EBOB ��LEM�  --> fonksiyon : 3 parametreli
	int ebob(int kucuksayi, int buyuksayi, int sayi)// 2 --- EBOB ��LEM� 
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

	// 3 --- FAKT�R�YEL ��LEM�  --> fonksiyon : 1 parametreli

	int faktoriyel(int degerinfak)// 3 --- FAKT�R�YEL ��LEM� 
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

	// 4 --- �S ALMA ��LEM�  --> fonksiyon : 2 parametreli

	int usalma(int deger2, int deger1)	// 4 --- �S ALMA ��LEM� 
	{
		int cevap = 1;
		for (int i = 1; i <= deger2; i++)
		{
			cevap *= deger1;
		}
		return cevap;
	}
};



// D�rt ��lem Class' � 

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

	void settopla(float deger1, float deger2) // TOPLAMA ��LEM�
	{

	}

	float gettopla() {
		return deger1 + deger2;
	}




	// 1 --- �IKARMA ��LEM�  --> fonksiyon : 2 parametreli
	void setcikar(float deger1, float deger2) // �IKARMA ��LEM�
	{

	}

	float getcikar(float deger1, float deger2) {

		return deger1 - deger2;
	}


	// 1 --- �ARPMA ��LEM�  --> fonksiyon : 2 parametreli
	void setcarp(float deger1, float deger2) // �ARPMA ��LEM�

	{

	}

	float getcarp(float deger1, float deger2) {

		return deger1 * deger2;
	}

	// 1 --- B�LEM ��LEM�  --> fonksiyon : 2 parametreli
	void getbol(float deger1, float deger2) // B�LME ��LEM�
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


	// 2 --- TOPLAMA ��LEM�  --> fonksiyon : 3 parametreli
	void settopla(float deger1, float deger2, float deger3) // TOPLAMA ��LEM�
	{

	}
	float gettopla(float deger1, float deger2, float deger3) {
		return deger1 + deger2 + deger3;
	}

	// 2 --- �IKARMA ��LEM�  --> fonksiyon : 3 parametreli
	void setcikar(float deger1, float deger2, float deger3) // �IKARMA ��LEM�
	{

	}
	float getcikar(float deger1, float deger2, float deger3) {
		return  deger1 - deger2 - deger3;
	}
	// 2 --- �ARPMA ��LEM�  --> fonksiyon : 3 parametreli
	void setcarp(float deger1, float deger2, float deger3) // �ARPMA ��LEM�
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
			cout << "          �OK KULLANI�LI HESAP MAK�NES�  \n ";
			cout << "_________________________________________________ \n\n" << endl;

			cout << " 1 - EKOK ( En K���k Ortak Kat ) ��lemi" << endl;
			cout << " 2 - EBOB ( En B�y�k Ortak B�len ) ��lemi" << endl;
			cout << " 3 - Fakt�riyel Hesab� " << endl;
			cout << " 4 - �s Alma ��lemi" << endl;
			cout << " 5 - Toplama ��lemi" << endl;
			cout << " 6 - ��karma ��lemi" << endl;
			cout << " 7 - �arpma ��lemi" << endl;
			cout << " 8 - B�lme ��lemi" << endl;
			cout << "     Se�im : " << endl;

			cin >> secim;
			cout << "\n";

			if (secim > 8 || secim <= 0)
			{
				cout << "Yanl�� se�im yapt�n�z \n" << endl;

				cout << " _________________________________________________ \n\n" << endl;
			}





			// 111111 ------------------------

			if (secim == 1) //  1 ---- EKOK ( En K���k Ortak Kat ) ��lemi
			{
				cout << " 2 - EKOK ( En K���k Ortak Kat ) ��lemi " << endl;
				cout << " _____________________________________________" << endl;

				char sec;
				while (true)
				{

					int sayi; // Ekok alma ��lemi

					cout << " \n Ekok' unu Almak �stedi�iniz Say� Miktar�n� Se�iniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanl�� De�er Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2) // E�er EKOK' u al�nmak istenen say� miktar� 2 ise
					{
						int kucuksayi, buyuksayi;


						cout << " Ekok' unu Almak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> kucuksayi;

						cout << " �kinci De�er : ";
						cin >> buyuksayi;

						OzelIslem v;
						v.setislemler(kucuksayi, buyuksayi);

						cout << "��lem Sonucu : " << v.ekok(kucuksayi, buyuksayi) << endl;
						cout << "\n\n\n";
					}

					if (sayi == 3) // E�er EKOK' u al�nmak istenen say� miktar� 3 ise
					{
						int kucuksayi, buyuksayi, sayi;

						OzelIslem t;

						cout << " Ekok' unu Almak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> kucuksayi;

						cout << " �kinci De�er : ";
						cin >> buyuksayi;

						cout << " ���nc� De�er : ";
						cin >> sayi;

						t.setislem2(buyuksayi, kucuksayi, sayi);
						cout << "��lem Sonucu : " << t.ekok(buyuksayi, kucuksayi, sayi) << endl;
						cout << "\n\n\n";
					}


					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> EKOK ��lemi Men�s� ' - 'H/h -> Ana Men�' " << endl;
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
			else if (secim == 2) // 2 ---- EBOB ( En B�y�k Ortak B�len ) ��lemi
			{
				char sec;
				while (true)
				{
					int sayi; // EBOB alma ��lemi

					cout << " \n Ebob' unu Almak �stedi�iniz Say� Miktar�n� Se�iniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanl�� De�er Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2) // E�er EBOB' unu Al�nmak istenen say� miktar� 2 ise
					{
						int kucuksayi, buyuksayi;


						cout << " Ebob' unu Almak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> kucuksayi;

						cout << " �kinci De�er : ";
						cin >> buyuksayi;

						OzelIslem v;
						v.setislemler(kucuksayi, buyuksayi);

						cout << "��lem Sonucu : " << v.ebob(kucuksayi, buyuksayi) << endl;
						cout << "\n\n\n";
					}

					if (sayi == 3) // E�er EBOB' unu Al�nmak istenen say� miktar� 3 ise
					{
						int kucuksayi, buyuksayi, sayi;

						OzelIslem t;

						cout << " Ebob' unu Almak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> kucuksayi;

						cout << " �kinci De�er : ";
						cin >> buyuksayi;

						cout << " ���nc� De�er : ";
						cin >> sayi;

						t.setislem2(buyuksayi, kucuksayi, sayi);
						cout << "��lem Sonucu : " << t.ebob(buyuksayi, kucuksayi, sayi) << endl;
						cout << "\n\n\n";
					}


					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> EBOB ��lemi Men�s� ' - 'H/h -> Ana Men�' " << endl;
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
			else if (secim == 3) // 3 ---- Fakt�riyel Hesab�
			{
				char sec;
				while (true)
				{
					cout << " 3 - Fakt�riyel Hesab� " << endl;
					cout << " _____________________________________________" << endl;

					int deger1;


					cout << " Fakt�riyel Almak �stedi�iniz De�eri Giriniz :" << endl;

					cout << " Say� De�eri : ";
					cin >> deger1;

					OzelIslem a;
					a.setFaktoriyel(deger1);

					cout << "��lem Sonucu : " << a.faktoriyel(deger1) << endl;
					cout << "\n\n\n";



					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> Fakt�riyel ��lemi Men�s� ' - 'H/h -> Ana Men�' " << endl;
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
			else if (secim == 4) // 4 ---- �s Alma ��lemi
			{

				char sec;
				while (true)
				{
					cout << " 4 - �s Alma ��lemi" << endl;
					cout << " _____________________________________________" << endl;


					int deger1;
					int deger2;


					cout << " �s Almak �stedi�iniz De�eri Giriniz :" << endl;

					cout << " Say�y� De�eri Giriniz : ";
					cin >> deger1;

					cout << " �s De�eri G�riniz : ";
					cin >> deger2;

					OzelIslem a;
					a.setislemler(deger2, deger1);

					cout << "��lem Sonucu : " << a.usalma(deger2, deger1) << endl;
					cout << "\n\n\n";



					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> �s Alma ��lemi Men�s� ' - 'H/h -> Ana Men�' " << endl;
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
			else if (secim == 5) // 5 ---- Toplama ��lemi
			{

				char sec;
				while (true)
				{
					cout << " 5 - Toplama ��lemi" << endl;
					cout << " _____________________________________________" << endl;


					int sayi; // Toplamak istenen say� miktar�

					cout << " \n Toplamak �stedi�iniz Say� Miktar�n� Se�iniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanl�� De�er Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2)// E�er Toplamak istenen say� miktar� 2 ise
					{

						float deger1, deger2;


						cout << " Toplamak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> deger1;

						cout << " �kinci De�er : ";
						cin >> deger2;

						DortIslem a;
						a.setislem(deger1, deger2);

						cout << "��lem Sonucu : " << a.gettopla() << endl;
						cout << "\n\n\n";
					}
					if (sayi == 3) // E�er Toplamak istenen say� miktar� 3 ise
					{
						float deger1, deger2, deger3;

						DortIslem a;

						cout << " Toplamak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> deger1;

						cout << " �kinci De�er : ";
						cin >> deger2;

						cout << " ���nc� De�er : ";
						cin >> deger3;

						a.setislem2(deger1, deger2, deger3);
						cout << "��lem Sonucu : " << a.gettopla(deger1, deger2, deger3) << endl;
						cout << "\n\n\n";
					}


					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> Toplama ��lemi Men�s� ' - 'H/h -> Ana Men�' " << endl;
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
			else if (secim == 6) // 6 ---- ��karma ��lemi
			{
				char sec;

				while (true)
				{
					cout << " 6 - ��karma ��lemi" << endl;
					cout << " _____________________________________________" << endl;

					int sayi; // ��kar�lmak istenen say� miktar�

					cout << " \n ��karmak �stedi�iniz Say� Miktar�n� Se�iniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanl�� De�er Girdiniz ... " << endl;
						cout << "\n\n\n";
					}

					if (sayi == 2)// E�er ��kar�lmak istenen say� miktar� 2 ise
					{
						float deger1, deger2;
						DortIslem b;

						cout << " ��karmak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> deger1;

						cout << " �kinci De�er : ";
						cin >> deger2;

						b.setislem(deger1, deger2);
						cout << "��lem Sonucu : " << b.getcikar(deger1, deger2) << endl;

						cout << "\n\n\n";

					}
					if (sayi == 3) // E�er ��kar�lmak istenen say� miktar� 3 ise
					{

						float deger1, deger2, deger3;
						DortIslem b;

						cout << " ��karmak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> deger1;

						cout << " �kinci De�er : ";
						cin >> deger2;

						cout << " ���nc� De�er : ";
						cin >> deger3;

						b.setislem2(deger1, deger2, deger3);
						cout << "��lem Sonucu : " << b.getcikar(deger1, deger2, deger3) << endl;

						cout << "\n\n\n";


					}


					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> ��karma ��lemi Men�s� ' - 'H/h -> Ana Men� '  " << endl;
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
			else if (secim == 7) // 7 ---- �arpma ��lemi
			{
				char sec;
				while (true)
				{
					cout << " 7 - �arpma ��lemi" << endl;
					cout << " _____________________________________________" << endl;

					int sayi; // �arpmak istenen say� miktar�

					cout << " \n �arpmak �stedi�iniz Say� Miktar�n� Se�iniz ( '2' - '3' ) : ";
					cin >> sayi;

					if (sayi != 2 && sayi != 3) {
						cout << " Yanl�� De�er Girdiniz ... " << endl;
						cout << "\n\n\n";
					}


					if (sayi == 2) // E�er �arpmak istenen say� miktar� 3 ise
					{

						float deger1, deger2;
						DortIslem c;

						cout << " �arpmak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> deger1;

						cout << " �kinci De�er : ";
						cin >> deger2;

						c.setislem(deger1, deger2);

						cout << "��lem Sonucu : " << c.getcarp(deger1, deger2) << endl;
						cout << "\n\n\n";

					}
					if (sayi == 3) // E�er �arpmak istenen say� miktar� 3 ise
					{

						float deger1, deger2, deger3;
						DortIslem c;

						cout << " �arpmak �stedi�iniz De�erleri Giriniz :" << endl;

						cout << " Birinci De�er : ";
						cin >> deger1;

						cout << " �kinci De�er : ";
						cin >> deger2;

						cout << " ���nc� De�er : ";
						cin >> deger3;

						c.setislem2(deger1, deger2, deger3);
						cout << "��lem Sonucu : " << c.getcarp(deger1, deger2, deger3) << endl;
						cout << "\n\n\n";

					}


					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> �arpma ��lemi Men�s� ' - 'H/h -> Ana Men� ' " << endl;
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
			else if (secim == 8) // 8 ---- B�lme ��lemi 
			{

				char sec;
				while (true)
				{
					cout << " 8 - B�lme ��lemi " << endl;
					cout << " _____________________________________________" << endl;

					int sayi; // B�lmek istenen say� miktar�


					float deger1, deger2;
					DortIslem d;

					cout << " B�lmek �stedi�iniz De�erleri Giriniz :" << endl;

					cout << " Pay De�eri : ";
					cin >> deger1;

					cout << " Payda De�eri : ";
					cin >> deger2;

					d.setislem(deger1, deger2);
					cout << "��lem Sonucu : " << d.getbol() << endl;
					cout << "\n\n\n";


					// YEN�DEN DENEME KODLARI 
					cout << " Yeniden Denemek �ster Misiniz ? ' E/e -> B�lme ��lemi Men�s� ' - 'H/h -> Ana Men� ' " << endl;
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
