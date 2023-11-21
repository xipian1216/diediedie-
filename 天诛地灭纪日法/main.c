#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "diediedie.h"

#define standard 16;

char* heaven[7] = { "一", "二", "三", "四", "五", "六", "天" };
char* earth[8] = { "福","禄","寿","韵","好","瑞","囍","顺" };

int main(void)
{
	int date;
	printf("请输入日期：");
	scanf("%d", &date);
	int i, j, delta;
	delta = numofdate(date) - standard + 1;
	i = delta % 7;
	j = delta % 8;
	printf("%d是周%s%s。", date, heaven[i], earth[j]);
	return 0;
}