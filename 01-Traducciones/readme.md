Paso 2: gcc hello2.c -E >hello2.i  
Gener� un archivo .i, por lo visto el #include se convirti� en muchas referencias a las funciones de la biblioteca est�ndar. Por otro lado, el comentario se convirti� en un espacio  
Paso 4: Lo primero que pide es la cadena de control, en forma de array de chars, all� se pondr� qu� es lo que va a haber de argumentos y c�mo manipularlos para imprimilos, los "..." indican que no est� definida la cantidad de argumentos  
Paso 5: Por lo visto, no hace referencia a ninguna funci�n, el prototipo desaparece tambi�n  
Paso 6: gcc hello3.c -S  
Me da error porque prontf no est� declarada, tambi�n porque falta "}". Gener� un archivo .s que dentro s�lo contiene 	.file	"hello3.c"  
Paso 7: gcc hello4.c -S  
En efecto, esta vez se genera  
Paso 8: Se genera un c�digo assembler, hay movimientos de stack (con ESP y EBP) y calls a main y printf  
Paso 9: gcc hello4.s -c  Se crea el .o, si lo abro es ilegible porque ya est� ensamblado  
Paso 10: gcc hello5.c -LC:\MinGW\include\stdio.h  
Linkea bien, cuando ejecuta, aparece un n�mero cualquiera, probablemente remanente de memoria
Paso 11: $ gcc hello5.c -LC:\MinGW\include\stdio.h  
Funciona perfecto, imprime con 42 y linkea, no estoy seguro de d�nde ten�a que estar el problema para tener que hacer un hello.6
Paso 14: gcc hello7.c  
De hecho no funciona, me pido que incluya stdio o una declaraci�n de printf, en teor�a deber�a linkear por defecto