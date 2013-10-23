#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libreria.h"


int main(int argc, char *argv[]){
	

	if (argc==1)
	{
		printf("Uso\n");
	}else if (argc==3)
	{
		switch (argv[1]+1){
			case 'h':{
				head(atoi(argv[2]));
			}
		}
	}






	head(2);
	printf("ultima prueba");
	
	return 0;
	
}
