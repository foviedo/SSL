Paso 2: gcc hello2.c -E >hello2.i  
Generó un archivo .i, por lo visto el #include se convirtió en muchas referencias a las funciones de la biblioteca estándar. Por otro lado, el comentario se convirtió en un espacio  
Paso 4: Lo primero que pide es la cadena de control, en forma de array de chars, allí se pondrá qué es lo que va a haber de argumentos y cómo manipularlos para imprimilos, los "..." indican que no está definida la cantidad de argumentos  
Paso 5: Por lo visto, no hace referencia a ninguna función, el prototipo desaparece también  
Paso 6: gcc hello3.c -S  
Me da error porque prontf no está declarada, también porque falta "}". Generó un archivo .s que dentro sólo contiene 	.file	"hello3.c"  
Paso 7: gcc hello4.c -S  
En efecto, esta vez se genera  
Paso 8: Se genera un código assembler, hay movimientos de stack (con ESP y EBP) y calls a main y printf  
Paso 9: gcc hello4.s -c  Se crea el .o, si lo abro es ilegible porque ya está ensamblado  
Paso 10: gcc hello5.c -LC:\MinGW\include\stdio.h  
Linkea bien, cuando ejecuta, aparece un número cualquiera, probablemente remanente de memoria
Paso 11: $ gcc hello5.c -LC:\MinGW\include\stdio.h  
Funciona perfecto, imprime con 42 y linkea, no estoy seguro de dónde tenía que estar el problema para tener que hacer un hello.6
Paso 14: gcc hello7.c  
De hecho no funciona, me pido que incluya stdio o una declaración de printf, en teoría debería linkear por defecto