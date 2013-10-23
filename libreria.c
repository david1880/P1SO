#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libreria.h"


int head(int n){
	
	int i;
	char linea[1024];
	if(n>0){
		for (i = 0; i < n; i++)
		{
			fgets(linea,1024,stdin);
			printf("%s",linea);
		}
		return 0;
	}else{
		return 1;
	}
}

int tail (int n){
	char **lineas;
	int i;
	lineas= (char**) malloc (n*sizeof(char*));

	for (i = 0; i < count; ++i)
	{
		
	}

}




