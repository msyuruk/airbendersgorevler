#include <iostream>
#include <vector>

int main(int argNo, char* argarray[]) {
	int carpan = (int)argarray[1];
	int satirsayisi = (int)argarray[2];
	int arrayindex = 3;
	int matrisElementNo = (sizeof(argarray)/sizeof(char))-3;
	int rowVectorElemanNo = (argNo - 3)/satirsayisi;
	std::vector<int>kucukvektor;
	std::vector<std::vector<int>>emirhan;
	for (int i = 0; i < satirsayisi; i++)
	{
		for (int j = 0; j < rowVectorElemanNo; j++)
		{
			if (i == 0)
			{
				kucukvektor.push_back(carpan*(int)argarray[arrayindex]);
				arrayindex++;
			}
			else
			{
				kucukvektor.push_back((int)argarray[arrayindex]);
				arrayindex++;
			}	
		}
		emirhan.push_back(kucukvektor);
	}

	for (int i = 0; i < satirsayisi; i++)
	{
		for(int j=0;j<rowVectorElemanNo;j++)
		{
			std::cout << emirhan[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "Test" << std::endl;
	return 0;
}
