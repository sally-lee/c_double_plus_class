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
	// Ŭ���� student�� �ܺδ� ���� ���, main �Լ��̴�
	student me;
	////me.
	me.setId(19751234);
	me.setMajority(11);
	me.setSexsual(1);
	//// ���� ������ ���� right side�� �׻� ���� �´�.
	//// ���� ������(=)�� ������ ���� �����ϴ� �����̴�!!!
	//// ������ ���� �����Ѵ�.
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
	
	// ��������� ���� ĸ��ȭ�� ���� �ʾ���
	//me.id = 19751234;
	//me.sexsual = 0; // male is 0, female is 1
	//me.majority = 11; // 11(computer science id)
	//makeDynamicMemoy();
	

	//delete pStu; // �����ڰ� delete�� ȣ������ ������ heap�� �Ҵ�� student Ŭ���� ��ü��
	             // ��ǻ�ͽý����� �˴ٿ�(PowerOff)�Ǳ� ������ �����Ѵ�.
	printf("Goodbye!!!\n");
	return 0;
}

/*
class student {
	// Ŭ���� ���δ� Ŭ������ ������ ���̴�
//public:
private: // Ŭ���� �ܺο��� �׼��� ����, �� ���ο����� �׼��� �� �� ����.
	char name[100] = {0};
	int id;
	int sexsual;
	int majority;

public:  // �ܺο��� ������ �� �ֵ��� ����
	// ����Լ�
	// getter : Ŭ���� ��� ������ ���� �ܺο� �����ϴ� �Լ�
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


	// setter : Ŭ���� ��� ������ ���� �ܺο��� ȣ���ؼ� ������ �� �ֵ��� �ϴ� �Լ�
	void setId(int id) {
		this->id = id; // id�� �����������, setId�Լ��� �Ķ���� �̸����� ������ �ȵ�!!!
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
	// Ŭ���� ���δ� Ŭ������ ������ ���̴�
//public:
//private:
	char name[100] = { 0 };
	int id;
	int sexsual;
	int majority;

public:  // �ܺο��� ������ �� �ֵ��� ����
	// ����Լ�
	// getter : Ŭ���� ��� ������ ���� �ܺο� �����ϴ� �Լ�
	int getId() {
		return id; //this is 'this pointer'
	};

	int getSexsual() {
		return sexsual;
	};

	int getMajority() {
		return majority;
	};

	// setter : Ŭ���� ��� ������ ���� �ܺο��� ȣ���ؼ� ������ �� �ֵ��� �ϴ� �Լ�
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
