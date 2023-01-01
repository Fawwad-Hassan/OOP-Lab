#include <iostream>
using namespace std;
#include "shape3D.h" 

shape3D::shape3D() {
	radius = 0;
	length = 0;
}
shape3D::shape3D(double r, double l) {
	radius = r;
	length = l;
}
void shape3D::findSurfaceArea() {
	//cout << "\nFinding surface area of shape.";
}
void shape3D::findVolume() {
	//cout << "\nFinding volume area of shape.";
}