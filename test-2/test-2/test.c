#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int add(int x, int y)    //�Ժ���
{
	int z = 0;
	z = x + y;
	return z;
} 
//int main()      //scanf��scanf-s����
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;// ����д����sum=add(num1,num2);
//	sum = add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()  //�ַ������˽�
//	{
//		char arr1[] = "abc";// '\0'���ַ���������־ ֵΪ0
//		char arr2[] = { 'a', 'b', 'c' };
//		char arr3[] = { 'a', 'b', 'c' ,0 };//����0 ���߷�'\0'
//		printf("%s\n", arr1);
//		printf("%s\n", arr2);
//		printf("%s\n", arr3);
//		return 0;
//	}

//int main()    //�ַ������˽�
//{
//	char arr1[] = "abc";// '\0'���ַ���������־ ֵΪ0
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c' ,'\0'};//����0 ���߷�'\0'
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	return 0;
//}

//int main() //ת���ַ����˽�
//{
//	printf("c:\test\32\test.c\n");//   \t---ˮƽ�Ʊ��
//	printf("c:\\test\\32\\test.c\n");
//	printf("%c\n", 'a');         //��ӡ�ַ�a
//	printf("%c\n", '\'');         //��ӡ�ַ��� ����
//	printf("%s\n", "abcdef");//��ӡ�ַ���abcdef
//	printf("%s\n", "\"");//��ӡ�ַ�������
//	printf("%s\n", "\"\"");//��ӡ�ַ���������
//	return 0;
//}

//int main()//ת���ַ���ѧϰ
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));  // \32--32�������˽�������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32->10����26->��ΪASCII��ֵ������ַ�
//	printf("%c\n", '\32');
//	return 0;
//}

//int main()    //ѡ��ṹ
//{
//	int select = 0;
//	printf("���������й�\n");
//	printf("�ú�ѧϰ?��0/1��:>\n");
//	scanf("%d", &select);
//	if (select == 1)
//		printf("��nice!");
//	else
//		printf("��̫�а��㣡");
//	return 0;
//}
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//	return 0;
//}


//int main()   //ѭ��
//{
//	int i = 0;
//	printf("�ô���");
//	while (i < 20000)
//	{
//		i++;
//		printf("%d��һ�д���\n", i);
//	}
//	printf("��Ϊ��ţ");
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[0]);
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}