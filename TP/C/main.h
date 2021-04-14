#include "A/index.h"
#include "B/lib.h"


struct Point {

	int x;
	int y;

	Point(int xCoord, int yCoord): x(xCoord), 
								   y(yCoord) {}

	const Point& sumOfPoints(const Point& otherPoint);
	const Point& substractionOfPoints(const Point& otherPoint);

};
