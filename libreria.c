#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libreria.h"


int head(int N){
	
	char linea[1024];
	
	
	if(N>0){
		fgets(linea,1024,stdin);
		printf("%s",linea);
	
		return 0;
	}else{
		return 1;
	}
}




