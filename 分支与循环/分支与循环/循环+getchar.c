#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//     }
//	return 0;
//}
//int main()   //密码确认  建议多看两眼
//{
//	char i[20] = {0};
//	char ch = 0;
//	char re = 0;
//	printf("请输入密码：\n");
//	scanf("%s", i);
//	while ((re = getchar() != '\n'))                    //一直接受字符，知道接收到因输入密码敲回车 而出现的‘\n' 
//	{                                                   //这时候输入缓冲区是空的，这样第26行的getchar（）才能停顿
//		;
//	}
//	printf("请确认（Y/N）：");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("确认正确");
//	else
//		printf("确认有误");
//	return 0;
//}
//int main()     错误代码
//{
//	char ch = 0;
//	scanf("%s", ch);
//	while(ch < '0' || ch>'9')
//	{
//		continue;
//	}
//	putchar(ch);
//
//
//	return 0;
//}
//int main()      //打印字符0-9之间的字符
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF-end of file  ->    ctrl+z
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			putchar(ch);
//	}
//	return 0;
//}




