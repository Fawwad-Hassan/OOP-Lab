#include <iostream>
using namespace std;
#include "shape2D.h" 

shape2D::shape2D() {
	radius = 0;
	length = 0;
}
shape2D::shape2D(double r, double l) {
	radius = r;
	length = l;
}
void shape2D::findArea() {
	//cout << "\nFinding area of shape.";
}
void shape2D::findPerimeter() {
	//cout << "\nFinding perimeter of shape.";
}