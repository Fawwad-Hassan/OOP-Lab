#pragma once
#ifndef CIRCLE
#define CIRCLE
#include"shape2D.h"
class circle :public shape2D {
public:
	circle();
	circle(double);
	virtual void findArea();
	virtual void findPerimeter();
};

#endif