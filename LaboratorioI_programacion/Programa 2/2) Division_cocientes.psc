Algoritmo Division_cocientes
	Escribir '---Bienvenido---';
	Escribir 'Ingrese su primer número (Dividendo)';
	Leer a;
	Escribir 'Ingrese su segundo numero (Divisor)';
	Leer b;
	Mientras b==0 Hacer
		Escribir 'ERROR, recuerde que no se puede dividir entre 0, ingrese otro número:';
		Leer b;
	FinMientras
	cociente <- a/b;
	residuo <- a MOD b;
	Escribir 'El Cociente de ', a, ' / ', b, ' es = ', cociente; // el residuo se calcula con el operador de asignacion de modulo ( MOD )
	Escribir 'El residuo de ', a, ' / ', b, ' es = ', residuo;
FinAlgoritmo
