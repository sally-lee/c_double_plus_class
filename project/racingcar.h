#pragma once
#include "car.h"

class RacingCar:public Car {
private:
	int course;
public:
	RacingCar();  // constructor ����
	void setCourse(int c);
};

