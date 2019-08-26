#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 10
int main()
{
	int score[student];//크기가 student인 정수형 배열 score의 선언
		int i;//배열 운용용 변수(첨자)의 선언


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
			printf("%d번째 학생의 점수는 %d입니다\n", i, score[i]);

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
		printf("성적 입력");
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

	for (i = 0; i<score; i++)// 사용자가 입력한 3개의 점수를 배열에 저장
	{
		printf("게임 %d에서 선수의 득점은?",i+1);
		scanf("%lf", &a[i]);

	}
	for (i = 0; i<score; i++) // 평균을 구하기 위해서 배열의 모든 값을 합산
	{
		sum += a[i];
	}
	result = sum / score;

	printf("평균 %5.3f", result);

	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 5
int main()
{
	int score[student];//크기가 student인 정수형 배열 score의 선언
	int i;//배열 운용용 변수(첨자)의 선언


	score[0] = 90;
	score[1] = 80;
	score[2] = 70;
	score[3] = 60;
	score[4] = 50;
	

	printf("\n\t\t &score = %d\n", score);
	for (i = 0; i < student; i++)
		//printf("%d번째 학생의 점수는 %d입니다\n", i, score[i]);
		printf("score[%d]=%d    &score[%d]=%d\n", i, score[i]);

	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 5
int main()
{
	int score[student];//크기가 student인 정수형 배열 score의 선언
	int i;//배열 운용용 변수(첨자)의 선언


	score[0] = 90;
	score[1] = 80;
	score[2] = 70;
	score[3] = 60;
	score[4] = 50;
	

	printf("\n\t\t&score = %d\n", score);
	for (i = 0; i < student; i++)
		//printf("%d번째 학생의 점수는 %d입니다\n", i, score[i]);
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
		++freq[rand() % 6];//rand()%6 난수 발생시켜 6으로 나눈 나머지//배열 첨자 수+1
	printf("면          빈도\n");
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
	FILE * fp = NULL; //데이터 파일용 파일 포인터 fp
	fp = fopen("data.txt", "w"); //fp를 데이터 파일 data,txt에 연결 a는 이어쓰기 w는 덮어쓰기 읽기전용 r

	for (i = 0; i < size; i++)
	{
		data = rand() % 200 + 50;//난수를 발생시켜 50~249 사이의 데이터 생성
		fprintf(fp, "%d", data);//data를 fp로 연결된 파일에 기록
		printf(" %d", data);//화면에 출력

	}

	fclose(fp);

	printf("\n======================\n");
	fp = fopen("data.txt", "r");//data.txt를 읽기 전용으로 열어 fp에 연결
	i = 0;

	while (!feof(fp))//데이터 파일의 끝이 아닌 동안
	{
		fscanf(fp, "%d", &a[i]);//현재 fp가 가리키는 곳의 값을 읽어
		i++; //배열의 i번째 원소로 저장
	}

	for (i = 0; i < size; i++) //배열의 원소 출력
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

	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);

	for (i = 0; i < size; i++)
	{
		if(list[i]==key)
			printf("탐색 성공 인덱스=%d",)

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

		for (i = 0; i < size - 1; i++) //i번째로 작은 원소 찾기
		{
			min = i;//이번 첨자의 자리가 현재 가장 작은값
			for (j = i + 1; j < size; j++)//나머지 원소와 비교하여
			{
				if (a[j] < a[min])//이번 원소가 더 작으면
					min = j;//현재 최솟갑스이 첨자는 이번 원소의 첨자 ///중요중요
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
		++freq[rand() % 6];//rand()%6 난수 발생시켜 6으로 나눈 나머지//배열 첨자 수+1
	printf("면          빈도\n");
	printf("======================\n");

	for (i = 0; i < size; i++)
		printf("%3d          %3d\n", i + 1, freq[i]);

	system("pause");
}



-----------------------------------------------------------------------------------



행렬의 합,곱

char ch='A';
'A'~'Z'

문자를 배열에 저장

텍스트


string 문자열: 문자들이 0개 이상 모인것 (0개 null)

"A"문자열 // %s
'A' 문자 //%c //숫자가 아닌 데이터를 ''에 넣어서 사용하면 문자


문자열은 문자배열이다. 선언을 문자배열로
char A[];

\0<<마지막에,,,여기가 끝이다,,null문자

1.문자 배열은 마지막에 null 문자로 막기
2. 와일, 포문 써도된다.
3. printf("%s",str);로 출력해도 된다. << 첫번째 문자는 뭐고,,,각각
하나하나의 문자를 알아야하는 상황이 있으니까 와일, 포문도 기억해두기



배열의 초기화 방법
1. 대입 연산  str[4]; str[0]='a'; ...
2. char str[4]={'a','b','c','\0'}; //원소나열법
3. char str[4] = "abc";

char ques[] ="is seoil the capital city of korea?";<<자동으로 빈자리에 숫자 넣어줌


이름, 주소 2차원 배열
------------------------------------------------------------------------------

#include <stdio.h>
int main()
{
	int i;
	char str[4];

	str[0] = 'a';
	str[1] = 'b';

	str[2] = 'c';
	str[3] = '\0'; // 여기가 끝이다.

	for (i = 0; str[i]!= '\0'; i++)
		printf("%c", str[i]);


	system("pause");





}

크기가 4인배열에 abc저장하고 for로 출력

#include <stdio.h>
int main()
{
	int i;
	char str[4];

	str[0] = 'a';
	str[1] = 'b';

	str[2] = 'c';
	str[3] = '\0'; // 여기가 끝이다.

	printf("%s", str);

	system("pause");





}


abc출력하는데 printf만 사용


#include <stdio.h>
int main()
{
	
	char qus[] = "is seoul the capital city of korea?";
		char answer[100];

		printf("%s", qus);
		scanf("%s", answer);

		if (answer[0] == 'y')
			printf("맞음");
		else
			printf("틀림");


		
		system("pause");


}

is seoul the capital city of korea?에서 답이 맞으면 맞다고 틀리면 틀리다고 출력



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	
	char s[10], i = 0;

	printf("문자열을 입력");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		i++;
		printf("문자열의 길이: %d \n", i);

		
	}

	printf("문자열의 길이 : %d \n", strlen(s));
		system("pause");


}


문자열을 입력받고 그 문자열의 길이를 출력strlen이랑 while로 출력 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	
	char s[10], i = 0;

	printf("문자열을 입력");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		i++;
		printf("문자열의 길이: %d \n", i);

		
	}

	printf("문자열의 길이 : %d \n", strlen(s));
		system("pause");


}


#include<stdio.h>
int main()
{

	double i = 10;
	double *p;

	p = &i;

	printf("i=%f\n", i);
	printf("i주소=%d\n",&i);

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

	p = &x; //p에 x의 주소 저장
	printf("p의값=%d x의 주소=%d\n", p, &x);
	printf("*p=%d\n", *p);

	p = &y; //p에 저장된 값을 변경
	printf("p=%d y주소=%d\n", p, &y);

	printf("\n\n");

	

	system("pause");
}



#include<stdio.h>
int main()
{

	int i = 10;
	int *p;

	p = &i; //p를 i의 주소로 초기화 : *p<-10

	printf("i=%d    *p=%d", i, *p);

	*p = 20; //p가 가리키는 변수 i에 20을 저장
	printf("i의 값=%d		*p의 값 = %d \n", i, *p);

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
	printf("증가전 pc=%d ps =%d pi=%d\n", pc, ps, pi);

	pc++;
	ps++;
	pi++;

	printf("증가 후 pc = %d ps =%d pi=%d", pc, ps, pi);
	system("pause");
}


#include<stdio.h>
int main()
{


	int x = 10, y = 20;


	printf("%d,%d", x, y);

	move(x, y);
	printf("호출 후 (%d,%d)",x,y);


	system("pause");
}



move(int xpos, int ypos)
{
	xpos += 5;
	ypos += 5;

}// 콜 바이 밸류





배열이름이 포인터니까 포인터도 배열 이름처럼 사용할 수 있다.

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
	
	printf("평균 %lf\n", avg(a));
	printf("표준 편차 %lf", puncha(a, avg1));

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