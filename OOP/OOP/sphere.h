#pragma once
#ifndef SPHERE
#define SPHERE
#include"shape3D.h"
class sphere :public shape3D {
public:
	sphere();
	sphere(double);
	virtual void findSurfaceArea();
	virtual void findVolume();
};

#endif