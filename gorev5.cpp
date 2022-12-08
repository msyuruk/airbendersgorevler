#include <iostream>
#include <fstream>
#include <vector>
#include <string>
std::vector<std::vector<int>> vektorA;
std::vector<int> kucukvektor;
std::vector<int> vektorb;
std::string line;
int lineNumber{};
int a{};
int main() {
	std::ifstream dosyaB("B.txt");
	while (getline(dosyaB,line))
	{
		lineNumber++;
		int a = stoi(line);
		vektorb.push_back(a);
	}
	for (int i = 0; i < lineNumber; i++)
	{
		std::cout << vektorb[i]<<" ";
	}
	std::cout << std::endl;
	dosyaB.close();
	std::ifstream dosyaA("A.txt");
	while (getline(dosyaA,line))
	{	
		for (int i = 0; i < lineNumber; i++)
		{
			int a = (line[2*i]);
			kucukvektor.push_back(a-48);
		}
		vektorA.push_back(kucukvektor);
		kucukvektor = {};
	}
	for (int i = 0; i < lineNumber; i++)
	{
		for (int j = 0;j < lineNumber;j++) 
		{
			std::cout << vektorA[i][j]<<" ";
		}
		std::cout << std::endl;
	}
	return 0;
}