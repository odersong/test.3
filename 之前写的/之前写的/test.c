int main()//������-��������-main�������ҽ���һ��
{
	printf("hello world\n");
	return 0;
}
//int �����ε���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//����һ����stdio.h���ļ�
//std-��׼ standard i - inpute(���룩 o - output�������
//
#include<stdio.h>

int main()
{
	//�����������
	//����Ļ�����hello world
	//����-print function - printf - ��ӡ����
	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
	//���˵Ķ���-���к�
	//#include��������
	printf("hello ����\n");
	return 0;//���� 0
}
#include<stdio.h>

int main()
{
	printf("hehe\n");
	return 0;
}
//char   �ַ���������
#include<stdio.h>

int main()
{
	char ch = 'A';//�ڴ�
	printf("%c\n", ch);//%c -- ��ӡ�ַ���ʽ������
	return 0;
}
//short  ������    short int -- ������
#include<stdio.h>

int main()
{
	short int

}
//int    ����   //%d
#include<stdio.h>

int main()
{
	int age = 20;
	printf("%d\n", age);//%d -- ��ӡ������ʮ��������                         
	return 0;
}
//long   ������
#include<stdio.h>

int main()
{
	long num = 100;
	printf("%d\n", num);
	return 0;
}
//long long    ����������
//float  �����ȸ�����    %f - ��ӡ��������-��С��
#include<stdio.h>

int main()
{
	float f = 5.0;
	printf("%f\n", f);
	return 0;
}
//double ˫���ȸ�����    %lf - ��ӡ˫���ȸ�����
#include<stdio.h>

int main()
{
	double d = 3.14;
	printf("%lf\n", d);
	return 0;
}

//%p - �Ե�ַ��ʽ��ӡ
//%x - ��ӡ16��������


int main()
{
	printf("%d\n", sizeof(char));     //1 �ֽ�
	printf("%d\n", sizeof(short));    //2 �ֽ�
	printf("%d\n", sizeof(int));      //4 �ֽ�
	printf("%d\n", sizeof(long));     //4  ��  8 �ֽ�   sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(long long));//8 �ֽ�
	printf("%d\n", sizeof(float));    //4 �ֽ�
	printf("%d\n", sizeof(double));   //8 �ֽ�
	return 0;
}
//char   �ַ���������    //%c -- ��ӡ�ַ���ʽ������
//short  ������    short int -- ������
//int    ����   //%d    //%d -- ��ӡ������ʮ��������  
//long   ������
//long long    ����������
//float  �����ȸ�����    %f - ��ӡ��������-��С��
//double ˫���ȸ�����    %lf - ��ӡ˫���ȸ�����

//�ֽ�
//bit - ����λ       ֻ�ܴ�һ��1����
//byte - �ֽ�        һ���ֽ��ǰ˸�����λ�Ĵ�С
//kb                 һkb��1024���ֽ�
//mb                 һmb��1024��kb
//gb                 һgb��1024��mb
//tb                 һtb��1024��gb
//pd                 һpd��1024��tb

int main()
{
	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
	printf("%d\n", age);
	float weight = 95.6f;//���ڴ������ĸ��ֽڣ����С��
	printf("%f\n", weight);
	return 0;
}

#include<stdio.h>

int num2 = 20;//ȫ�ֱ��� - �����ڴ����{ }֮��ı���

int main()
{
	int num1 = 10;//�ֲ����� - �����ڴ����{ }�ڲ��ı���
	return 0;
}


#include<stdio.h>

int a = 100;

int main()
{
	int a = 10;
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
	//���ֲ�������ȫ�ֱ���������ͬʱ���ֲ���������
	printf("%d\n", a);
	return 0;
}

#include<stdio.h>

int main()    //�������ʾ����
{
	{
		int a = 10;//�ֲ����������������ڵ�{ }֮���ʹ�ã�
	}
	printf("%d\n", a); //printf�ھֲ������Ĵ����{ }����Ĵ����{ }��
	return 0;
}

#include<stdio.h>  //��ȷ����ʾ����

int a = 10;        //ȫ�ֱ��������ﶼ����ʹ�ã���������������ͬʱ�ֲ���������

int main()
{
	printf("%d\n", a);
	return 0;
}

//�������
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0; //c���Թ涨������Ҫ�����ڵ�ǰ��������ǰ��
	scanf("%d%d", &num1, &num2);//ȡ��ַ����&  //��������ʹ���������scanf
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);//scanf�����뺯��
	//scanf
	//strcpy
	//strlen
	//strcat
	//...
	//����ȫ��
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	return 0;
}
//scanf   ��c�����ṩ��
//scanf_s  ���Ǳ�׼c�����ṩ�ģ�VS�������ṩ��
//��ƽ̨�ԡ�����ֲ�ԣ�scanf_s������gccʹ��
//#define _CRT_SECURE_NO_WARNINGS  //���ڿ�ͷ�Ϳ��Խ����������   ����Դ�ļ��Ŀ�ͷ
//�ҵĵ�������newc+ +file �򿪼��±�����#define _CRT_SECURE_NO_WARNINGS�����ڿ�ͷ��ʾ
