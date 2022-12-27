#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main(void) {
	// 반 학생수 : 30
	// 변수명(학생id) = 값(키 사이즈)
	int student1 = 160;
	int student2 = 170;
	int student3 = 175;
	int student4 = 174;
	int student5 = 171;
	int student6 = 186;
	int student7 = 179;
	int student8 = 176;
	int student9 = 172;
	int student10 = 173;
	int student11 = 170;
	int student12 = 173;
	int student13 = 171;
	int student14 = 177;
	int student15 = 164;
	int student16 = 180;
	int student17 = 170;
	int student18 = 171;
	int student19 = 172;
	int student20 = 188;
	int student21 = 174;
	int student22 = 201;
	int student23 = 176;
	int student24 = 173;
	int student25 = 170;
	int student26 = 172;
	int student27 = 176;
	int student28 = 168;
	int student29 = 179;
	int student30 = 175;

	// bool 변수에 대입할 수 있는 값은 true or false
	bool isStudent1_under170 = false;
	// 키가 170이하인 학생들의 id는?
	if (student1 <= 170) { // result value is true
		isStudent1_under170 = true;
	}

	bool isStudent2_170 = false;
	if (student2 <= 170) {
		isStudent2_170 = true;
	}

	bool isStudent3_170 = false;
	if (student3 <= 170) {

	}

	bool isStudent4_170 = false;
	if (student4 <= 170) {

	}

	if (student5 <= 170) {

	}
	if (student6 <= 170) {

	}
	if (student7 <= 170) {

	}

	/////////////////////////////////////
	if (isStudent1_under170)
		printf("the height of student1 is under 170\n"); 

	if (isStudent2_under170)
		printf("the height of student2 is under 170\n");

	///////////////////////////////////////////////////////////


	// 키가 180이상인 학생들의 id는?
	

	return 0;
}
*/

int makeRandoms(int lower, int upper,
	int count)
{
	int num;
	int i;
	for (i = 0; i < count; i++) {
		num = (rand() %
			(upper - lower + 1)) + lower;
		//printf("%d \n", num);
	}

	return num;
}

void testOneDimensionMatrix() {
	int studentID[30] = { 0 }; // studendtID[0] = 0

	for (int i = 0; i < 30; i++) {
		studentID[i] = -1;
		//printf("student[%d]=%d \n", i, studentID[i]);
	}

	int lower = 160, upper = 210, count = 1;

	// Use current time as 
	// seed for random generator
	srand(time(0));

	for (int i = 0; i < 30; i++) {
		studentID[i] = makeRandoms(lower, upper, count);
		//printf("student[%d]=%d \n", i, studentID[i]);
	}

	for (int i = 0; i < 30; i++) {
		if (studentID[i] <= 170) { // result value is true
			printf("student[%d]=%d:the height of the student is under 170 \n",
				i, studentID[i]);
		}
	}
}

int main(void) {
	
	testOneDimensionMatrix();
	

	return 0;
}


