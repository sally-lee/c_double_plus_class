#include <stdio.h>
#include "car.h"

Car::Car() {
	num = 0;
	gas = 0.0;
	printf("�ڵ����� ����������ϴ�\n");
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;

	printf("���� ��ȣ�� %d ���� ���ᷮ�� %f���� �ٲپ����ϴ�\n", num, gas);
}

void Car::show()
{
	printf("���� ��ȣ�� %d �Դϴ�\n", num);
	printf("���ᷮ�� %f �Դϴ�\n", gas);
}