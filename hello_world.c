#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	
	char string1[20];     
	char string2[20];   
	char string3[20];   
	char string4[20];   
	char string5[20];   

  	printf( "\n Hi Han Wei\n" );  /* Asks for age */
	fgets (string1, 20,stdin);
    printf( "\n I am your computer \n" );
	fgets (string2, 20,stdin);
	printf("\n You are a genius \n");
	fgets (string3, 20,stdin); 
	printf("\n Yes you are the coolest human i know \n");
	fgets (string4, 20,stdin);
	printf("\n Have a good sleep, Goodnight! \n");
	fgets (string5, 20,stdin);
return 0;

}