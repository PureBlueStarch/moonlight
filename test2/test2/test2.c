//int main()
//{
//	//�ַ����ͣ��ַ�
//	//�ַ�a - 'a'
//	char ch = 'a';
//	//�ַ����ͣ�����
//	int age = 19;
//	//������
//	short age = 19;
//	//������
//	long age = 19;
//	//����������
//	long long age = 19;
//	//�����ȸ�����
//	float num = 15.6;
//	//˫���ȸ�����
//	double num = 10.0;
//	return 0;
//}
//
#include <stdio.h>
int main()
{
	printf("%d\n",1412);//��ӡһ������1412
	//��ӡһ������---%d
	//sizeof--�ؼ���---������---�������ͻ��߱�����ռ�ռ�Ĵ�С
	printf("%d\n", sizeof (char)); 
	printf("%d\n", sizeof (short));
	printf("%d\n", sizeof (int));
	printf("%d\n", sizeof (long));
	printf("%d\n", sizeof (long long));
	printf("%d\n", sizeof (float));
	printf("%d\n", sizeof (double));

	return 0;
}