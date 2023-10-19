#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float sayi1, sayi2;
	string islem;

	cout << "Lutfen Isleminizi Seciniz" << endl << endl;
	cout << "Toplama (+)" << endl;
	cout << "Cikarma (-)" << endl;
	cout << "Bolme (/)" << endl;
	cout << "Carpma (*)" << endl;
	cout << "Us Alma (^)" << endl;
	cout << "Faktoriyel Alma (!)" << endl;
	cout << "Karekok Alma (V)" << endl;
	cout << "1'Den Baslayarak Toplama (+1)" << endl << endl;
	cin >> islem;
	cout << endl;

	if (islem == "+")
	{
		cout << "Lutfen Birinci Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		cout << "Lutfen Ikinci Sayiyi Giriniz = ";
		cin >> sayi2;
		cout << endl;
		cout << "Isleminizin Sonucu = " << sayi1 + sayi2 << endl;
	}
	else if (islem == "-")
	{
		cout << "Lutfen Birinci Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		cout << "Lutfen Ikinci Sayiyi Giriniz = ";
		cin >> sayi2;
		cout << endl;
		cout << "Isleminizin Sonucu = " << sayi1 - sayi2 << endl;
	}
	else if (islem == "/")
	{
		cout << "Lutfen Birinci Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		cout << "Lutfen Ikinci Sayiyi Giriniz = ";
		cin >> sayi2;
		cout << endl;
		cout << "Isleminizin Sonucu = " << sayi1 / sayi2 << endl;
	}
	else if (islem == "*")
	{
		cout << "Lutfen Birinci Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		cout << "Lutfen Ikinci Sayiyi Giriniz = ";
		cin >> sayi2;
		cout << endl;
		cout << "Isleminizin Sonucu = " << sayi1 * sayi2 << endl;
	}
	else if (islem == "^")
	{
		cout << "Lutfen Taban Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		cout << "Lutfen Us Sayiyi Giriniz = ";
		cin >> sayi2;
		cout << endl;
		cout << "Isleminizin Sonucu = " << pow(sayi1, sayi2) << endl;
	}
	else if (islem == "!")
	{
		int faktoriyel_islemi = 1;
		cout << "Lutfen Faktoriyelini Almak Istediginiz Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		if (sayi1 > 0)
		{
			for (int index = 1; index <= sayi1; index++)
			{
				faktoriyel_islemi = index * faktoriyel_islemi;
			}
			cout << "Isleminizin Sonucu = " << faktoriyel_islemi << endl;
		}
		else if (sayi1 < 0)
		{
			cout << "Negatif Sayilarin Faktoriyeli Alinamaz!" << endl;
		}
		else if (sayi1 == 0)
		{
			cout << "Isleminizin Sonucu = 1" << endl;
		}
	}
	else if (islem == "V")
	{
		cout << "Lutfen Karekokunu Almak Istediginiz Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		if (sayi1 > 0)
		{
			cout << "Isleminizin Sonucu = " << sqrt(sayi1) << endl;
		}
		else if (-1 < sayi1 && sayi1 < 0)
		{
			cout << "Karekokun Icerisi Negatif Olamaz!" << endl;
		}
		else if (sayi1 < -1)
		{
			cout << "Karekokun Icerisi Negatif Olamaz!" << endl;
		}
		else if (sayi1 == -1)
		{
			cout << "Isleminizin Sonucu = i" << endl;
		}
	}
	else if (islem == "+1")
	{
		cout << "Lutfen 1'Den Baslayarak Hangi Sayiya Kadar Toplama Yapmak Istediginizi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		if (sayi1 > 0) 
		{
			cout << "Isleminizin Sonucu = " << sayi1 * (sayi1 + 1) / 2 << endl;
		}
		else if (sayi1 == 0)
		{
			cout << "Isleminizin Sonucu = 1" << endl;
		}
		else if (sayi1 < 0)
		{
			cout << "Isleminizin Sonucu = " << -sayi1 * (-sayi1 + 1) / 2 * -1 + 1 << endl;
		}
	}
	else
	{
		cout << "Hatali Bir Sembol Girdiniz!" << endl;
	}
	return 0;

}
