#include <iostream>
using namespace std;
#include "sphere.h"

sphere::sphere() {
	radius = 0;
}
sphere::sphere(double r) {
	radius = r;
}
void sphere::findSurfaceArea() {
	double SA;
	SA = (radius * radius) * 4 * PI;
	cout << "\nSurface area of the sphere is: " << SA << '.';
}
void sphere::findVolume() {
	double volume;
	volume = (4.0 / 3.0) * (radius * radius * radius) * PI;
	cout << "\nVolume of the sphere is: " << volume << '.';
}