#include<stdio.h>

int sum(int a[], int n);

int main()
{

	int data[] = { 10,20,30,40,50 }, value;

	value = sum(data, 5);//�迭 �̸��� ũ�⸦ ��

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

	value = sum(data, 5);//�迭 �̸��� ũ�⸦ ��

	printf("%d", value);



	system("pause");

}

int sum(int *p, int n)//����,�ʱ�ȭ 
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += *(p + i);//�����Ϳ����� ��ȣ�� �߿��ϴ�.
	return sum;

}

 




#include<stdio.h>

#define N_DATA	20;

int main()
{

	double data[20];
	double mean;//���

	srand((unsigned)time(NULL));//�����߻��� ����
	get_data(data);//������ �̤��� �Լ� ȣ��
	printf_data(data);//�迭 ���
	mean = get_mean(data);//��� ���ϴ� �Լ� ȣǮ

	printf("��� %-7.4lf\n", mean);
	printf("ǥ������:-10.6lf\n", get_std_dev(data, mean));

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
		sum += data[i];//��

	return sum / N_DATA;//��ȯ

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
	int(*pf)(int, int);//�������� int �̰� �Ķ���Ͱ� ������ 2���� �������� ����ų �� �ִ� �Լ� �������� ����

	printf("ù��° ��");
	printf("�ι�°��");

	pf = get_min;//�Լ� �ٹ��� �ּҷ� ����ȭ�� �Լ� ������ *pf
	result = pf(n1, n2);


	printf("�� ���� ���� %d\n",result);

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
	void(*pf[3])(void);//���ϰ��� �Ķ���Ͱ� ���� �Լ��� ����Ű�� ������ 3���� �����ϴ� �迭

	pf[0] = menu1;
	pf[1] = menu2;
	pf[2] = menu3;
	printf("\n�޴� ���� 0�ܹ��� 1ġŲ 2�ݶ�");
	scanf("%d", &choice);
	if (choice >= 0 && choice <= 2)
		pf[choice]();


}


void menu1(void)
{
	printf(\n�ܹ��Ű� ȣ���);
}

void menu2()
{}


void menu3
{}







-----------------------------------
���ڿ� ���: ��� ����� ���� ū����ǥ�ȿ� �ϳ��̻��� ���ڵ��� �߳����س�����
�޸𸮿����� ����ȴٱ�~

char *p="hello world";


p[0]='A'; //�Ǵ� st...


a���ڿ��� ���ڹ迭�� �����������͸� ����Ͽ� ������ �� �� �ִ�




----------------

#include<stdio.h>


int main()
{
	int i;
	char menu[5][10] = { "init","open","close","read","write" };

	for (i = 0; i < 5; i++)
		printf("%d��° �޴� :%s\n", i, menu[i]);

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

	show_prompt("������ �Է��Ͻÿ�");
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

	show_prompt("������ �Է��Ͻÿ�");
	printf("\n\t");
	show_prompt(p);



	system("pause");
}


#include<stdio.h>


int main()
{

	char s[] = "hello world";
	char *p = "helloworld";

	printf("�迭�� ǥ�õ� ���ڿ� : %s", s);
	printf("�����ͷ� ǥ�õ� ���ڿ� %s", p);

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
	printf("�迭�� ǥ�õ� ���ڿ� =%s\n", s);
	printf("�����ͷ� ǥ�õ� ���ڿ� = %s", p);
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
		printf("��ȣ������");
		scanf("%s", password);//�����;�


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
			printf("������ ��ȣ�Դϴ�. \n");
			break;
		}
		else printf(" ����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��!\n");

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

	printf("�̸�");
	gets(name);

	printf("���� �����ϴ� �ּ�");
	gets(address);

	//puts(name);
	//puts(adress);
	printf("����:%s �ּ�: %s", name, address);


	system("pause");
}


strcmp�̸� ������...


�Լ�

ȣ�� ��ȯ

()�Լ�
{}���


for�� �ƴ�
main�� �Լ�
printf�� �Լ�..�̸��� ������ ()
stdlib.h


��ȯ�� ������
��
void prn(void) //�����ϵ�,,�����ϵ� ��..����
          ��  
          �������� : �Ű����� �Ķ���� parameter


int main(void)<<������ �ǳ� ���Ƴĵǳ�
�� return 0; �̶� int ���Ӥ�������


���� ��          ��   �Ķ����
-------------------------------
int              l    ���� 
double �ִ� (1)  l--------------    
char             l    �ִ�  (������) ���� �Ǽ� ����
---------------------------------
                ��    ����
    ����        ��----------------
                ��    �ִ� (������)
----------------------------------

�Լ��� ����ȴ����� �� ������� ������ �� �� ��������
�Լ��� ����ǰ� �� �� ȣ���� ������ �ǵ����ִ� ���� �������� <<��ȯ��
�������� : �����ϴ� ���� 5���� �Ķ���͵� 5�� �ʿ�,,,�� ����,,


void �̸� (void)  //��� 
{printf("------------");
printf("------------");    //����,,����
}

���� -> ȣ�� -> ���


���ϰ��� ����ũ�ϰ� �Ķ���ʹ� �������̴�

�Ű������� �ܺο��� ���޵Ǵ� �����͸� �����ϴ� ����
�� �Լ��ȿ��� n�̶�� ������ �����ϰ� ���ʿ��� ���޵� ���� �ʱ�ȭ �ѰŶ� �Ȱ��ƿ�
sqauer(100); 

�������ڶ� �Ű����� �� �Ȱ��ƾߵ�..������ ��������...
ȣ���� ������ �����ϴ� ���ϰ� �Ű������� �Ȱ��ƾ�,,,


#include <stdio.h>




int add(int x, int y)
{
	int result;

	result = x + y;
	return(result); //������? �� ���Լ��� ������ ������ 
���ͳ��±��� ȣ���ϴ°��� add�� �ְڱ��� �Ķ���Ͱ� �ΰ��� 
�����ΰ��� ���ʿ��� �������ڱ���
	
}




int main()
{

	int sum;
	sum = add(2, 3); //ȣ��,,,2,3�� �������ڷ� add�Լ� ȣ�� << ������ ���ϰ� add(2,3)���ڸ��� �ٽÿ� 
	printf("\n\t ���� ��� = #3d \n", sum);

	sum = add(6, 8);
	printf("���� ��� : %d \n",sum);


	system("pause");
}


char�̶� double ������ �ѵ�,, char 128������ ���̻�����


#include <stdio.h>





int add(int x, int y);// �ƴϸ� int add(int , int ); �Լ�����

int main()
{

	int sum;
	sum = add(2, 300); //ȣ��,,,2,3�� �������ڷ� add�Լ� ȣ�� >> ������ ���ϰ� add(2,3)���ڸ��� �ٽÿ� 
	printf("\n\t ���� ��� = %3d \n", sum);

	sum = add(6, 8);
	printf("\n\t ���� ��� : %d \n",sum);


	system("pause");

	
}

int add(int x, int y)
{
	int result;

	result = x + y;
	return(result); //������? �� ���Լ��� ������ ������ ���ͳ��±��� ȣ���ϴ°��� add�� �ְڱ��� �Ķ���Ͱ� �ΰ��� �����ΰ��� ���ʿ��� �������ڱ���

}

�Լ� �̿��ؼ� ���� ������ ���


#include <stdio.h>





int square(int n );

int main()
{
	int n, result;

	for (n = 1; n < 10; n++)
	printf("%d*%d=%d \n", n,n, suquare(n));

	system("pause");
}

int square(int n) //���� n�̶� �ٸ� ����, �������ΰ��� ��
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
		printf("%d�� ������ %3d\n", i+1,(i+1)*(i+1) );

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
		printf("%d�� ������ %3d\n", i+1,(i+1)*(i+1) );

	prn();




	system("pause");
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{

	int a, b, result;

	printf("�ΰ�����");
	scanf("%d %d", &a, &b);

	result=power(a, b);

	printf("\n %d�� %d������ %d�Դϴ�", a,b, result);
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

a,b�Է¹ް� a�� b������ ������ ���


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{


	int a, b;
	printf("�ΰ�����");
	scanf("%d %d",&a, &b);

	printf("\n\t �� �߿� ū �� %d", get_larger(a, b));

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
�̷��� �ּҷ� �����Ѵ�


�� ���� �Է¹޾Ƽ� ū ���� ã�´� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	
	int n, result;

//	n = ger_integer();
	result = ger_integer();

	//result = is_prime(n);
	if (result == 1)
		printf("�Ҽ�");

	else
			printf("�Ҽ��ƴ�");


}

int get_lnteger(void)
{
	int n;

	printf("�����Է�");
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
		printf("�Ҽ�");

	else
			printf("�Ҽ��ƴ�");

	system("pause");
}

int get_lnteger(void)
{
	int n;

	printf("�����Է�");
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


�Լ� �̿��ؼ� �Ҽ� ã�� 



ǥ�� ����� stdio.h 
���� ����   math.h
���ڿ� ó�� string.h
���� �ð���� time.h
���� �߻� stdlib.h

srand((unsigned)time(null));//����ð��� �õ����
          ������

