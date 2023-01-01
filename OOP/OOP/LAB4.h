/*#pragma once
#ifndef LAB4
#define LAB4

class SquareBox {
	int length;
	int width;
	int *height;
public:
	//define prototypes for setters and getters
	void setLength(int);
	void setWidth(int);
	void setHeight(int);
	int getLength()const;
	int getWidth()const;
	int getHeight()const;
	
	SquareBox(); //default constructor
	SquareBox(int, int, int); // parameterized constructor
	SquareBox(const SquareBox&); // copy constructor
	~SquareBox(); // destructor
	int SBvolume(); // method to calculate volume of square box
	int SBperimeter(); // method to calculate perimeter
 };

class hugeInteger {
	int hugeInt[20];
public:
	hugeInteger();// default constructor
	hugeInteger(int[20]); // parameterized constructor
	//~hugeInteger(); // destructor
	// copy constructor not required as deep copy is not in test plan
	
	//setters and getters
	void setHugeInt(int, int);
	int getHugeInt(int);

	void input();  //method to take input values
	void output(); //method to display object values
	hugeInteger add(hugeInteger); // method to add 2 objects
	void isZero(); // to check is all valeus are equal to 0
	void isEqualTo(hugeInteger); // to compare equality of two ojbects
	void isGreaterThan(hugeInteger); // to compare valeus of two objects
};


class taskThree {
	int random;
	float aValue, bValue, cValue;
	float degrees;
public:
	taskThree(); // default constructor
	taskThree(int, float, float, float, float); // parameterized constructor for whole class
	~taskThree(); // destructor
	//setters and getters
	void setR(int);
	void setAvalue(float);
	void setBvalue(float);
	void setCvalue(float);
	void setDegrees(float);
	int getR();
	float getAvalue();
	float getBvalue();
	float getCvalue();
	float getDegrees();
	int randomFind(); // method to find random value between 2 ranges
	void quadraticFormula(); // method to solve a quadratic equation
	void sinCosTan(float); // method to find sin cos and tan values
};
#endif*/