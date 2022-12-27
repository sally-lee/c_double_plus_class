#include <stdio.h>
#include "racingcar.h"  



RacingCar::RacingCar()
{
	course = 0;
	printf("레이싱카가 만들어졌습니다\n");
}

void RacingCar::setCourse(int c)
{
	course = c;
	printf("코스 번호를 %d로 정했습니다\n", course);
}