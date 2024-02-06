Algoritmo par_impar
	//Escribir un programa que indique mi un número es par o impar.
	Escribir "------Bienvenido-----";
	Escribir"Ingrese el numero que desea saber si es par/impar";
	leer n;
	p=n%2;
	si p==0 Entonces
		Escribir "El numero: ", n " es par";
	FinSi
	si p<>0 Entonces
		Escribir "El numero:", n " es impar";
	FinSi

FinAlgoritmo
