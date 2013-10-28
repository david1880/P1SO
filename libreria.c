#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libreria.h"


int head(int n){
	
	int i;
	char *cd;
	char linea[1024];
	if(n>0){
		// Se leen n lineas por la entrada estandar y se 
		// muestran por la salida estandar sin guardarse 
		// memoria.
		for (i = 0; i < n; i++)
		{
			cd=fgets(linea,1024,stdin);
			// Solo se muestra la linea si no es nula,
			// es decir, si no se ha pulsado CTRL+D o
			// se ha llegado al final del fichero
			if (cd==NULL)
			{
				return 0;
			}else{
				printf("%s",linea);
			}
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
		char aux[1024];
		lineas = (char **)malloc(n*sizeof(char *));

		do{
			cd=fgets(aux, 1024, stdin);
			if (cd==NULL)
			{
				break;
			}else {
				//Añade todas las lineas hasta que se llene
				if(j<n){
					lineas[j] = (char *)malloc(sizeof(char)*1024);
					strcpy(lineas[j],aux);
				//Una vez lleno suprime la primera posicion
				//y añade la nueva linea al final
				}else{
					for(i=0;i<n-1;i++){
						strcpy(lineas[i],lineas[i+1]);
					}
					strcpy(lineas[n-1],aux);
				}
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


int longlines(int n){
	if(n>0){
		char **lineas;
		int i;
		char *cd;
		int j=0;
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








int longlines2(int n){
	if(n>0){
		char **lineas;
		int i;
		int j;
		char salir[]="0\n";
		char aux[1024];
		lineas = (char **)malloc(n*sizeof(char *));
	
		for(j=0;;j++){
			printf(">");
			fgets(aux, 1024, stdin);
			if(strcmp(salir,aux)==0){
				break;
			}
			//Si no esta lleno añade y coloca en orden las lineas
			if(j<n){
				lineas[j] = (char *)malloc(sizeof(char)*1024);
				strcpy(lineas[j],aux);
				for(i=j-1;i>0;i--){
					if(strlen(lineas[i])>strlen(lineas[i-1])){
						strcpy(aux,lineas[i-1]);
						strcpy(lineas[i-1],lineas[i]);
						strcpy(lineas[i],aux);
					}else
						break;	
				}
			//si esta lleno comprueba que la nueva linea es mayor q 
			//la ultima, si es asi la añade en la ultima posicion
			//y reordena las lineas
			}else{
				if(strlen(aux)>strlen(lineas[n-1])){
					printf("entra\n");
					strcpy(lineas[n-1],aux);
					for(i=n-1;i>0;i--){
						if(strlen(lineas[i])>strlen(lineas[i-1])){
							strcpy(aux,lineas[i-1]);
							strcpy(lineas[i-1],lineas[i]);
							strcpy(lineas[i],aux);
						}else
							break;
					}
				}
			}
		}
	
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




