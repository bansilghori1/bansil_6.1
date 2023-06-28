// write a program to find number between 1 to n using while loop.

#include<stdio.h>
#include<conio.h>

void main(){

int n,a=1;

printf("enter any number :  ");
scanf("%d",&n);

while(a<=n){
printf("%d\n",a);
a++;
}
getch();
  
} 

/*
inpute: 10

Output:
1
2
3
4
5
6
7
8
9
10
*/