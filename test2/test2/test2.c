//int main()
//{
//	//字符类型：字符
//	//字符a - 'a'
//	char ch = 'a';
//	//字符类型：整型
//	int age = 19;
//	//短整型
//	short age = 19;
//	//长整型
//	long age = 19;
//	//更长的整型
//	long long age = 19;
//	//单精度浮点数
//	float num = 15.6;
//	//双精度浮点数
//	double num = 10.0;
//	return 0;
//}
//
#include <stdio.h>
int main()
{
	printf("%d\n",1412);//打印一个整数1412
	//打印一个整数---%d
	//sizeof--关键字---操作符---计算类型或者变量所占空间的大小
	printf("%d\n", sizeof (char)); 
	printf("%d\n", sizeof (short));
	printf("%d\n", sizeof (int));
	printf("%d\n", sizeof (long));
	printf("%d\n", sizeof (long long));
	printf("%d\n", sizeof (float));
	printf("%d\n", sizeof (double));

	return 0;
}