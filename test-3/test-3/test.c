#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("���ֵΪ��%d", a);
//	}
//	else
//	{
//		printf("���ֵΪ��%d", b);
//	}
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	printf("���ֵΪ��%d", max(a, b));
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int arr[] = { 1,2,3,4,5,6 };//6*4=24
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);// ���Կ���sizeof�ǲ����� �������Ǻ�������λ���ֽ�
//	//printf("%d", sizeof int); error ����ȷ
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));    //���������ַ�����
//	return 0;
//}
//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~0;//b���з��ŵ�����
//	// ~��2����λȡ��
//	//00000000000000000000000000000000   ע���λ�Ƿ���λ0��ʾ�� 1��ʾ��
//	//11111111111111111111111111111111    
//	//ԭ�롢���롢����
//	//ԭ�밴λȡ���÷��룬�����1�ò���
//	//11111111111111111111111111111111  ����
//	//11111111111111111111111111111110  ����
//	//10000000000000000000000000000001  ԭ��    �������ڴ��д洢ʱ���洢���Ƕ����Ƶò���
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}
//#define max(x,y) (x>y?x:y)//�궨��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	max(a, b);
//	printf("max=%d\n", max(a, b));
//	return 0;
//}
//int main()  //ָ��
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
struct book
{
	char name[20];
	int  price;
};


int main()
{
	struct book b1 ={ "c����",12 };
	printf("������%s\n", b1.name);
	printf("�۸�Ϊ��%d\n", b1.price);
	struct book* ps = &b1;
	strcpy(b1.name, "java");
	b1.price = 30;
	printf("�޸ĺ������Ϊ��%s\n", ps->name);
	printf("�޸ĺ�ļ۸�Ϊ��%d\n", ps->price);



	return 0;
}