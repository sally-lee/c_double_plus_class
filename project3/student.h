#pragma once

class student {
	// Ŭ���� ���δ� Ŭ������ ������ ���̴�
//public:
private: // Ŭ���� �ܺο��� �׼��� ����, �� ���ο����� �׼��� �� �� ����.
	char name[100] = { 0 };
	int id;
	int sexsual;
	int majority;
	int* onedimensionarray;

public:
	// Default Constructor[������]
	student();
	student(int id);
	student(int id, int sexual);
	student(int id, int sexual, int majority);

	~student();

public:  // �ܺο��� ������ �� �ֵ��� ����
	// ����Լ�
	// getter : Ŭ���� ��� ������ ���� �ܺο� �����ϴ� �Լ�
	int getId();
	int getSexsual();
	int getMajority();

	// setter : Ŭ���� ��� ������ ���� �ܺο��� ȣ���ؼ� ������ �� �ֵ��� �ϴ� �Լ�
	void setId(int id);
	void setSexsual(int sexsual);
	void setMajority(int majority);

public:
	static int sum(int a, int b);
};

