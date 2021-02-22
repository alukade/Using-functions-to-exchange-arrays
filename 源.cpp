#include<stdio.h>

void get_array(int a[10]);

void get_array(int a[10])
{
	int i;
	a[5] = 520;
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i;

	get_array(a);//也是获取第一个元素的地址，即第6个元素（a【5】）是520

	printf("在main函数里再打印一次...\n");

    for(i = 0; i < 10; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	
	

	return 0;
}
/*只是将数组第一个元素的地址传递，而不是将整个数组传递*/