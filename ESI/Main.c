#include "ESI.h"


int main(int argc, char ** argv) {

	char* instancia_log_ruta = strdup("/home/utnso/Proyectos/tp-2018-1c-PC-citos/ESI/ESI.log");
	crearLogger(instancia_log_ruta, "ESI", 0);
	char* instancia_config_ruta = strdup("/home/utnso/Proyectos/tp-2018-1c-PC-citos/ESI/ESI.cfg");
	leerConfig(instancia_config_ruta,logger);
	//atenderCoordinador();
	//atenderPlanificador();
	//parsear();
	char* a=malloc(3);
	strcpy(a,"001");
	printf("%s\n",incrementarID(a));

	return EXIT_SUCCESS;
}
