

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

struct point {			// 이름이 point인 구조체 선언
	int x;			// 구조체 멤버 1
	int y;			// 구조체 멤버 2
};

int main() {

	
	struct point p1;			// point 구조체 변수 p1의 선언

	p1.x = 10;			// 구조체 point형 변수의 초기화
	p1.y = 20;

	printf("점의 x좌표 = %d\n", p1.x);
	printf("점의 y좌표 = %d\n", p1.y);
}
	



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

struct point {			// 이름이 point인 구조체 선언
	int x;			// 구조체 멤버 1
	int y;			// 구조체 멤버 2
};


int main(void)
{
	struct point p1, p2;
	double xdiff, ydiff;
	double dist;

	printf("첫번째 점의 좌표: ");
	scanf("%d%d", &p1.x, &p1.y);
	printf("두번째 점의 좌표: ");
	scanf("%d%d", &p2.x, &p2.y);

	xdiff = (double)(p1.x - p2.x);
	ydiff = (double)(p1.y - p2.y);

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
	printf("거리는 %f입니다.\n", dist);
	}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

struct student {
	int number;
	char name[10];
	double gpa;
};


int main(void)
{
	struct student s;

	s.number = 20140001;			// 숫자(정수, 실수)만 대입문 사용
	strcpy(s.name, "홍길동");			// 문자열을 넣을 때는 strcpy 사용
	s.gpa = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("평점: %f\n", s.gpa);
	
	struct student s = {20140001, "홍길동", 4.3};

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("평점: %f\n", s.gpa);
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

struct contacts {
	char Name[20];
	char Address[100];
	char Tel_no[20];
};

int main(void)
{
	struct contacts person;

	printf("이름을 입력하시오: ");
	gets(person.Name);

	printf("주소를 입력하시오: ");
	gets(person.Address);

	printf("전화번호를 입력하시오: ");
	gets(person.Tel_no);

	printf("이름: %s\n", person.Name);
	printf("주소: %s\n", person.Address);
	printf("전화번호: %s\n", person.Tel_no);
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct point1 {
	int x;
	int y;
}POINT;

typedef struct point2 {
	int x;
	int y;
	char A[5];
}POINT1;

int main()
{	POINT p1 = { 10, 20 };
	POINT p2 = { 50, 60 };

	p1 = p2;
	printf("\n\tp1의 좌표 = (%d, %d)\n", p1.x, p1.y);

	//if (p1 == p2)
	if (p1.x == p2.x && p1.y == p2.y)
		printf("\n\t두 점은 같은 점입니다.\n\n");
	else
		printf("\n\t두 점은 다른 점입니다.\n\n");
	
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct point1 {
	int x;
	int y;
}POINT;

typedef struct point2 {
	int x;
	int y;
	char A[5];
}POINT1;

int main(){

	POINT1 p1 = { 10, 20, "abc" };
	POINT1 p2 = { 50, 60, "ayz" };

	p1 = p2;
	printf("\n\tp1의 좌표 = (%d, %d, %s)\n", p1.x, p1.y, p1.A);

	if (p1.x == p2.x && p1.y == p2.y && p1.A == p2.A)
		printf("\n\t두 점은 같은 점입니다.\n\n");
	else
		printf("\n\t두 점은 다른 점입니다.\n\n");
	}



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

#define N 4

typedef struct student {
	char Name[20];
	int Kor;
	int Eng;
	int Mat;
	int Sum;
}STD;

STD list[] = {
	{"홍길동", 82, 72, 58}, {"강감찬", 97, 82, 39},
	{"이순신", 52, 62, 39}, {"장보고", 88, 72, 62}
};

int main(void) {

 
	int i;
	printf("\n");
	for (i = 0; i < N; i++) {
		printf("\t%s: 국어 = %3d, 영어 = %d, 수학 = %3d\n", list[i].Name, list[i].Kor, list[i].Eng, list[i].Mat);
	}
	printf("\n");
	}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

#define N 4

typedef struct student {
	char Name[20];
	int Kor;
	int Eng;
	int Mat;
	int Sum;
}STD;

int main()
{
	int i, j, max, sumK = 0, sumE = 0, sumM = 0;
	STD tmp;
	printf("\n");
	printf("\t 성명 : 국어  영어  수학  합계\n\t-------------------------------\n");
	for (i = 0; i < N; i++) {
		list[i].Sum = list[i].Kor + list[i].Eng + list[i].Mat;
		sumK += list[i].Kor;
		sumE += list[i].Eng;
		sumM += list[i].Mat;
		printf("\t%s: %3d   %3d   %3d   %3d\n", list[i].Name, list[i].Kor, list[i].Eng, list[i].Mat, list[i].Sum);
	}

	for (i = 0; i < N - 1; i++) {
		max = i;
		for (j = i + 1; j < N; j++) {
			if (list[max].Sum < list[j].Sum)
				max = j;
		}
		tmp = list[max];
		list[max] = list[i];
		list[i] = tmp;
	}

	printf("\n");
	for (i = 0; i < N; i++) {
		printf("\t%s: %3d   %3d   %3d   %3d\n", list[i].Name, list[i].Kor, list[i].Eng, list[i].Mat, list[i].Sum);
	}
	printf("\n\t합  계: %3d   %3d   %3d   %3d\n\n", sumK, sumE, sumM, sumK + sumE + sumM);
	//시험 범위 완료

	system("PAUSE");
	return 0;
}
