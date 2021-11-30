#include <iostream>
#include <math.h>

class Triangle {
private:
	double a = 0, b = 0, c = 0;
public:
	Triangle(double v1, double v2, double v3) {
		a = v1;
		b = v2;
		c = v3;
	};

	~Triangle() {
		a = 0;
		b = 0;
		c = 0;
	};

	void perimetr() {
		double p = 0;
		p = a + b + c;
		std::cout << "P = "<< p<< std::endl;
	}

	void square() {
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		std::cout << "S = " << S;
	}
};

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	Triangle obj(a, b, c);
	obj.perimetr();
	obj.square();
	return 0;
}

