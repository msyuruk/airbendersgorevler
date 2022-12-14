#include <iostream>
#include <vector>
int main(int argNo, char* argarray[]) {
	float katsayi = atof(argarray[1]);
	int satirsayisi = atoi(argarray[2]);
	int arrayindex = 3;
	int rowVectorElemanNo = (argNo - 3)/satirsayisi;
	std::vector<float>kucukvektor;
	std::vector<std::vector<float>>emirhan;
	for (int i = 0; i < satirsayisi; i++)
	{
		for (int j = 0; j < rowVectorElemanNo; j++)
		{
			if (i == 0)
			{
				kucukvektor.push_back(katsayi*atof(argarray[arrayindex]));
				arrayindex++;
			}
			else
			{
				kucukvektor.push_back(atof(argarray[arrayindex]));
				arrayindex++;
			}	
		}
		emirhan.push_back(kucukvektor);
		kucukvektor = {};
	}

	for (int i = 0; i < satirsayisi; i++)
	{
		for (int j = 0; j < rowVectorElemanNo;j++)
		{
			std::cout << emirhan[i][j]<< ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}
