#pragma once
#include "car.h"

class RacingCar:public Car {
private:
	int course;
public:
	RacingCar();  // constructor ¼±¾ð
	void setCourse(int c);
};

