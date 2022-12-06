#include <iostream>
#include <string>

struct Province;

struct Country {
	std::string name;
	Province* capital;
};
struct Province {
	std::string name;
	Country* domain;
};

int main() {
	Country TC;
	Province Ank;
	Province Ist;

	TC.name = "Turkey";
	TC.capital = &Ank;

	Ank.name = "Ankara";
	Ank.domain = &TC;
	
	Ist.name = "Ýstanbul";
	Ist.domain = &TC;

	std::cout << Ist.domain->capital->name;
	return 0;
}