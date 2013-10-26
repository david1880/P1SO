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


int tail(int n){
	if(n>0){
		char **lineas;
		int i;
		char *cd;
		int j=0;
		char salir[]="0\n";
		char aux[1024];
		lineas = (char **)malloc(n*sizeof(char *));

		do{
			cd=fgets(aux, 1024, stdin);
			//Añade todas las lineas hasta que se llene
			if(j<n){
				lineas[j] = (char *)malloc(sizeof(char)*1024);
				strcpy(lineas[j],aux);
			//Una vez lleno suprime la primera posicion
			//y añade la nueva linea al final
			}else if (cd!=NULL){
				for(i=0;i<n-1;i++){
					strcpy(lineas[i],lineas[i+1]);
				}
				strcpy(lineas[n-1],aux);
			}
			j++;
		}while(cd!=NULL);
		for(i=0;i<j&&i<n;i++){
			printf("%s",lineas[i]);
			free(lineas[i]);
		}
		free(lineas);
	}else{
		printf("error\n");
	}
	return 0;
}





