#pragma once
#ifndef SHAPE3D
#define SHAPE3D
#include"shape.h"
class shape3D :public shape {
public:
	shape3D();
	shape3D(double, double);
	virtual void findSurfaceArea();
	virtual void findVolume();
};

#endif