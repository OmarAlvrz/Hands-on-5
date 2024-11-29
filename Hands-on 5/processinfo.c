#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   int mypid, myppid;
   printf("Program to know PID and PPID's information\n");

   // Obtener el ID del proceso actual (PID)
   mypid = getpid();

   // Obtener el ID del proceso padre (PPID)
   myppid = getppid();

   printf("My process ID is %d\n", mypid);
   printf("My parent process ID is %d\n", myppid);

   // Ejecutar el comando 'ps -ef' para mostrar todos los procesos en ejecución
   printf("Cross verification of pid's by executing process commands on shell\n");
   system("ps -ef");

   return 0;
}

