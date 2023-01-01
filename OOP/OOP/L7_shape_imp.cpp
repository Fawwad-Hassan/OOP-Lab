#include <iostream>
using namespace std;
#include "shape.h" 

unsigned int shape::NoOfShapes = 0;

shape::shape() {
	radius = 0;
	length = 0;
	NoOfShapes++;
}
shape::shape(double r, double l) {
	radius = r;
	length = l;
	NoOfShapes++;
}

void shape::setLength(double l) {
	length = l;
}
void shape::setRadius(double r) {
	radius = r;
}
double shape::getLength() {
	return length;
}
double shape::getRadius() {
	return radius;
}
void shape::findArea() {
	//cout << "\nFinding area of shape.";
}
void shape::findPerimeter() {
	//cout << "\nFinding perimeter of shape.";
}
void shape::findSurfaceArea() {
	//cout << "\nFinding surface area of shape.";
}
void shape::findVolume() {
	//cout << "\nFinding volume area of shape.";
}