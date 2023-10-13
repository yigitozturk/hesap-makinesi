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
	cout << "Karekok Alma (V)" << endl << endl;
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
		cout << "Lutfen Birinci Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		cout << "Lutfen Ikinci Sayiyi Giriniz = ";
		cin >> sayi2;
		cout << endl;
		cout << "Isleminizin Sonucu = " << pow(sayi1, sayi2) << endl;
	}
	else if (islem == "V")
	{
		cout << "Lutfen Karekokunu Almak Istediginiz Sayiyi Giriniz = ";
		cin >> sayi1;
		cout << endl;
		cout << "Isleminizin Sonucu = " << sqrt(sayi1) << endl;
	}
	else
	{
		cout << "Hatali Bir Sembol Girdiniz" << endl;
	}
	return 0;

}