
#ifdef MY_LIB
#define MY_LIB

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estados de la maquina
// Motor enciendo o apaga dependiendo de los niveles de agua de la cisterna o tanque

typedef enum{
	espera=0;
	enciende=1;
}estados_t;


typedef struct{
	char NT;			//Nivel actual leido tanque
	char NC;		    //Nivel actual leido cisterna
	char NT_Set;        //Nivel configurado (capacidad max 250 L tanque)    
	char NC_Set;		//Nivel configurado (capacidad max 250 L cisterna)
	char delta_Ncb;		//Nivel leido cisterna (nivel bajo)
	char delta_Nta;		//Nivel leido tanque (nivel alto)
}nivel_agua;


nivel_agua f_inicio (void);
estados_t M_espera (nivel_agua);
estados_t M_enciende (nivel_agua);


char *getkey (char *key);
nivel_agua parseconfig (char *);


char leernivelcisternaNC (void);
char leerniveltanqueNT (void);
char leerniveltanquedeltaNcb (void);
char leernivelcisternadeltaNta (void);

void encendido (nivel_agua nivelagua);

#endif
