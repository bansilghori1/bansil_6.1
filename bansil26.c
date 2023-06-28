//Q.2 write a program to find a number from n to 1 using while loop.

#include<stdio.h>
#include<conio.h>

void main() {

int a,n;
a=1;

printf("enter any number :   ");
scanf("%d",&n);

while(n>=a){
printf("%d\n",n);
n=n-1;
}


getch();
}
/*
inpute: 10 

Output:
10
9
8
7
6
5
4
3
2
1
*/