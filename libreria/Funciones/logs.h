#ifndef LOGS_H_
#define LOGS_H_
#include <stdlib.h>
#include <commons/log.h>


t_log * logger;
t_log * loggerOperacionesCoordinador;

void crearLogger(char* logPath,  char * logMemoNombreArch, bool consolaActiva);


#endif /* LOGS_H_ */
