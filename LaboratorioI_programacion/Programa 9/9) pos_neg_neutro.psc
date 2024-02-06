Algoritmo pos_neg_neutro
	//Escribir un programa que indique si la suma de dos valores es positiva, negativa o cero.
	Escribir "Bienvenido a nuestra calculadora";
	Escribir "Ingrese su primer valor";
	leer a;
	Escribir "Ingrese su segundo valor";
	leer b;
	sum=a+b;
	si sum==0 Entonces
		Escribir "La suma de sus valores es: ", sum, " (NEUTRA)";
	FinSi
	si sum >0 Entonces
		Escribir "La suma de sus valores es POSITIVA: ", sum;
	FinSi
	si sum <0 Entonces
		Escribir "La suma de sus valores es NEGATIVA: ", sum;
	FinSi

FinAlgoritmo
