Algoritmo Num_mayor
	Escribir '---------Bienvenido---------------------';
	Escribir ' Vamos a encontrar, �Cu�l es el mayor? : ';
	Escribir 'Ingrese su primer n�mero: ';
	Leer a;
	Escribir 'Ingrese su segundo n�mero: ';
	Leer b;
	Si a>b Entonces
		Escribir a, ' es mayor que ', b;
	FinSi
	Si a<b Entonces
		Escribir b, ' es mayor que ', a;
	FinSi
	// para hacerlo mas completo tambien vamos a considerar el caso en que sean iguales 
	Si a=b Entonces
		Escribir '�Los numeros que ingreso son iguales!';
	FinSi
FinAlgoritmo
