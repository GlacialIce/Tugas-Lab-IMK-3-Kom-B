#include<iostream>
#include<math.h>

using namespace std;

// Deklarasi struct untuk polinomial
struct poly
{
 int coeff;
 int expo;
};

// Prototype fungsi
int BacaPoly(struct poly []);
void PolyTampil( struct poly [],int terms);
int Hitung(int n1,struct poly []);

int main()
{
    int n1;
    int value;
    struct poly p1[20];

    cout << "\n Masukkan detail dari polinomial yang ingn dihitung : ";
    n1 = BacaPoly(p1);
    cout << "\n  Polinomial dimasukkan : ";
    PolyTampil(p1,n1);
    value = Hitung(n1,p1);
    cout << "\n Hasil akhir polinomial = "<< value << endl;

    return 0;
}

// Fungsi untuk Membentuk Polinomial
int BacaPoly(struct poly p[])
{
    int t1,i;

    cout << "\n Masukkan jumlah angka di polinomial : ";
    cin >> t1;
    cout << "\n masukkan koefisien dan eksponen bilangan "<<endl;
    for(i = 0; i < t1; i++)
    {
	   cout << "  Masukkan Koefisien ke-("<<i+1<<"):";
	   cin >> p[i].coeff;
	   cout << "     Masukkan Eksponen ke-("<<i+1<<"):";
	   cin >> p[i].expo;
    }

    return(t1);
}

// Fungsi untuk menampilkan polinomial yang telah dibentuk
void PolyTampil(struct poly p[10], int term)
{
    int k;

    for(k = 0; k < term-1; k++)
	   cout << p[k].coeff << "(x^" << p[k].expo << ")+";

    cout << p[k].coeff << "(x^" << p[k].expo << ")";
}

// Fungsi untuk menghitung polinomial
int Hitung(int n1, struct poly p1[])
{
    int i,sum,x;
    cout << "\n\n Masukkan nilai x untuk perhitungan : ";
    cin >> x;
    sum = 0;

    for(i = 0; i < n1; i++)
    sum = sum + p1[i].coeff*pow(x,p1[i].expo);

    return(sum);
}

// I think it's O(log n) or O(n2)