#include <stdio.h>
#include "car.h"

Car::Car() {
	num = 0;
	gas = 0.0;
	printf("자동차가 만들어졌습니다\n");
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;

	printf("차량 번호를 %d 으로 연료량을 %f으로 바꾸었습니다\n", num, gas);
}

void Car::show()
{
	printf("차량 번호는 %d 입니다\n", num);
	printf("연료량은 %f 입니다\n", gas);
}