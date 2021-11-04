#include <iostream>

using namespace std;

// Menghitung "a^n(a > 0, n a nonnegative integer)"

void pangkat(double a, unsigned int n);

int main(int argc, char const *argv[])
{
	// a^n, a dapat menerima bilangan bulat atau desimal
	// n dapat menerima bilangan bulat non negatif

	double a;
	unsigned int n;

	cout << "Menghitung a^n (a > 0, n a nonnegative integer) tanpa fungsi bawaan" << endl;

	// Memasukkan bilangan a dan n
	cout << "Masukkan a : " << endl;
	cin >> a;

	cout << "Masukkan n : " << endl;
	cin >> n;

	// bilangan a dan n dikirim ke fungsi buatan pangkat(a,n)
	pangkat(a,n);

	return 0;
}

void pangkat(double a, unsigned int n)
{
	double temp = 1.0;		// temp sebagai penampung hasil

	if(n > 0)				// jika n positif
	{
		for(int i = 0; i < n; i++)
		{
		temp = temp*a;
		}	
		cout << "hasil = " << temp << endl;
	}
	else if(n == 0)			// jika n = 0
	{
		cout << "hasil = " << temp << endl;
	}
	else if(n < 0)			// jika n negatif
	{
		for(int i = 0; i > n; i--)
		{
		temp = temp/a;
		}
		cout << "hasil = " << temp << endl;	
	}
}