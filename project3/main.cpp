#include <stdio.h>
#include "student.h"


student* pStu = NULL;

void makeDynamicMemoy() {
	pStu = new student;

	pStu->setId(19751234);
	pStu->setMajority(0);
	pStu->setSexsual(11);

	int id = pStu->getId();
	int majority = pStu->getMajority();
	int sexsual = pStu->getSexsual();
}

int main(void) {
	int sum = student::sum(3, 4);

	/*makeDynamicMemoy();
	delete pStu;*/
	// 클래스 student의 외부는 예를 들어, main 함수이다
	student me;
	////me.
	me.setId(19751234);
	me.setMajority(11);
	me.setSexsual(1);
	//// 대입 연산자 기준 right side는 항상 값이 온다.
	//// 대입 연산자(=)는 변수에 값을 저장하는 역할이다!!!
	//// 변수는 값을 저장한다.
	//int id = me.getId();
	//int majority = me.getMajority();
	//int sexsual = me.getSexsual();

	//student you(20001234);
	//student you(20001234, 11);
	//student you(20001234, 11, 0);
	
	//me.name[0] = 's';
	//me.name[1] = 'w';
	//me.name[2] = 's';
	//me.name[3] = 'e';
	//me.name[4] = 'o';	 
	
	// 멤버변수에 대한 캡슐화가 되지 않았음
	//me.id = 19751234;
	//me.sexsual = 0; // male is 0, female is 1
	//me.majority = 11; // 11(computer science id)
	//makeDynamicMemoy();
	

	//delete pStu; // 개발자가 delete을 호출하지 않으면 heap에 할당왼 student 클래스 객체는
	             // 컴퓨터시스템이 셧다운(PowerOff)되기 전까지 존재한다.
	printf("Goodbye!!!\n");
	return 0;
}

/*
class student {
	// 클래스 내부는 클래스를 정의한 곳이다
//public:
private: // 클래스 외부에서 액세스 못함, 단 내부에서는 액세스 할 수 있음.
	char name[100] = {0};
	int id;
	int sexsual;
	int majority;

public:  // 외부에서 접근할 수 있도록 선언
	// 멤버함수
	// getter : 클래스 멤버 변수의 값을 외부에 리턴하는 함수
	int getId() {
		return this->id; //this is 'this pointer'
	};

	int getSexsual() {
		return this->sexsual;
		//return sexsual;
	};

	int getMajority() {
		return this->majority;
	};


	// setter : 클래스 멤버 변수의 값을 외부에서 호출해서 설정할 수 있도록 하는 함수
	void setId(int id) {
		this->id = id; // id가 멤버변수인지, setId함수의 파라미터 이름인지 구별이 안됨!!!
	};

	void setSexsual(int sexsual) {
		this->sexsual = sexsual;
	};

	void setMajority(int majority) {
		this->majority = majority;
	};
};
*/
/*
class student {
	// 클래스 내부는 클래스를 정의한 곳이다
//public:
//private:
	char name[100] = { 0 };
	int id;
	int sexsual;
	int majority;

public:  // 외부에서 접근할 수 있도록 선언
	// 멤버함수
	// getter : 클래스 멤버 변수의 값을 외부에 리턴하는 함수
	int getId() {
		return id; //this is 'this pointer'
	};

	int getSexsual() {
		return sexsual;
	};

	int getMajority() {
		return majority;
	};

	// setter : 클래스 멤버 변수의 값을 외부에서 호출해서 설정할 수 있도록 하는 함수
	void setId(int para) {
		id = para;
	};

	void setSexsual(int para) {
		sexsual = para;
	};

//private:
	void setMajority(int para) {
		majority = para;
	};

};
*/
