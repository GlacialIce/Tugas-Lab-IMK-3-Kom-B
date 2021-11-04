// C++ program untuk String Matching
// Searching algorithm/Algoritma Pencarian

#include <iostream>
#include <cstring>

using namespace std;

void Cari(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);

	// Pengulangan untuk menggulirkan pat[] satu persatu
	for (int i = 0; i <= N - M; i++) {
		int j;

		// Untuk index ke-i, cek kesamaan pattern
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == M) // jika pat[0...M-1] = txt[i, i+1, ...i+M-1]
			cout << "Ditemukan kesesuaian Pattern di index " << i << endl;
		else
			cout << "Tidak ditemukan kesesuaian di Pattern " << i << endl;
	}
}

// Main Code
int main()
{
	char txt[] = "10010101101001100101111010";
	char pat[] = "001011";

	cout << "Text yang ingin diuji = " << txt << endl;
	cout << "Pattern yang ingin diuji = " << pat << endl << endl;

	Cari(pat, txt);
	
	return 0;
}