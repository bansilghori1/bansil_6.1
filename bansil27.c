//Q.3 Write a Program to print 1 to N using a do while loop.

#include<stdio.h>
#include<conio.h>

void main(){

int n,a=1;

printf("enter any number :  ");
scanf("%d",&n);

do{
printf("%d\n",a);
a++;
}while(a<=n);


getch();
}

/*
Input:
Enter any number: 7

Output:
1
2
3
4
5
6
7
*/