#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int add(int x, int y)    //自函数
{
	int z = 0;
	z = x + y;
	return z;
} 
//int main()      //scanf和scanf-s区别
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;// 函数写法：sum=add(num1,num2);
//	sum = add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()  //字符串的了解
//	{
//		char arr1[] = "abc";// '\0'是字符串结束标志 值为0
//		char arr2[] = { 'a', 'b', 'c' };
//		char arr3[] = { 'a', 'b', 'c' ,0 };//最后放0 或者放'\0'
//		printf("%s\n", arr1);
//		printf("%s\n", arr2);
//		printf("%s\n", arr3);
//		return 0;
//	}

//int main()    //字符串的了解
//{
//	char arr1[] = "abc";// '\0'是字符串结束标志 值为0
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c' ,'\0'};//最后放0 或者放'\0'
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	return 0;
//}

//int main() //转义字符的了解
//{
//	printf("c:\test\32\test.c\n");//   \t---水平制表符
//	printf("c:\\test\\32\\test.c\n");
//	printf("%c\n", 'a');         //打印字符a
//	printf("%c\n", '\'');         //打印字符‘ ’’
//	printf("%s\n", "abcdef");//打印字符串abcdef
//	printf("%s\n", "\"");//打印字符‘”’
//	printf("%s\n", "\"\"");//打印字符‘“”’
//	return 0;
//}

//int main()//转义字符得学习
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));  // \32--32是两个八进制数字
//	//32作为8进制代表得那个十进制数字，作为ASCII码值所对应得字符
//	//32->10进制26->作为ASCII码值代表的字符
//	printf("%c\n", '\32');
//	return 0;
//}

//int main()    //选择结构
//{
//	int select = 0;
//	printf("建设美丽中国\n");
//	printf("好好学习?（0/1）:>\n");
//	scanf("%d", &select);
//	if (select == 1)
//		printf("真nice!");
//	else
//		printf("不太行啊你！");
//	return 0;
//}
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}


//int main()   //循环
//{
//	int i = 0;
//	printf("敲代码");
//	while (i < 20000)
//	{
//		i++;
//		printf("%d敲一行代码\n", i);
//	}
//	printf("成为大牛");
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