#pragma once
#ifndef CUBE
#define CUBE
#include"shape3D.h"
class cube :public shape3D {
public:
	cube();
	cube(double);
	virtual void findSurfaceArea();
	virtual void findVolume();
};

#endif