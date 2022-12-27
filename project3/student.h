#pragma once

class student {
	// 클래스 내부는 클래스를 정의한 곳이다
//public:
private: // 클래스 외부에서 액세스 못함, 단 내부에서는 액세스 할 수 있음.
	char name[100] = { 0 };
	int id;
	int sexsual;
	int majority;
	int* onedimensionarray;

public:
	// Default Constructor[생성자]
	student();
	student(int id);
	student(int id, int sexual);
	student(int id, int sexual, int majority);

	~student();

public:  // 외부에서 접근할 수 있도록 선언
	// 멤버함수
	// getter : 클래스 멤버 변수의 값을 외부에 리턴하는 함수
	int getId();
	int getSexsual();
	int getMajority();

	// setter : 클래스 멤버 변수의 값을 외부에서 호출해서 설정할 수 있도록 하는 함수
	void setId(int id);
	void setSexsual(int sexsual);
	void setMajority(int majority);

public:
	static int sum(int a, int b);
};

