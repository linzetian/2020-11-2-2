//实现一个函数，打印乘法口诀，口诀表的行数和列数自己指定，输入9，输出9x9的口诀表
//输入12，输出12x12的口诀表
#include<stdio.h>
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%-2dx%-2d=%-3d ",i,j,i*j);
		}
		printf("\n");
	}

}
int main()
{
	int n = 0;
	printf("请输入n：");
	scanf("%d",&n);
	print_table(n);
}