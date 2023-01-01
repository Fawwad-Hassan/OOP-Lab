#include <iostream>
using namespace std;
#include "cube.h"

cube::cube() {
	length = 0;
}
cube::cube(double l) {
	length = l;
}
void cube::findSurfaceArea() {
	double SA;
	SA = (length * length) * 6;
	cout << "\nSurface area of the cube is: " << SA << '.';
}
void cube::findVolume() {
	double volume;
	volume = (length * length * length);
	cout << "\nVolume of the cube is: " << volume << '.';
}