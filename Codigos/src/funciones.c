#include <stdio.h>
#include "C:\Users\Jony\Desktop\Trabajo Practico Tanque\cabecera.h"
#include "cabecera.h"


char *getkey (char *key){
	char i=0;
	while(*(key+i)!=' '){
		i++;
	}
	*(key+i)=0;
	return key+i+1;
}
	
nivel_agua parseConfig(char *config.bin){
	FILE *conf;
	char cadena[40], *key, *val;
	char variables[4][20]={"NT","NC","deltaNcb","deltaNta"},i;
	nivel_agua config;
	char flagNT=0,flagNC=0,flagdeltaNcb=0,flagdeltaNta=0;
	
	if((conf=fopen(config.bin,"rt"))==NULL)
	{
		printf("No se encontro el archivo.\n");
		config.NT=-250;
		config.NC=-250;
		config.NT_Set=-250;
		config.NC_Set=-250;
		config.delta_Ncb=-250;
		config.delta_Nta=-250;
		return config;
	}

fgets(cadena,40,conf);
do{
	key=cadena;
	if((*key)!='#' && strlen(key)>=0){
		val=get(key);
		for(i=0;i<4;i++){
			if(!strcmp(key,variables[i])){
				switch(i){
					case 0:
						config.NT=atoi(val);
						flagNT=1;
					break;
					
					case 1:
						config.NC=atoi(val);
						flagNC=1;
					break;
					
					case 2:
						config.deltaNcb=atoi(val);
						flagdeltaNcb=1;
					break;
					
					case 3:
						config.deltaNta=atoi(val);
						flagdeltaNta=1;
					break;	
				}
			}
		} 
	}
fgets(cadena,40,conf);
}while(!feof(conf));

if(flagNT && flagNC && flagdeltaNcb && flagdeltaNta)
	{
		return config;
	}
	else{
		config.NT=-250;
		config.NC=-250;
		config.NT_Set=-250;
		config.NC_Set=-250;
		config.delta_Ncb=-250;
		config.delta_Nta=-250;
		return config;
	}
	
char leernivelcisternaNC (void){
	int nivelNC;
	
	scanf("%d",&nivelc);
	return(char)nivelc;
}

char leerniveltanqueNT (void){
	int nivelNT;
	
	scanf("%d",&nivelt);
	return(char)nivelt;
}

char leerniveltanquedeltaNcb (void){
	int nivelNcb;
	
	scanf("%d",&nivelNcb);
	return(char)nivelNcb;
}

char leernivelcisternadeltaNta (void){
	int nivelNta;
	
	scanf("%d",&nivelNta);
	return(char)nivelNta;
}

void encendido (nivel_agua);
{
	printf("\rLlenando tanque = %d",nivelagua.NT);
}
