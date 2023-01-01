#pragma once
#ifndef SQUARE
#define SQUARE
#include"shape2D.h"
class square :public shape2D {
public:
	square();
	square(double);
	virtual void findArea();
	virtual void findPerimeter();
};

#endif