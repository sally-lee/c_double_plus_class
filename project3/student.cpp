#include <stdio.h>
#include "student.h"

// �����ڴ� return ���� ����
student::student() {
	this->id = 0;
	this->majority = 0;
	this->sexsual = 0;

	// heap ������ ����Ÿ���� �迭(������100��)�� ����.
	this->onedimensionarray = new int[static_cast<size_t>(100)]{};
	//this->onedimensionarray = new int[100]{};

	printf("called default constructor of student\n");
};

student::student(int id) {
	//student();

	this->id = id;
	
	printf("called 1st overload constructor of student\n");
};

student::student(int id, int sexual) {
	//student();

	this->id = id;
	this->majority = sexual;
	
	printf("called 2nd overload constructor of student\n");
};

student::student(int id, int sexual, int majority) {
	//student();

	this->id = id;
	this->majority = sexual;
	this->sexsual = majority;
	printf("called 3rd overload constructor of student\n");
};

student::~student() {
	delete[] this->onedimensionarray;

	printf("called destructor of student\n");
};


int student::getId() {
	return this->id; //this is 'this pointer'		
};

int student::getSexsual() {
	return this->sexsual;
	//return sexsual;
};

int student::getMajority() {
	return this->majority;
};


// setter : Ŭ���� ��� ������ ���� �ܺο��� ȣ���ؼ� ������ �� �ֵ��� �ϴ� �Լ�
void student::setId(int id) {
	this->id = id; // id�� �����������, setId�Լ��� �Ķ���� �̸����� ������ �ȵ�!!!
};

void student::setSexsual(int sexsual) {
		this->sexsual = sexsual;
	};

void student::setMajority(int majority) {
	this->majority = majority;
};


int student::sum(int a, int b) {
	return a + b;
}


