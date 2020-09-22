#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Jony\Desktop\Trabajo Practico Tanque\cabecera.h"
#include "cabecera.h"



int main() {
	//nivel_agua config;
	estados_t estado = espera;
	printf("Nivel agua\n\r");
	config = f_inicio();
	printf("Configuracion niveles Obtenidos NT_Set = %d, NC_Set = %d\n",config.NT_Set,config.NC_Set);
			
			
	while(1)
	{
		switch(estado)
		{
			case espera:
				estado = M_espera(config);
				break;
			case enciende:
				estado = M_enciende(config);
				break;
		}
	}
	return 0;
}
