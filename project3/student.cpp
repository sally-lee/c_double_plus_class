#include <stdio.h>
#include "student.h"

// 생성자는 return 값이 없음
student::student() {
	this->id = 0;
	this->majority = 0;
	this->sexsual = 0;

	// heap 영역에 정수타입의 배열(사이즈100개)을 만듦.
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


// setter : 클래스 멤버 변수의 값을 외부에서 호출해서 설정할 수 있도록 하는 함수
void student::setId(int id) {
	this->id = id; // id가 멤버변수인지, setId함수의 파라미터 이름인지 구별이 안됨!!!
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


