#include<iostream>
#include<vector>
template <typename T>

	std::vector<std::vector<T>> create_matrix(T number,int rows,int cols){
		std::vector<std::vector<T>> vect;
		std::vector<T> kucukvektor;
		for (int i = 0; i < cols; i++)
		{
			kucukvektor.push_back(number);
		}
		for (int i = 0; i < rows; i++)
		{
			vect.push_back(kucukvektor);
		}
	return vect;
}
int main() {
	create_matrix(5, 2, 3);
	return 0;
}