#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//
//	return 0;
//}
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} 
	while (i <= 10);
	return 0;
}