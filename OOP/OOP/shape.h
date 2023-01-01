#pragma once
#ifndef SHAPE
#define SHAPE

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
	virtual void findArea();
	virtual void findPerimeter();
	virtual void findSurfaceArea();
	virtual void findVolume();

};

#endif
