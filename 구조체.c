

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

struct point {			// �̸��� point�� ����ü ����
	int x;			// ����ü ��� 1
	int y;			// ����ü ��� 2
};

int main() {

	
	struct point p1;			// point ����ü ���� p1�� ����

	p1.x = 10;			// ����ü point�� ������ �ʱ�ȭ
	p1.y = 20;

	printf("���� x��ǥ = %d\n", p1.x);
	printf("���� y��ǥ = %d\n", p1.y);
}
	



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

struct point {			// �̸��� point�� ����ü ����
	int x;			// ����ü ��� 1
	int y;			// ����ü ��� 2
};


int main(void)
{
	struct point p1, p2;
	double xdiff, ydiff;
	double dist;

	printf("ù��° ���� ��ǥ: ");
	scanf("%d%d", &p1.x, &p1.y);
	printf("�ι�° ���� ��ǥ: ");
	scanf("%d%d", &p2.x, &p2.y);

	xdiff = (double)(p1.x - p2.x);
	ydiff = (double)(p1.y - p2.y);

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
	printf("�Ÿ��� %f�Դϴ�.\n", dist);
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

	s.number = 20140001;			// ����(����, �Ǽ�)�� ���Թ� ���
	strcpy(s.name, "ȫ�浿");			// ���ڿ��� ���� ���� strcpy ���
	s.gpa = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.gpa);
	
	struct student s = {20140001, "ȫ�浿", 4.3};

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.gpa);
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

	printf("�̸��� �Է��Ͻÿ�: ");
	gets(person.Name);

	printf("�ּҸ� �Է��Ͻÿ�: ");
	gets(person.Address);

	printf("��ȭ��ȣ�� �Է��Ͻÿ�: ");
	gets(person.Tel_no);

	printf("�̸�: %s\n", person.Name);
	printf("�ּ�: %s\n", person.Address);
	printf("��ȭ��ȣ: %s\n", person.Tel_no);
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
	printf("\n\tp1�� ��ǥ = (%d, %d)\n", p1.x, p1.y);

	//if (p1 == p2)
	if (p1.x == p2.x && p1.y == p2.y)
		printf("\n\t�� ���� ���� ���Դϴ�.\n\n");
	else
		printf("\n\t�� ���� �ٸ� ���Դϴ�.\n\n");
	
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
	printf("\n\tp1�� ��ǥ = (%d, %d, %s)\n", p1.x, p1.y, p1.A);

	if (p1.x == p2.x && p1.y == p2.y && p1.A == p2.A)
		printf("\n\t�� ���� ���� ���Դϴ�.\n\n");
	else
		printf("\n\t�� ���� �ٸ� ���Դϴ�.\n\n");
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
	{"ȫ�浿", 82, 72, 58}, {"������", 97, 82, 39},
	{"�̼���", 52, 62, 39}, {"�庸��", 88, 72, 62}
};

int main(void) {

 
	int i;
	printf("\n");
	for (i = 0; i < N; i++) {
		printf("\t%s: ���� = %3d, ���� = %d, ���� = %3d\n", list[i].Name, list[i].Kor, list[i].Eng, list[i].Mat);
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
	printf("\t ���� : ����  ����  ����  �հ�\n\t-------------------------------\n");
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
	printf("\n\t��  ��: %3d   %3d   %3d   %3d\n\n", sumK, sumE, sumM, sumK + sumE + sumM);
	//���� ���� �Ϸ�

	system("PAUSE");
	return 0;
}
