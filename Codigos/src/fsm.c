#include "C:\Users\Jony\Desktop\Trabajo Practico Tanque\cabecera.h"
#include "cabecera.h"

nivel_agua f_inicio(void){
	nivel_agua config;
	config = parseConfig("config.conf");
	return config;
}

estados_t M_espera (nivel_agua config){
	estados_t estado = espera;
	config.NT = leerniveltanqueNT();
	config.delta_Nta = leernivelcisternadeltaNta();
	config.NC = leerniveltanqueNC();
	config.delta_Ncb = leerniveltanquedeltaNcb();
	
	printf("\rNivel de agua en el tanque = %d",config.NT);
	printf("\rNivel de agua agregado al tanque = %d",config.delta_Nta);
	printf("\rNivel de agua en la cisterna= %d",config.NC);
	printf("\rNivel de agua min en la cisterna = %d",config.delta_Ncb);
	
	return(config.NT<config.NT_Set - config.delta_Nta) ? espera : encendido;
}

estados_t M_enciende (nivel_agua){
	estados_t estado = encendido;
	config.NT = leerniveltanqueNT();
	config.delta_Nta = leernivelcisternadeltaNta();
	config.NC = leerniveltanqueNC();
	config.delta_Ncb = leerniveltanquedeltaNcb();
	
	return(config.NT>config.NT_Set + config.delta_Nta) ? encendido : espera;

}

