#include "main.h"

#include <iostream>
#include <cstdlib>

const Point& Point::sumOfPoints(const Point& otherPoint) {

	int xSum = SumAndSubstraction::sum(this->x, otherPoint.x);
	int ySum = SumAndSubstraction::sum(this->y, otherPoint.y); 

	return std::move(Point(xSum, ySum));

}

const Point& Point::substractionOfPoints(const Point& otherPoint) {

	int xSubstraction = SumAndSubstraction::substraction(this->x, otherPoint.x);
	int ySubstraction = SumAndSubstraction::substraction(this->y, otherPoint.y); 

	return std::move(Point(xSubstraction, ySubstraction));

}

int main() {

	Point first = Point(rand() % 100, rand() % 100);
	Point second = Point(rand() % 20, rand() % 20);

	Point sum = first.sumOfPoints(second);
	Point substraction = first.substractionOfPoints(second);

	std::cout << "Sum: x = " << sum.x 
			  << ", y = " << sum.y 
			  << std::endl; 

	std::cout << "Substraction: x = " << substraction.x
			  << ", y = " << substraction.y
			  << std::endl;

	return 0;

}
