/*#include <iostream>
#include <cmath>
using namespace std;*/

//Task 1 - Calculate area and circumference on circles

/*float Pi = 3.14;

float GetInput();
float CalculateArea(float);
float CalculateCircumference(float);
void Display(float, float, float);
void CompareCircleWrtRadius(float, float);

int main() {
	float r1 = 0, r2 = 0, r3 = 0, a1 = 0, a2 = 0, a3 = 0, c1 = 0, c2 = 0, c3 = 0;
	r1 = GetInput();
	r2 = GetInput();
	r3 = GetInput();

	a1 = CalculateArea(r1);
	a2 = CalculateArea(r2);
	a3 = CalculateArea(r3);

	c1 = CalculateCircumference(r1);
	c2 = CalculateCircumference(r2);
	c3 = CalculateCircumference(r3);

	Display(r1, a1, c1);
	Display(r2, a2, c2);
	Display(r3, a3, c3);

	CompareCircleWrtRadius(r1, r2);

	return 0;
}
float GetInput() {
	float r = 0;
	cout << "Enter radius of circle.\n";
	cin >> r;
	if (r == 0){
		do {
			cout << "Radius can't be zero, try again.\n";
			cin >> r;
		} while (r == 0);
	
	}
	if (r < 0) {
		do {
			cout << "Invalid input, try again.\n";
			cin >> r;
		} while (r < 0);
	}
	return r;
}

float CalculateArea(float r) {
	float out;
	out = Pi * (r * r);
	return out;
}

float CalculateCircumference(float r) {
	float out;
	out = 2 * Pi * r;
	return out;
}

void Display(float r, float A, float C) {
	cout << "\nArea and circumference of circle of radius " << r << " is: " << "\n";
	cout << "Area = " << A << "\nCircumference = " << C << "\n";
}
void CompareCircleWrtRadius(float r1, float r2) {
	if (r1 > r2)
		cout << "Circle 1 is bigger than circle 2.\n";
	else
		cout << "Circle 2 is bigger than circle 1.\n";
}*/


//Task 2 - Imaginary number operations

/*void Input();
void Display(float, float);
void Sub(float, float, float, float);
void Add(float, float, float, float);
void Mod(float, float);

int main() {
	Input();

	return 0;
}

void Input() {
	float real1 = 0, img1 = 0, real2 = 0, img2 = 0;
	cout << "Enter the real and imagenray parts of the first complex number.\n";
	cin >> real1 >> img1;
	Display(real1, img1);
	cout << "\nEnter the real and imagenray parts of the second complex number.\n";
	cin >> real2 >> img2;
	Display(real2, img2);
	Add(real1, img1, real2, img2);
	Sub(real1, img1, real2, img2);
	Mod(real1, img1);
}
void Display(float r, float i) {
	if (i > 0)
		cout << r << "+" << i << "i";
	else if (i == 0)
		cout << r;
	else
		cout << r << i << "i";
}
void Sub(float r1, float i1, float r2, float i2) {
	float rOut = 0, iOut = 0;
	rOut = r2 - r1;
	iOut = i2 - i1;
	cout << "Difference between ";
	Display(r1, i1);
	cout << " and ";
	Display(r2, i2);
	cout << " is: ";
	Display(rOut, iOut); cout << "\n";
}
void Add(float r1, float i1, float r2, float i2) {
	float rOut = 0, iOut = 0;
	rOut = r2 + r1;
	iOut = i2 + i1;
	cout << "\nAddition of ";
	Display(r1, i1);
	cout << " and ";
	Display(r2, i2);
	cout << " is: ";
	Display(rOut, iOut); cout << "\n";
}

void Mod(float r, float i){
	float out = sqrt((r * r) + (i * i));
	cout << "Modulus of the complex number ";
	Display(r, i);
	cout << " is: " << out << "\n";
	}*/

