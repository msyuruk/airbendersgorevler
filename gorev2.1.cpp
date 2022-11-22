#include<iostream>
#include<vector>
double toplam{};

double mean(std::vector<double>& vectorData) {
	for (int i = 0; i < vectorData.size(); i++)
	{
		toplam += vectorData[i];
	}
	std::cout<< toplam / vectorData.size();
	return toplam / vectorData.size();
}
std::vector<double> v1 = { 12,25,37,14,20.3 };

int main() {
	mean(v1);
	return 0;
}
