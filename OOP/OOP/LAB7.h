#pragma once
#ifndef LAB7
#define LAB7

class shape {
public:
	const double PI = 3.14;
	double length, radius;
	static unsigned int NoOfShapes;
	shape();
	shape(double, double);
	void setLength(double);
	void setRadius(double);
	double getLength();
	double getRadius();
	virtual void findArea()const = 0;
	virtual void findPerimeter()const = 0;
	virtual void findSurfaceArea()const = 0;
	virtual void findVolume()const = 0;

};

class shape2D :public shape {
public:
	shape2D();
	shape2D(double, double);
	virtual void findArea();//const = 0; 
	virtual void findPerimeter();//const = 0;
};

class shape3D :public shape {
public:
	shape3D();
	shape3D(double, double);
	virtual void findSurfaceArea()const = 0;
	virtual void findVolume()const = 0;
};

class circle :public shape2D {
public:
	circle();
	circle(double);
	virtual void findArea();
	virtual void findPerimeter();
};

class square :public shape2D {
public:
	square();
	square(double);
	virtual void findArea();
	virtual void findPerimeter();
};

class cube :public shape3D {
public:
	cube();
	cube(double);
	virtual void findSurfaceArea();
	virtual void findVolume();
};

class sphere :public shape3D {
public:
	sphere();
	sphere(double);
	virtual void findSurfaceArea();
	virtual void findVolume();
};




#endif