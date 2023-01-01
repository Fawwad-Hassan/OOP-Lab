#include <iostream>
using namespace std;
#include "circle.h"

circle::circle() {
	radius = 0;
}
circle::circle(double r) {
	radius = r;
}
void circle::findArea() {
	double area;
	area = (radius * radius) * PI;
	cout << "\nArea of the circle is: " << area << '.';
}
void circle::findPerimeter() {
	double perimeter;
	perimeter = 2 * PI * radius;
	cout << "\nPerimeter of the circle is: " << perimeter << '.';
}