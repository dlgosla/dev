#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 10
int main()
{
	int score[student];//ũ�Ⱑ student�� ������ �迭 score�� ����
		int i;//�迭 ���� ����(÷��)�� ����


		score[0] = 90;
		score[1] = 80;
		score[2] = 70;
		score[3] = 60;
		score[4] = 50;
		score[5] = 40;
		score[6] = 30;
		score[7] = 20;
		score[8] = 10;
		score[9] = 0;

		for (i = 0; i < student; i++)
			printf("%d��° �л��� ������ %d�Դϴ�\n", i, score[i]);

	system("pause");
}



\#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 10
int main()
{
	int score[6] = {0};//1, 2, 3, 4, 5, 6

	int i, size;
	size = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < size; i++)
		printf("score[%d]=%d\n", i, score[i]);




	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 10
int main()
{
	int score[6] = { 1, 2, 3, 4, 5, 6 };

	int i, size;
	size = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < size; i++)
		printf("score[%d]=%d\n", i, score[i]);




	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 10
int main()
{

	int a[student];
	int i,sum=0,max=-10000;
	

	for (i = 0; i < student; i++)
	{
		printf("���� �Է�");
		scanf("%d", &a[i]);
	}

	for (i = 0; i < student; i++)
		sum += a[i];

	printf("%d", sum/student);

	for (i=0;i<student;i++)
	{
		if (max < a[i])
			max = a[i];

		printf("%d", max);
	}

	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define score 3
int main()
{
double a[score];
int i;
double sum = 0;
double result;

	for (i = 0; i<score; i++)// ����ڰ� �Է��� 3���� ������ �迭�� ����
	{
		printf("���� %d���� ������ ������?",i+1);
		scanf("%lf", &a[i]);

	}
	for (i = 0; i<score; i++) // ����� ���ϱ� ���ؼ� �迭�� ��� ���� �ջ�
	{
		sum += a[i];
	}
	result = sum / score;

	printf("��� %5.3f", result);

	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 5
int main()
{
	int score[student];//ũ�Ⱑ student�� ������ �迭 score�� ����
	int i;//�迭 ���� ����(÷��)�� ����


	score[0] = 90;
	score[1] = 80;
	score[2] = 70;
	score[3] = 60;
	score[4] = 50;
	

	printf("\n\t\t &score = %d\n", score);
	for (i = 0; i < student; i++)
		//printf("%d��° �л��� ������ %d�Դϴ�\n", i, score[i]);
		printf("score[%d]=%d    &score[%d]=%d\n", i, score[i]);

	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 5
int main()
{
	int score[student];//ũ�Ⱑ student�� ������ �迭 score�� ����
	int i;//�迭 ���� ����(÷��)�� ����


	score[0] = 90;
	score[1] = 80;
	score[2] = 70;
	score[3] = 60;
	score[4] = 50;
	

	printf("\n\t\t&score = %d\n", score);
	for (i = 0; i < student; i++)
		//printf("%d��° �л��� ������ %d�Դϴ�\n", i, score[i]);
		printf("score[%d]=%d    &score[%d]=%d\n", i, score[i],i,&score[i]);

	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define size 6

int main()
{
	int freq[size] = { 0 }, i;

	for (i = 0; i < 10000; i++)
		++freq[rand() % 6];//rand()%6 ���� �߻����� 6���� ���� ������//�迭 ÷�� ��+1
	printf("��          ��\n");
	printf("======================\n");

	for (i = 0; i < size; i++)
		printf("%3d          %3d\n", i + 1, freq[i]);

	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define size 100

int main()
{
	int a[size] = { 0 }, i, data;
	FILE * fp = NULL; //������ ���Ͽ� ���� ������ fp
	fp = fopen("data.txt", "w"); //fp�� ������ ���� data,txt�� ���� a�� �̾�� w�� ����� �б����� r

	for (i = 0; i < size; i++)
	{
		data = rand() % 200 + 50;//������ �߻����� 50~249 ������ ������ ����
		fprintf(fp, "%d", data);//data�� fp�� ����� ���Ͽ� ���
		printf(" %d", data);//ȭ�鿡 ���

	}

	fclose(fp);

	printf("\n======================\n");
	fp = fopen("data.txt", "r");//data.txt�� �б� �������� ���� fp�� ����
	i = 0;

	while (!feof(fp))//������ ������ ���� �ƴ� ����
	{
		fscanf(fp, "%d", &a[i]);//���� fp�� ����Ű�� ���� ���� �о�
		i++; //�迭�� i��° ���ҷ� ����
	}

	for (i = 0; i < size; i++) //�迭�� ���� ���
	{
		printf(" %d", a[i]);

	}

	system("pause");
}





#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define size 10

int main()
{
	int key.i;
	int list[size] = { 1,2,3,4,5,6,7,8,9 };

	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf("%d", &key);

	for (i = 0; i < size; i++)
	{
		if(list[i]==key)
			printf("Ž�� ���� �ε���=%d",)

	}


	system("pause");
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define size 10

int main()
{

	int a[size] = { 12,3,19,6,18,8,12,4,1,19 };
	int i, j, l, min;

	printf("\n------naw data---\n");
	for (i = 0; i < size; i++)
	{
		printf("%3d", a[i]);
	}

	printf("\n");

		for (i = 0; i < size - 1; i++) //i��°�� ���� ���� ã��
		{
			min = i;//�̹� ÷���� �ڸ��� ���� ���� ������
			for (j = i + 1; j < size; j++)//������ ���ҿ� ���Ͽ�
			{
				if (a[j] < a[min])//�̹� ���Ұ� �� ������
					min = j;//���� �ּڰ����� ÷�ڴ� �̹� ������ ÷�� ///�߿��߿�
			}

	tmp = a[i];
	a[i] = a[min]
		a[min] = tmp;

}





	system("pause");
}








#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define size 6

int main()
{
	int freq[size] = { 0 }, i;

	for (i = 0; i < 10000; i++)
		++freq[rand() % 6];//rand()%6 ���� �߻����� 6���� ���� ������//�迭 ÷�� ��+1
	printf("��          ��\n");
	printf("======================\n");

	for (i = 0; i < size; i++)
		printf("%3d          %3d\n", i + 1, freq[i]);

	system("pause");
}



-----------------------------------------------------------------------------------



����� ��,��

char ch='A';
'A'~'Z'

���ڸ� �迭�� ����

�ؽ�Ʈ


string ���ڿ�: ���ڵ��� 0�� �̻� ���ΰ� (0�� null)

"A"���ڿ� // %s
'A' ���� //%c //���ڰ� �ƴ� �����͸� ''�� �־ ����ϸ� ����


���ڿ��� ���ڹ迭�̴�. ������ ���ڹ迭��
char A[];

\0<<��������,,,���Ⱑ ���̴�,,null����

1.���� �迭�� �������� null ���ڷ� ����
2. ����, ���� �ᵵ�ȴ�.
3. printf("%s",str);�� ����ص� �ȴ�. << ù��° ���ڴ� ����,,,����
�ϳ��ϳ��� ���ڸ� �˾ƾ��ϴ� ��Ȳ�� �����ϱ� ����, ������ ����صα�



�迭�� �ʱ�ȭ ���
1. ���� ����  str[4]; str[0]='a'; ...
2. char str[4]={'a','b','c','\0'}; //���ҳ�����
3. char str[4] = "abc";

char ques[] ="is seoil the capital city of korea?";<<�ڵ����� ���ڸ��� ���� �־���


�̸�, �ּ� 2���� �迭
------------------------------------------------------------------------------

#include <stdio.h>
int main()
{
	int i;
	char str[4];

	str[0] = 'a';
	str[1] = 'b';

	str[2] = 'c';
	str[3] = '\0'; // ���Ⱑ ���̴�.

	for (i = 0; str[i]!= '\0'; i++)
		printf("%c", str[i]);


	system("pause");





}

ũ�Ⱑ 4�ι迭�� abc�����ϰ� for�� ���

#include <stdio.h>
int main()
{
	int i;
	char str[4];

	str[0] = 'a';
	str[1] = 'b';

	str[2] = 'c';
	str[3] = '\0'; // ���Ⱑ ���̴�.

	printf("%s", str);

	system("pause");





}


abc����ϴµ� printf�� ���


#include <stdio.h>
int main()
{
	
	char qus[] = "is seoul the capital city of korea?";
		char answer[100];

		printf("%s", qus);
		scanf("%s", answer);

		if (answer[0] == 'y')
			printf("����");
		else
			printf("Ʋ��");


		
		system("pause");


}

is seoul the capital city of korea?���� ���� ������ �´ٰ� Ʋ���� Ʋ���ٰ� ���



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	
	char s[10], i = 0;

	printf("���ڿ��� �Է�");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		i++;
		printf("���ڿ��� ����: %d \n", i);

		
	}

	printf("���ڿ��� ���� : %d \n", strlen(s));
		system("pause");


}


���ڿ��� �Է¹ް� �� ���ڿ��� ���̸� ���strlen�̶� while�� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	
	char s[10], i = 0;

	printf("���ڿ��� �Է�");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		i++;
		printf("���ڿ��� ����: %d \n", i);

		
	}

	printf("���ڿ��� ���� : %d \n", strlen(s));
		system("pause");


}


#include<stdio.h>
int main()
{

	double i = 10;
	double *p;

	p = &i;

	printf("i=%f\n", i);
	printf("i�ּ�=%d\n",&i);

	printf("%d\n", p);
	printf("%d\n", &p);
	printf("%f\n", *p);




	system("pause");
}


#include<stdio.h>
int main()
{

	int x = 100, y = 200;
	int *p;

	p = &x; //p�� x�� �ּ� ����
	printf("p�ǰ�=%d x�� �ּ�=%d\n", p, &x);
	printf("*p=%d\n", *p);

	p = &y; //p�� ����� ���� ����
	printf("p=%d y�ּ�=%d\n", p, &y);

	printf("\n\n");

	

	system("pause");
}



#include<stdio.h>
int main()
{

	int i = 10;
	int *p;

	p = &i; //p�� i�� �ּҷ� �ʱ�ȭ : *p<-10

	printf("i=%d    *p=%d", i, *p);

	*p = 20; //p�� ����Ű�� ���� i�� 20�� ����
	printf("i�� ��=%d		*p�� �� = %d \n", i, *p);

	printf("\n\n");
	

	system("pause");
}


#include<stdio.h>
int main()
{

	char *pc;
	int *ps;
	double *pi;

	pc = (char *)10000;
	ps = (int   *)10000;
	pi = (double *)10000;
	printf("������ pc=%d ps =%d pi=%d\n", pc, ps, pi);

	pc++;
	ps++;
	pi++;

	printf("���� �� pc = %d ps =%d pi=%d", pc, ps, pi);
	system("pause");
}


#include<stdio.h>
int main()
{


	int x = 10, y = 20;


	printf("%d,%d", x, y);

	move(x, y);
	printf("ȣ�� �� (%d,%d)",x,y);


	system("pause");
}



move(int xpos, int ypos)
{
	xpos += 5;
	ypos += 5;

}// �� ���� ���





�迭�̸��� �����ʹϱ� �����͵� �迭 �̸�ó�� ����� �� �ִ�.

srand((unsigned)time(NULL));

static

const

*a=&a
a[]=&a

-------------------------------------------
#include<stdio.h>

int main()
{
	int a[] = { 10,20,30,40 };
	int *p = a;

	printf("%d %d %d \n", a[0], a[1], a[2]);
	printf("%d %d %d \n",p[0], p[1], p[2]);


	system("pause");
}


#include<stdio.h>

int main()
{
	int a[] = { 10,20,30,40 };
	update_array(a);

	printf("%d", a[0]);
	system("pause");
}

int update_array(int *a)
{
	a[0] = 99;
}




#include<stdio.h>
int sum(int a[]);
int main()
{
	int a[] = { 10,20,30,40 };



	printf("%d", sum(a));

	system("pause");

}

int sum(int a[])
{
	int i = 0,sum=0;

	for (i = 0; i < 4 ; i++)
	{
		sum += a[i];
	}

	return sum;

}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 4
int sum(int a[]);
int main()
{
	int a[] = { 10,20,30,40 };
	int i;

	for (i = 0; i <size ; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("%d", sum(a));

	system("pause");

}

int sum(int *p)
{
	int i = 0,sum=0;

	for (i = 0; i < size ; i++)
	{
		sum += *(p+i);
	}

	return sum;

}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double avg(double a[]);
void get_data(double a[]);
double puncha(double a[], double avg1);

int main()
{
	double a[10],avg1;

	get_data(a);
	avg1 = avg(a);
	
	printf("��� %lf\n", avg(a));
	printf("ǥ�� ���� %lf", puncha(a, avg1));

	system("pause");

}



double avg(double a[])
{
	int i;
	double avg1 = 0;

	for (i = 0; i < 10; i++)
	{
		avg1 += a[i];
	}

	return avg1 / 10;
}

void get_data(double a[])
{

	int i;
	printf("<");
	for (i = 0; i < 10; i++)
	{
		a[i] = (rand() % 100) + 1;
		printf("%.2lf ", a[i]);
	}
	printf(">");
}

double puncha(double a[],double avg1)
{
	int i,sum=0;
	for (i=0;i<10;i++)
	{
		sum += (a[i] - avg1)*(a[i] - avg1);

	}

	return sqrt(sum/10);

}