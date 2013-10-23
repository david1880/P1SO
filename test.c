#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libreria.h"


int main(int argc, char *argv[]){
	/*
	char a=*(argv[1]+1);
	printf("%d\n", argc);
	printf("%s\n", argv[1]);
	printf("%c\n", a);
*/
	if (argc==1)
	{
		printf("Uso\n");
	}else if (argc==3)
	{
		if (*(argv[1]+1)=='h'){
			head(atoi(argv[2]));
		}
	}






	
	
	return 0;
	
}
