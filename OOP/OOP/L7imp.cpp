/*#include <iostream>
using namespace std;
#include "LAB7.h" 

// shape
 unsigned int shape:: NoOfShapes = 0;

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



 //shape2D
 shape2D::shape2D() {
	 radius = 0;
	 length = 0;
 }
 shape2D::shape2D(double r, double l) {
	 radius = r;
	 length = l;
 }

 //shape3D
 shape3D::shape3D() {
	 radius = 0;
	 length = 0;
 }
 shape3D::shape3D(double r, double l) {
	 radius = r;
	 length = l;
 }

 //circle
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


 //square
 square::square() {
	 length = 0;
 }
 square::square(double l) {
	 length = l;
 }
 void square::findArea() {
	 double area;
	 area = length * length;
	 cout << "\nArea of the square is: " << area << '.';
 }
 void square::findPerimeter() {
	 double perimeter;
	 perimeter = 4 * length;
	 cout << "\nPerimeter of the square is: " << perimeter << '.';
 }


 //sphere
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


 //cube
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
 }*/