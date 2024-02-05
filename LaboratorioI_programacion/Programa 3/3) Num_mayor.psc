Algoritmo Num_mayor
	Escribir '---------Bienvenido---------------------';
	Escribir ' Vamos a encontrar, ¿Cuál es el mayor? : ';
	Escribir 'Ingrese su primer número: ';
	Leer a;
	Escribir 'Ingrese su segundo número: ';
	Leer b;
	Si a>b Entonces
		Escribir a, ' es mayor que ', b;
	FinSi
	Si a<b Entonces
		Escribir b, ' es mayor que ', a;
	FinSi
	// para hacerlo mas completo tambien vamos a considerar el caso en que sean iguales 
	Si a=b Entonces
		Escribir '¡Los numeros que ingreso son iguales!';
	FinSi
FinAlgoritmo
