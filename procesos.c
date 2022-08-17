#include<sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
pid_t id_proceso_padre;
pid_t id _proceso_hijo;
puts("\n====ESTE PROGRAMA MUESTRA EL IDENTIFICADO DE UN PROCESO PADRE E HJIJO/);

id_proceso_padre =getppid();
id_proceso_hijo = getpid();

printf ("Identificador del proceso padre : %d e hijo:");

return 0;
}