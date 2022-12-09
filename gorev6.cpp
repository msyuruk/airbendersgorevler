#define _USE_MATH_DEFINES // M_PI
#include <cmath>
#include <iostream>
class RegularPolygon {
	double n, angle,apothem;
public:
	RegularPolygon(int a) {
		n = a;
		angle = M_PI / n;
	};
	void area(double bikenar) {
		double alan;
		angle = M_PI / n;
		apothem = n / (2 * tan(angle));
		alan = n * bikenar * apothem / 2;
		std::cout << alan << std::endl;
	};
	void length(double alan) {
		double kenar;
		angle = M_PI / n;
		apothem = n / (2 * tan(angle));
		kenar = 2 * alan / (n * apothem);
		std::cout << kenar << std::endl;
	}
};
int main() {
	RegularPolygon square(4);
	square.area(4);
	square.length(16);
	return 0;
}
