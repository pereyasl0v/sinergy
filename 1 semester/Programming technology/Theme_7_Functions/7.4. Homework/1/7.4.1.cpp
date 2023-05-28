#include <iostream>
#include <stdio.h>
#include <conio.h>


void foo(char str[],char a){
	
	int n;
	

	
	str[0]=a;
	n=strlen(str);
	str[n-1]=a;
	puts(str);
}

main(){
	
	char str[100], a;

	printf("Enter string\t");
	gets(str);
	printf("Enter sumbol\t");
	scanf("%c", &a);
	
	foo(str ,a);
	
}
