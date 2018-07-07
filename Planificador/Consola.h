#ifndef CONSOLA_H_
#define CONSOLA_H_
#include <string.h>
#include <Funciones/logs.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <Funciones/lista.h>
#include <Funciones/serializacion.h>


bool planificacion_activa;

/* Estructuras */
t_list* ESI_bloqueados;
t_list* ESI_listos;
t_list* ESI_ejecucion;
t_list* ESI_finalizados;
t_list* ESI_clavesBloqueadas;


void consola();
void pausarOContinuar();
void bloquear(char* clave, char* id);
void desbloquear(char* clave);
void listar(char* recurso);
void killProceso(char* id);
void status();
void deadlock();

#endif /* CONSOLA_H_ */
