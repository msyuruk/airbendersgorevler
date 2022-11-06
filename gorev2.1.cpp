#include<iostream>
#include<vector>
double toplam{};

double mean(std::vector<double> &vectorData) {
	for (int i = 0; i < vectorData.size(); i++)
	{
		toplam += vectorData[i];
	}
	return toplam/vectorData.size();
}