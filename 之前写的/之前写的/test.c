int main()//主函数-程序的入口-main函数有且仅有一个
{
	printf("hello world\n");
	return 0;
}
//int 是整形的意思
//main前面的int表示main函数调用返回一个整型值
//包含一个叫stdio.h的文件
//std-标准 standard i - inpute(输入） o - output（输出）
//
#include<stdio.h>

int main()
{
	//这里完成任务
	//在屏幕上输出hello world
	//函数-print function - printf - 打印函数
	//库函数-C语言本身提供给我们使用的函数
	//别人的东西-打招呼
	//#include（包含）
	printf("hello 比特\n");
	return 0;//返回 0
}
#include<stdio.h>

int main()
{
	printf("hehe\n");
	return 0;
}
//char   字符数据类型
#include<stdio.h>

int main()
{
	char ch = 'A';//内存
	printf("%c\n", ch);//%c -- 打印字符格式的数据
	return 0;
}
//short  短整型    short int -- 短整型
#include<stdio.h>

int main()
{
	short int

}
//int    整形   //%d
#include<stdio.h>

int main()
{
	int age = 20;
	printf("%d\n", age);//%d -- 打印整形上十进制数据                         
	return 0;
}
//long   长整型
#include<stdio.h>

int main()
{
	long num = 100;
	printf("%d\n", num);
	return 0;
}
//long long    更长的整形
//float  单精度浮点数    %f - 打印浮点数字-打小数
#include<stdio.h>

int main()
{
	float f = 5.0;
	printf("%f\n", f);
	return 0;
}
//double 双精度浮点数    %lf - 打印双精度浮点数
#include<stdio.h>

int main()
{
	double d = 3.14;
	printf("%lf\n", d);
	return 0;
}

//%p - 以地址形式打印
//%x - 打印16进制数据


int main()
{
	printf("%d\n", sizeof(char));     //1 字节
	printf("%d\n", sizeof(short));    //2 字节
	printf("%d\n", sizeof(int));      //4 字节
	printf("%d\n", sizeof(long));     //4  或  8 字节   sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(long long));//8 字节
	printf("%d\n", sizeof(float));    //4 字节
	printf("%d\n", sizeof(double));   //8 字节
	return 0;
}
//char   字符数据类型    //%c -- 打印字符格式的数据
//short  短整型    short int -- 短整型
//int    整形   //%d    //%d -- 打印整形上十进制数据  
//long   长整型
//long long    更长的整形
//float  单精度浮点数    %f - 打印浮点数字-打小数
//double 双精度浮点数    %lf - 打印双精度浮点数

//字节
//bit - 比特位       只能存一个1或零
//byte - 字节        一个字节是八个比特位的大小
//kb                 一kb是1024个字节
//mb                 一mb是1024个kb
//gb                 一gb是1024个mb
//tb                 一tb是1024个gb
//pd                 一pd是1024个tb

int main()
{
	short age = 20;//向内存申请2个字节=16bit位，用来存放20
	printf("%d\n", age);
	float weight = 95.6f;//向内存申请四个字节，存放小数
	printf("%f\n", weight);
	return 0;
}

#include<stdio.h>

int num2 = 20;//全局变量 - 定义在代码块{ }之外的变量

int main()
{
	int num1 = 10;//局部变量 - 定义在代码块{ }内部的变量
	return 0;
}


#include<stdio.h>

int a = 100;

int main()
{
	int a = 10;
	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
	//当局部变量和全局变量名字相同时，局部变量优先
	printf("%d\n", a);
	return 0;
}

#include<stdio.h>

int main()    //错误的演示方法
{
	{
		int a = 10;//局部变量不能在他所在的{ }之外表达（使用）
	}
	printf("%d\n", a); //printf在局部变量的代码块{ }外面的代码块{ }里
	return 0;
}

#include<stdio.h>  //正确的演示方法

int a = 10;        //全局变量在哪里都可以使用（表达），但是名字相同时局部变量优先

int main()
{
	printf("%d\n", a);
	return 0;
}

//两数相加
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0; //c语言规定，变量要定义在当前代码块的最前面
	scanf("%d%d", &num1, &num2);//取地址符号&  //输入数据使用输入符号scanf
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
	scanf("%d%d", &num1, &num2);//scanf是输入函数
	//scanf
	//strcpy
	//strlen
	//strcat
	//...
	//不安全的
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	return 0;
}
//scanf   是c语言提供的
//scanf_s  不是标准c语言提供的，VS编译器提供的
//跨平台性、可移植性，scanf_s不能在gcc使用
//#define _CRT_SECURE_NO_WARNINGS  //放在开头就可以解决错误问题   放在源文件的开头
//我的电脑搜索newc+ +file 打开记事本输入#define _CRT_SECURE_NO_WARNINGS即可在开头显示
