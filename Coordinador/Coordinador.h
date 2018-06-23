#ifndef COORDINADOR_H_
#define COORDINADOR_H_
#include <string.h>
#include <netdb.h> // Para getaddrinfo
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <commons/config.h>
#include <commons/collections/list.h>
#include <pthread.h>
#include <Funciones/logs.h>
#include <Funciones/configs.h>
#include <Funciones/serializacion.h>
#include <Funciones/lista.h>

#define SEGUNDO 1000000 //El valor de un segundo para la funcion usleep

/* Estructuras */

t_list* instancias;
t_list* lista_ESIs;
t_list* todas_las_claves;

t_list* hilos;

/* Variables globales */
char* server_ip;
int server_puerto;

int socket_planificador;
int socketFD;

char* algoritmo_de_distribucion;
int cantidad_entradas;
int tamanio_entradas;
int retardo_real;
float retardo;

/* Semaforos */
pthread_mutex_t t_set;

/* Funciones */

void sigchld_handler(int s);
void servidor();
void setearValores(t_config * archivoConfig);
void inicializar();
void coordinar(void* socket);
int obtenerProximaInstancia();
void sacar_instancia(int socket);
int proximaInstancia();

void coordinarInstancia(int socket, Paquete paquete, void* datos);
void coordinarESI(int socket, Paquete paquete, void* datos);
void coordinarPlanificador(int socket, Paquete paquete, void* datos);

#endif /* COORDINADOR_H_ */
