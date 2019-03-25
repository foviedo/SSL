
#include <stdio.h>
#include <stdlib.h>
char direccion[] = "output.txt";

//fp = fopen("output.txt","w");
int main(void) {
	FILE *fp = fopen(direccion,"w");
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	fprintf(stdout,"hola, mundo\n");
	fprintf (fp,"hola, mundo\n" );

	return EXIT_SUCCESS;
}
