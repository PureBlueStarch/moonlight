#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//常量
int main()
{
	//1.字面常量
	6;
	50;
	9.33;
	'a';//字符数据常量
	"abcdd";//字符串类型常量
	//字符用''
	//字符串用""


	//2.const修饰的常变量
	//int num1 = 10;
	
	//printf("%d\n", num1);
	//会输出20，因为Int虽然引入了num1这个变量，但之后的代码将Num1重新赋值了



	const int num1 = 10;
	//num1 = 20;//不能再输入此种赋值命令，因为const使num1变成了常变量

	printf("%d\n", num1);
	//会输出10，因为const将num1修饰成了常变量
	//num具有常属性，但仍不可将其认为常量，其变量本质不变



	//3..#define 定义的标识符常量
#define a 100
	{
		//a = 5;
		printf("a = %d\n", a);
		//输出的a为100，因为a已经被定义了
	}

	//4.枚举常量
	enum CMYK
	{
		//red,//此处用逗号
		red = 3,//赋初值//不是修改red的值，只是给它一个初始值
		yellow,
		blue//最后一个取值不用加逗号
		//以上是CMYK的所有可能取值
	};
	{
		enum CMYK color;
		//red = 3;//会报错，不可在此修改
		printf("%d\n", red);
		printf("%d\n", blue);
		printf("%d\n", yellow);
		//若red不修改，则输出 0 2 1，若red修改，则输出 3 5 4

	}
	return 0;
}