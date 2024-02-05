Algoritmo salario_empl
	Escribir '------------------Bienvenido---------------';
	Escribir ' Programa que le ayuda a calcular su salario Semanal';
	Escribir '1) Salario Neto (Sin haber trabajado horas extras ni bonos)';
	Escribir '2) Salario Con horas extras y/o bonos';
	Escribir '3) Salario Sin horas extras pero con bonos';
	Escribir '4) Salida';
	Escribir '¿ Que opcion desea?';
	Leer opc;
	Según opc Hacer
		1:
			Escribir 'Ingrese su tarifa por hora:';
			Leer tar;
			Escribir 'Ingrese la cantidad de horas trabajadas a la semana:';
			Leer horas;
			sal_total <- tar*horas;
			Escribir 'Su salario semanal tiene un valor de: Q. ', sal_total;
		2:
			Escribir 'Ingrese su tarifa por hora:';
			Leer tar;
			Escribir 'Ingrese la cantidad de horas trabajadas a la semana:';
			Leer horas;
			Escribir 'Ingrese la cantidad de horas extras trabajadas';
			Leer horas_ext;
			Escribir '¿Tiene algun bono de trabajador (SI/NO)? ';
			Leer bono;
			Si bono='Si' O bono='si' O bono='sI' O bono='SI' Entonces
				Escribir '¿De cuanto es el valor del bono?';
				Leer cant_bono;
				total_extras <- ((horas+horas_ext)*tar)+cant_bono;
				Escribir 'Su salario Semanal con bonos y horas extras es de: Q. ', total_extras;
			FinSi
			Si bono='No' O bono='NO' O bono='no' O bono='nO' Entonces
				total_extras <- (horas+horas_ext)*tar;
				Escribir 'Su salario Semanal, UNICAMENTE con horas extras es de: Q. ', total_extras;
			FinSi
		3:
			Escribir 'Ingrese su tarifa por hora:';
			Leer tar;
			Escribir 'Ingrese la cantidad de horas trabajadas a la semana:';
			Leer horas;
			Escribir 'Ingrese el valor de su bono';
			Leer bon;
			sal_total <- (tar*horas)+bon;
			Escribir 'Su salario  semanal incluyendo bonos es de: Q. ', sal_total;
		4:
			Escribir '¡Gracias por su preferencia!';
		De Otro Modo:
			Escribir 'Las opciones disponbles son del 1 - 4, intente de nuevo';
	FinSegún
FinAlgoritmo
