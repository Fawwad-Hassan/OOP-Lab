/*#include <iostream>
#include <cmath>
using namespace std;
#include "LAB4.h"

//Task 1
void SquareBox::  setLength(int l) {
	length = l;
}
void SquareBox:: setWidth(int w) {
	width = w;
}
void SquareBox::setHeight(int h) {
	*height = h;
}
int SquareBox::getLength() const {
	return length;
}
int SquareBox::getWidth() const {
	return width;
}
int SquareBox::getHeight() const {
	return *height;
}

SquareBox :: SquareBox() {
	height = new int;
	length = 0;
	width = 0;
	*height = 0;
}
SquareBox::SquareBox(int l, int w, int h) {
	height = new int;
	length = l;
	width = w;
	*height = h;
}
SquareBox::SquareBox(const SquareBox& obj) {
	height = new int;
	*height = obj.getHeight();
}
SquareBox::~SquareBox() {
	height = new int;
	delete height;
}
int SquareBox::SBvolume() {
	return getHeight()*getHeight()*getHeight();
}
int SquareBox::SBperimeter() {
	return 4*getHeight();
}


//Task 2

hugeInteger::hugeInteger() {
	for (int i = 0; i < 20; i++) {
		hugeInt[i] = 0;
	}
}

hugeInteger::hugeInteger(int value[20]) {
	for (int i = 0; i < 20; i++) {
		hugeInt[i] = value[i];
	}
}


void hugeInteger::setHugeInt(int value, int pos) {
	hugeInt[pos] = value;
}
int hugeInteger::getHugeInt(int pos) {
	return hugeInt[pos];
}
void hugeInteger::input() {
	for (int i = 0; i < 20; i++) {
		do {
			cout << "Enter a single digit for entry No. " << i + 1 << ": ";
			cin >> hugeInt[i];
			cout << '\n';
			if (hugeInt[i] < 0 || hugeInt[i] > 9) {
				cout << "Not a single digit, try again.\n";
			} 
		} while (hugeInt[i] < 0 || hugeInt[i] > 9);
	}
}

void hugeInteger::output() {
	cout << "\nThe value of this object is: ";
	for (int i = 0; i < 20; i++) {
		cout << hugeInt[i];
	}
	cout << '\n';
}

hugeInteger hugeInteger::add(hugeInteger toAdd) {
	hugeInteger out;
	for (int i = 0; i < 20; i++) {
		out.hugeInt[i] = hugeInt[i] + toAdd.hugeInt[i];
	}
	return out;
}

void hugeInteger::isZero() {
	bool zero;
	for (int i = 0; i < 20; i++) {
		zero = 0;
		if (hugeInt[i] == 0) {
			zero = 1;
		}
		else break;
	}
	cout << "\nIs the object zero? 1 for yes, 0 for no: " << zero;
}

void hugeInteger::isEqualTo(hugeInteger toEqual) {
	bool equal;
	for (int i = 0; i < 20; i++) {
		equal = 0;
		if (hugeInt[i] == toEqual.hugeInt[i]) {
			equal = 1;
		}
		else break;
	}
	if (equal == 1)
		cout << "\nThe two objects are equal.";
	else cout << "\nThe two objects are not equal.";
}

void hugeInteger::isGreaterThan(hugeInteger toCompare) {
	bool greater;
	for (int i = 0; i < 20; i++) {
		greater = 0;
		if (hugeInt[i] > toCompare.hugeInt[i]) {
			greater = 1;
			break;
		}
		else if (hugeInt[i] < toCompare.hugeInt[i]) {
			greater = 0;
			break;
		}
	}
	if (greater == 1)
		cout << "\nThe first object is greater than the second object.";
	else cout << "\nThe first object is not greater than the second object.";
}


//Task 3 

taskThree::taskThree() {
	random = 0;
	aValue = 0;
	bValue = 0;
	cValue = 0;
	degrees = 0;
}

taskThree::taskThree(int r, float av, float bv, float cv, float d) {
	random = r;
	aValue = av;
	bValue = bv;
	cValue = cv;
	degrees = d;
}

taskThree::~taskThree() {
	cout << "\nDestructor called.\n";
}

void taskThree::setR(int r) {
	random = r;
}
void taskThree::setAvalue(float av) {
	aValue = av;
}
void taskThree::setBvalue(float bv) {
	bValue = bv;
}
void taskThree::setCvalue(float cv) {
	cValue = cv;
}
void taskThree::setDegrees(float d) {
	degrees = d;
}

int taskThree::getR() {
	return random;
}
float taskThree::getAvalue() {
	return aValue;
}
float taskThree::getBvalue() {
	return bValue;
}
float taskThree::getCvalue() {
	return cValue;
}
float taskThree::getDegrees() {
	return degrees;
}

int taskThree::randomFind() {
	srand(time(0));
	int randomRangeLow, randomRangeHigh;
	cout << "Enter the lower range: ";
	cin >> randomRangeLow;
	cout << "Enter the higher range: ";
	cin >> randomRangeHigh;
	random =  randomRangeLow + (rand() % randomRangeHigh);
	return random;
}

void taskThree::quadraticFormula() {
	float firstRoot, secondRoot;
	cout << "\nEnter a, b and c in the formula ax^2 + bx + c\n";
	cin >> aValue >> bValue >> cValue;
	firstRoot = (-bValue + sqrt(pow(bValue, 2) - (4 * aValue * cValue))) / 2 * aValue;
	secondRoot = (-bValue - sqrt(pow(bValue, 2) - (4 * aValue * cValue))) / 2 * aValue;
	cout << "\nThe roots of the equation " << aValue << "x^2 + " << bValue << "x + " << cValue;
	cout << " are: " << firstRoot << " and " << secondRoot << '\n';
}

void taskThree::sinCosTan(float degree) {
	const char degreeSymbol = 248;
	cout << "\nSin(" << degree << degreeSymbol << ") = ";
	cout << sin(degrees);
	cout << "\nCos(" << degree << degreeSymbol << ") = ";
	cout << cos(degrees);
	cout << "\nTan(" << degree << degreeSymbol << ") = ";
	cout << tan(degrees);
}*/