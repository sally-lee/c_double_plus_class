#include <stdio.h>
#include "racingcar.h"  



RacingCar::RacingCar()
{
	course = 0;
	printf("���̽�ī�� ����������ϴ�\n");
}

void RacingCar::setCourse(int c)
{
	course = c;
	printf("�ڽ� ��ȣ�� %d�� ���߽��ϴ�\n", course);
}