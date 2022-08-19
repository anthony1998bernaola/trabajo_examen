# incluir  < sys/types.h >
# include  < unistd.h >
# incluir  < stdio.h >
int  principal ()
{
 
   pid_t id_proceso_padre;
   pid_t id_proceso_hijo;
   puts ( " \n ==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO PADRE E HIJO==== \n " );
 
   id_proceso_padre= getppid ();
   id_proceso_hijo= getpid ();
 
   printf ( " Identificador del proceso padre : %d \n " , id_proceso_padre);
   printf ( " Identificador del proceso hijo: %d \n " , id_proceso_hijo);
 
   devolver  0 ;
 
}