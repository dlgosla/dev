#include<stdio.h>

int sum(int a[], int n);

int main()
{

	int data[] = { 10,20,30,40,50 }, value;

	value = sum(data, 5);//배열 이름과 크기를 줌

	printf("%d", value);


	system("pause");

}

int sum(int a[], int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;

}



#include<stdio.h>

int sum(int a[], int n);

int main()
{

	int data[] = { 10,20,30,40,50 }, value;

	value = sum(data, 5);//배열 이름과 크기를 줌

	printf("%d", value);



	system("pause");

}

int sum(int *p, int n)//선언,초기화 
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += *(p + i);//포인터에서는 괄호가 중요하다.
	return sum;

}

 




#include<stdio.h>

#define N_DATA	20;

int main()
{

	double data[20];
	double mean;//평균

	srand((unsigned)time(NULL));//난수발생의 씨드
	get_data(data);//데이터 ㅜㅅ집 함수 호출
	printf_data(data);//배열 출력
	mean = get_mean(data);//평균 구하는 함수 호풀

	printf("평균 %-7.4lf\n", mean);
	printf("표준편차:-10.6lf\n", get_std_dev(data, mean));

	system("pause");

}

int get_data(double data[])
{
	int i;
	printf("\n\t(");
	for (i = 0; i < N_DATA; i++);
	{printf("%.2lf", ); }

}
double get_mean(double data[])
{
	int i;
	double sum = 0.0;
	for (i = 0; i < N_DATA; i++)
		sum += data[i];//합

	return sum / N_DATA;//반환

}


double get_std_dev(double data[], double mean)
{
	int i;
	double sum = 0.0;
	for(i=0;i<N_DATA;i++)
		sum += (data[i] - mean)*(data[i] - mean);
	return sqrt(sum / N_DATA);

}




#include<stdio.h>

#define N_DATA	20;

int get_min(int, int);
int main()
{

	int n1, n2, result;
	int(*pf)(int, int);//리턴형이 int 이고 파라미터가 정수형 2개인 ㅏㅁ수를 가리킬 수 있는 함수 포인터의 선언

	printf("첫번째 값");
	printf("두번째값");

	pf = get_min;//함수 겟민의 주소로 포기화된 함수 초인터 *pf
	result = pf(n1, n2);


	printf("더 작은 값은 %d\n",result);

	printf("\n\n");
	system("pause");

}

int get_min(int a, int b)
{
	if (a < b)
		return a;

	else
		return b;
}




#include<stdio.h>

#define N_DATA	20;


int get_min(int, int);
int main()
{

	int choice;
	void(*pf[3])(void);//리턴값과 파라미터가 없느 함수를 가리키는 포인터 3개를 저장하는 배열

	pf[0] = menu1;
	pf[1] = menu2;
	pf[2] = menu3;
	printf("\n메뉴 선택 0햄버거 1치킨 2콜라");
	scanf("%d", &choice);
	if (choice >= 0 && choice <= 2)
		pf[choice]();


}


void menu1(void)
{
	printf(\n햄버거가 호출됨);
}

void menu2()
{}


void menu3
{}







-----------------------------------
문자열 상수: 헬로 월드와 같이 큰따음표안에 하나이상의 문자들을 쭉나열해놓은거
메모리영역에 저장된다구~

char *p="hello world";


p[0]='A'; //또는 st...


a문자열을 문자배열로 문자형포인터를 사용하여 엑세스 할 수 있다




----------------

#include<stdio.h>


int main()
{
	int i;
	char menu[5][10] = { "init","open","close","read","write" };

	for (i = 0; i < 5; i++)
		printf("%d번째 메뉴 :%s\n", i, menu[i]);

	for (i = 0; i < 5; i++)
		printf("%s\n", menu[i]);


	system("pause");
}


#include<stdio.h>

void show_prompt(char *p)
{
	printf(p);

}
int main()
{
	char *p = "Four scores and seven years ago, our fathers";

	show_prompt("정수를 입력하시오");
	printf("\n\t");
	show_prompt(p);



	system("pause");
}


#include<stdio.h>

void show_prompt(char *q)
{
	printf(q);

}
int main()
{
	char *p = "Four scores and seven years ago, our fathers";

	show_prompt("정수를 입력하시오");
	printf("\n\t");
	show_prompt(p);



	system("pause");
}


#include<stdio.h>


int main()
{

	char s[] = "hello world";
	char *p = "helloworld";

	printf("배열로 표시된 문자열 : %s", s);
	printf("포인터로 표시된 문자열 %s", p);

	printf("\n\n");
	system("pause");
}


#include<stdio.h>


int main()
{

	char s[50] = "hello world";
	char *p = "helloworld";
	//s = "gachon university";
	p = "gachon unversity";
	s[0] = 'k';
	//p[0] = 'k';
	printf("배열로 표시된 문자열 =%s\n", s);
	printf("포인터로 표시된 문자열 = %s", p);
	system("pause");
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i, is_upper, is_lower, is_digit;
	char password[30];

	while (1)
	{
		printf("암호생성해");
		scanf("%s", password);//포인터야


		is_upper = is_lower = is_digit = 0;
		for(i=0;i<strlen(password);i++)
		{
			if (password[i] >= '0'&&password[i] <= '9')

				is_digit = 1;
			else if (password[i] >= 'A'&&password[i] <= 'Z')
				is_upper = 1;
			else if (password[i] >= 'a'&&password[i] <= 'z')
				is_lower = 1;
		
		}

		if ((is_digit==1)&&(is_upper==1)&&(is_lower==1))
		{
			printf("적정한 암호입니다. \n");
			break;
		}
		else printf(" 숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");

	}

	system("pause");
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)//ctrl+Z
			break;
		putchar(ch);
	}

	system("pause");
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char name[100];
	char address[100];

	printf("이름");
	gets(name);

	printf("현재 거주하는 주소");
	gets(address);

	//puts(name);
	//puts(adress);
	printf("성명:%s 주소: %s", name, address);


	system("pause");
}


strcmp이름 순으로...


함수

호출 반환

()함수
{}블록


for는 아님
main은 함수
printf도 함수..이름을 가지고 ()
stdlib.h


반환형 리턴형
▼
void prn(void) //보낼일도,,받을일도 없..뭐래
          ▲  
          전달인자 : 매개변수 파라미터 parameter


int main(void)<<보내야 되냐 말아냐되냐
▲ return 0; 이라 int 형임ㅋㅋ뭐래


리턴 값          ㅣ   파라미터
-------------------------------
int              l    없다 
double 있다 (1)  l--------------    
char             l    있다  (여러개) 정수 실수 문자
---------------------------------
                ㅣ    없다
    없다        ㅣ----------------
                ㅣ    있다 (여러개)
----------------------------------

함수가 시행된다음에 그 결과값을 리턴해 줄 때 데이터형
함수가 수행되고 난 후 호출한 곳으로 되돌려주는 값의 데이터형 <<반환형
전달인자 : 전달하는 값이 5개면 파라미터도 5개 필요,,,아 뭐래,,


void 이름 (void)  //헤더 
{printf("------------");
printf("------------");    //정의,,몸통
}

정의 -> 호출 -> 사용


리턴값은 유니크하고 파라미터는 여러개이다

매개변수는 외부에서 전달되는 데이터를 저장하는 변수
이 함수안에서 n이라는 변수를 선언하고 저쪽에서 전달된 값을 초기화 한거랑 똑같아요
sqauer(100); 

전달인자랑 매개변수 가 똑같아야됨..개수도 문자형도...
호출한 곳에서 전달하는 값하고 매개변수가 똑같아야,,,


#include <stdio.h>




int add(int x, int y)
{
	int result;

	result = x + y;
	return(result); //인테자? 아 이함수가 끝나면 정수가 
리터노디는구나 호출하는곳에 add가 있겠구나 파라미터가 두개니 
정수두개가 저쪽에서 보내지겠구나
	
}




int main()
{

	int sum;
	sum = add(2, 3); //호출,,,2,3을 전달인자로 add함수 호출 << 위에거 다하고 add(2,3)이자리로 다시옴 
	printf("\n\t 덧셈 결과 = #3d \n", sum);

	sum = add(6, 8);
	printf("덧셈 결과 : %d \n",sum);


	system("pause");
}


char이랑 double 가능은 한데,, char 128넘으면 ㅋ이상해짐


#include <stdio.h>





int add(int x, int y);// 아니면 int add(int , int ); 함수원형

int main()
{

	int sum;
	sum = add(2, 300); //호출,,,2,3을 전달인자로 add함수 호출 >> 위에거 다하고 add(2,3)이자리로 다시옴 
	printf("\n\t 덧셈 결과 = %3d \n", sum);

	sum = add(6, 8);
	printf("\n\t 덧셈 결과 : %d \n",sum);


	system("pause");

	
}

int add(int x, int y)
{
	int result;

	result = x + y;
	return(result); //인테자? 아 이함수가 끝나면 정수가 리터노디는구나 호출하는곳에 add가 있겠구나 파라미터가 두개니 정수두개가 저쪽에서 보내지겠구나

}

함수 이용해서 덧셈 ㄱ려과 출력


#include <stdio.h>





int square(int n );

int main()
{
	int n, result;

	for (n = 1; n < 10; n++)
	printf("%d*%d=%d \n", n,n, suquare(n));

	system("pause");
}

int square(int n) //위에 n이랑 다른 애임, 동명이인같은 ㅎ
{

	return(n*n); 

}



-------------------------------------------------------------------

#include <stdio.h>
int main()
{

	int i;

	printf("----------------------\n");
	printf("----------------------\n");

	for (i = 0; i < 5; i++)
		printf("%d의 제곱은 %3d\n", i+1,(i+1)*(i+1) );

		printf("----------------------\n");
		printf("----------------------\n");





	system("pause");
}






#include <stdio.h>

void prn(void)
{
	printf("----------------------\n");
	printf("----------------------\n");
}

int main()
{

	int i;
	prn();

	for (i = 0; i < 5; i++)
		printf("%d의 제곱은 %3d\n", i+1,(i+1)*(i+1) );

	prn();




	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{

	int a, b, result;

	printf("두개정수");
	scanf("%d %d", &a, &b);

	result=power(a, b);

	printf("\n %d의 %d제곱은 %d입니다", a,b, result);
	system("pause");
}


int power(int x, int y) 
{

	int i, value = 1;

	for (i = 0; i < y; i++)
	{

		value *= x;
	}

	return(value);

}

a,b입력받고 a의 b제곱은 몇인지 출력


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{


	int a, b;
	printf("두개정수");
	scanf("%d %d",&a, &b);

	printf("\n\t 둘 중에 큰 수 %d", get_larger(a, b));

	system("pause");
}

int get_larger(int x, int y) 
{
	if (x > y)
		return(x);
	else
		return (y);

}


for (d=2;d<=n/2;d++)
이러면 최소로 연산한다


두 수를 입력받아서 큰 수를 찾는다 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	
	int n, result;

//	n = ger_integer();
	result = ger_integer();

	//result = is_prime(n);
	if (result == 1)
		printf("소수");

	else
			printf("소수아님");


}

int get_lnteger(void)
{
	int n;

	printf("정수입력");
	scanf("%d", &n);
	//return n;

		return is_prime(n);
}

is_prime(int n)
{
	int d;

	for (d = 2; d <= n / 2; d++)
	{
		if (n%d == 0)
			return 0;

	}
	return 1;
}
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	
	int n, result;

//	n = ger_integer();
	result = get_lnteger();

	//result = is_prime(n);
	if (result == 1)
		printf("소수");

	else
			printf("소수아님");

	system("pause");
}

int get_lnteger(void)
{
	int n;

	printf("정수입력");
	scanf("%d", &n);
	//return n;

		return is_prime(n);
}

is_prime(int n)
{
	int d;

	for (d = 2; d <= n / 2; d++)
	{
		if (n%d == 0)
			return 0;

	}
	return 1;
}


함수 이용해서 소수 찾기 



표준 입출력 stdio.h 
수학 연산   math.h
문자열 처리 string.h
현재 시간사용 time.h
난수 발생 stdlib.h

srand((unsigned)time(null));//현재시간을 시드로함
          ▲양수만

