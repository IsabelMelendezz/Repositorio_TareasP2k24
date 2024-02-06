Algoritmo Calculadora
	Escribir "------------Bienvenido-------------";
	Escribir"Le presentamos nuestras opciones";
	Escribir "1) Sumar";
	Escribir "2) Restar";
	Escribir "3) Multiplicar";
	Escribir "4) Dividir";
	continuar=1;
	Mientras continuar<>0 Hacer
		escribir "¿Que opcion desea ejecutar?";
		leer opc;
		Segun opc Hacer
			1:
				Escribir "Ingrese su primer valor";
				leer a;
				Escribir "Ingrese su segundo valor";
				leer b;
				resultado<-a+b;
				escribir "El resultado de:", a, " + ", b " es: ", resultado;
			2:
				Escribir "Ingrese su primer valor";
				leer a;
				Escribir "Ingrese su segundo valor";
				leer b;
				resultado<-a-b;
				escribir "El resultado de:", a, " - ", b " es: ", resultado;
			3:
				Escribir "Ingrese su primer valor";
				leer a;
				Escribir "Ingrese su segundo valor";
				leer b;
				resultado<-a*b;
				escribir "El resultado de:", a, " * ", b " es: ", resultado;
			4: 
				Escribir "Ingrese su primer valor";
				leer a;
				Escribir "Ingrese su segundo valor";
				leer b;
				
				Mientras b=0 Hacer
				Escribir  "Error, no se puede dividir por 0 un numero, ingrese otro:";
				leer b;
				Fin Mientras

				resultado<-a/b;
				escribir "El resultado de:", a, " / ", b " es: ", resultado;
				
			De Otro Modo:
				Escribir "Error, opcion fuera de rango intente de nuevo";
		Fin Segun
		escribir "¿Desea continuar en nuestra calculadora? 1=SI | 0=NO";
		leer continuar;
		si continuar==1 Entonces
			Borrar Pantalla;
			Escribir "----------Bienvenido------------";
			Escribir"Le presentamos nuestras opciones";
			Escribir "1) Sumar";
			Escribir "2) Restar";
			Escribir "3) Multiplicar";
			Escribir "4) Dividir";
		FinSi
		si continuar==0 Entonces
			Escribir "Gracias por preferirnos";
		FinSi
	Fin Mientras
FinAlgoritmo
