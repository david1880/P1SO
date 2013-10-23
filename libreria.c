#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libreria.h"


int head(int N){
	
	
	if(N>0){
		for (int i = 0; i < N; i++)
		{
			fgets(linea,1024,stdin);
		printf("%s",linea);
		}
		return 0;
	}else{
		return 1;
	}
}




