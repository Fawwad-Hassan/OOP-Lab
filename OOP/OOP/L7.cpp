/*#include <iostream>
using namespace std;
#include "shape.h"
#include "shape2D.h"
#include "shape3D.h"
#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"


int main() {
	int arraySize;
	cout << "\n Enter the size of array.";
	cin >> arraySize;
	shape** shapeList = new shape*[arraySize];
	int choice1, choice2, choice3, choice4;
	do {
		cout << "\nPress 1 for 2D shape, 2 for 3D shape.";
		cin >> choice1;
		switch (choice1) {
		case 1:
			cout << "\nEnter 1 for circle, 2 for square.";
			cin >> choice2;
			switch (choice2) {
			case 1:
				cout << "\nEnter radius of circle.";
				double RC;
				cin >> RC;
				shapeList[shape::NoOfShapes-1] = new circle();
				shapeList[shape::NoOfShapes-1]->setRadius(RC);
				shapeList[shape::NoOfShapes-1]->findArea();
				shapeList[shape::NoOfShapes-1]->findPerimeter();
				break;
			case 2:
				cout << "\nEnter length of side of Square.";
				double LS;
				cin >> LS;
				shapeList[shape::NoOfShapes - 1] = new square();
				shapeList[shape::NoOfShapes - 1]->setLength(LS);
				shapeList[shape::NoOfShapes - 1]->findArea();
				shapeList[shape::NoOfShapes - 1]->findPerimeter();
				break;
			}
			break;
		case 2:
			cout << "\nEnter 1 for sphere, 2 for cube.";
			cin >> choice3;
			switch (choice3) {
			case 1:
				cout << "\nEnter radius of sphere.";
				double RS;
				cin >> RS;
				shapeList[shape::NoOfShapes - 1] = new sphere();
				shapeList[shape::NoOfShapes - 1]->setRadius(RS);
				shapeList[shape::NoOfShapes - 1]->findSurfaceArea();
				shapeList[shape::NoOfShapes - 1]->findVolume();
				break;
			case 2:
				cout << "\nEnter length of side of cube.";
				double LC;
				cin >> LC;
				shapeList[shape::NoOfShapes - 1] = new cube();
				shapeList[shape::NoOfShapes - 1]->setLength(LC);
				shapeList[shape::NoOfShapes - 1]->findSurfaceArea();
				shapeList[shape::NoOfShapes - 1]->findVolume();
				break;
			}
			break;
		}
		cout << "\n\nEnter 1 if you want to choose another shape, 2 if not.";
		cin >> choice4;
	} while (choice4==1);
		
	cout << "\nNumber of shapes made: " << shape::NoOfShapes;


	return 0;
}*/