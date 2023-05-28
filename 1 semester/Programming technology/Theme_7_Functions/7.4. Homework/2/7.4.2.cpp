#include <iostream>
#include <stdio.h>
#include <conio.h>

void foo(char str[])
{
	int n ,v , z=0	;
	bool fl = 0;
	int c=0;
	 int j=0;
	 

while(fl==0){


	if(str[0]==' '){	
	j=0;

	for(int z=1	;z<100; z++){
		
		
	str[j]=str[z];
		j++;

}
}
else{
if(str[0]!=' '){
puts(str);	
printf("Delete space of begin\n");
fl=1;
}
}
}

v= strlen(str);
n = strlen(str);
fl=0;

while(fl==0){
	

	if(str[n]!=' '){
	
	str[n]='\0';
	puts(str);
	printf("Delete space of end");
		n--;
	fl=1;
	}
}
}


main()
{

	char str[100], a;
	printf("Enter string\n");
	gets(str);
	foo(str);
}
