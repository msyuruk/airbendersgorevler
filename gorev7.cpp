#include <iostream>
#include <valarray>
#include <stdlib.h>

int main(int argNo, char* argarray[]) {
	int katsayi = (int)argarray[0];
	int satirsayisi = (int)argarray[1];
	int matrisElemanNo = argNo - 2;
	std::valarray<int>((matrisElemanNo / satirsayisi) * satirsayisi);
	std::slice(0, (matrisElemanNo / satirsayisi), satirsayisi);

	return 0;
}