#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char* newCadena(int longitud);
char* unionAlfabetos(char alfabeto1[],char alfabeto2[]);

int main(){
	char alfabeto1[4]={'a','b','c'};
	char alfabeto2[4]={'1','2','3'};
	char* alfabetoUnido=unionAlfabetos(alfabeto1,alfabeto2);
	printf("la union de los dos alfabetos es:%s",alfabetoUnido);
	return 0;
}
char* unionAlfabetos(char alfabeto1[],char alfabeto2[]){
	char* nuevaCadena= newCadena(6);
	strcpy(nuevaCadena, alfabeto1);
	strcat(nuevaCadena, alfabeto2);
	return nuevaCadena;
}
char* newCadena(int longitud) {
    char* cadena=(char*)malloc(sizeof(char)*(longitud+1));
    return cadena;
}
