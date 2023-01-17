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
//		printf("最大值为：%d", a);
//	}
//	else
//	{
//		printf("最大值为：%d", b);
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
//	printf("最大值为：%d", max(a, b));
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int arr[] = { 1,2,3,4,5,6 };//6*4=24
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);// 可以看出sizeof是操作符 ，而不是函数，单位是字节
//	//printf("%d", sizeof int); error 不正确
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));    //求数组中字符个数
//	return 0;
//}
//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~0;//b是有符号的整型
//	// ~按2进制位取反
//	//00000000000000000000000000000000   注最高位是符号位0表示正 1表示负
//	//11111111111111111111111111111111    
//	//原码、反码、补码
//	//原码按位取反得反码，反码加1得补码
//	//11111111111111111111111111111111  补码
//	//11111111111111111111111111111110  反码
//	//10000000000000000000000000000001  原码    负数在内存中存储时，存储得是二进制得补码
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}
//#define max(x,y) (x>y?x:y)//宏定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	max(a, b);
//	printf("max=%d\n", max(a, b));
//	return 0;
//}
//int main()  //指针
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
	struct book b1 ={ "c语言",12 };
	printf("书名：%s\n", b1.name);
	printf("价格为：%d\n", b1.price);
	struct book* ps = &b1;
	strcpy(b1.name, "java");
	b1.price = 30;
	printf("修改后的名字为：%s\n", ps->name);
	printf("修改后的价格为：%d\n", ps->price);



	return 0;
}