#include<stdio.h>
int main()
{   int days,years,weeks;
	printf("enter no. of days:  ");
	scanf("%d",&days);
	years=days/365;
	days=days%365;
	weeks=days/7;
	days=days%7;
	printf(" no of years: %d \n no of weeks:  %d \n no of days:  %d",years,weeks,days);
    return 0;
}