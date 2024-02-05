Algoritmo PromN_Num
	nt <- 0;
	Escribir '---Bienvenido---' ;// inicializar mi acumulador para evitar agarrar valores inncesarios
	Escribir '¿Cuantos numeros desea ingresar?';
	Leer cn;
	Para i<-1 Hasta cn Con Paso 1 Hacer
		Escribir 'Ingrese su numero: ';
		Leer num;
		nt <- nt+num;
	FinPara // utilizo un acumulador
	prom <- nt/cn;
	Escribir 'El promedio de sus numeros es: ', prom;
FinAlgoritmo
