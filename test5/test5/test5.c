#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����
int main()
{
	//1.���泣��
	6;
	50;
	9.33;
	'a';//�ַ����ݳ���
	"abcdd";//�ַ������ͳ���
	//�ַ���''
	//�ַ�����""


	//2.const���εĳ�����
	//int num1 = 10;
	
	//printf("%d\n", num1);
	//�����20����ΪInt��Ȼ������num1�����������֮��Ĵ��뽫Num1���¸�ֵ��



	const int num1 = 10;
	//num1 = 20;//������������ָ�ֵ�����Ϊconstʹnum1����˳�����

	printf("%d\n", num1);
	//�����10����Ϊconst��num1���γ��˳�����
	//num���г����ԣ����Բ��ɽ�����Ϊ��������������ʲ���



	//3..#define ����ı�ʶ������
#define a 100
	{
		//a = 5;
		printf("a = %d\n", a);
		//�����aΪ100����Ϊa�Ѿ���������
	}

	//4.ö�ٳ���
	enum CMYK
	{
		//red,//�˴��ö���
		red = 3,//����ֵ//�����޸�red��ֵ��ֻ�Ǹ���һ����ʼֵ
		yellow,
		blue//���һ��ȡֵ���üӶ���
		//������CMYK�����п���ȡֵ
	};
	{
		enum CMYK color;
		//red = 3;//�ᱨ�������ڴ��޸�
		printf("%d\n", red);
		printf("%d\n", blue);
		printf("%d\n", yellow);
		//��red���޸ģ������ 0 2 1����red�޸ģ������ 3 5 4

	}
	return 0;
}