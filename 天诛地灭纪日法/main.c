#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "diediedie.h"

#define standard 16;

char* heaven[7] = { "һ", "��", "��", "��", "��", "��", "��" };
char* earth[8] = { "��","»","��","��","��","��","��","˳" };

int main(void)
{
	int date;
	printf("���������ڣ�");
	scanf("%d", &date);
	int i, j, delta;
	delta = numofdate(date) - standard + 1;
	i = delta % 7;
	j = delta % 8;
	printf("%d����%s%s��", date, heaven[i], earth[j]);
	return 0;
}