#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void complemento(char a[],int n);
void interseccion (char a[], char b[] );
void diferencia (char z[], char x[]);
int main(){
	char alfabeto1[]={'1','2','3','4','\0'};
	char alfabeto2[]={'3','4','5','6','\0'};
	printf("el complemento del alfabeto1 es: ");
	complemento(alfabeto1,10);
	printf("\nla intersección de los dos alfabetos es: ");
	interseccion(alfabeto1,alfabeto2);
	printf("\nla diferencia de los dos alfabetos es: ");
	diferencia(alfabeto1,alfabeto2);
	return 0;
}
void complemento(char a[], int n){
    int i = strlen(a); 
    int j=i;
    for(j=i+1;j<=n;j++){
		printf("%d ",j);
	}	
}
////////////////////////interseccion///////////////////////////////
void interseccion (char a[], char b[] ){
	int i,j;
		for(i=0;i<=strlen(a);i++){
		    for(j=0;j<=strlen(b);j++){
			    if(a[i]==b[j]){
				   printf("%c ",a[i]);
			}
		}
	}
}
///////////////////// diferencia/////////////////////////////////
void diferencia(char z[], char x[]) {
    int i,j,encontrado;
    
    for (i=0;i<strlen(z);i++) {
        encontrado = 0;  
        for (j=0;j<strlen(x);j++) {
            if(z[i]==x[j]) {
                encontrado=1;  
            }
        }
        if(!encontrado){
            printf("%c", z[i]);
        }
    }
}
