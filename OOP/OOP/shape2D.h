#pragma once
#ifndef SHAPE2D
#define SHAPE2D
#include"shape.h"
class shape2D :public shape {
public:
	shape2D();
	shape2D(double, double);
	virtual void findArea();//const = 0
	virtual void findPerimeter();//const = 0
};

#endif
