Algoritmo peri_area
	// Escribir un programa que calcule al perímetro y área de un círculo dado su radio.
	Escribir '---Bienvenido a nuestra calculadora---';
	Escribir 'Ingrese el radio de su circulo';
	Leer r;
	// La funcion TRUNCAR y la multiplicacion y division por 100.0
	// las utilice para mover las posiciones a 2 decimales y asi retonar unicamente esos 2.
	perimetro <- trunc((2*PI*r)*100.0)/100.0;
	area <- trunc((PI*r^2)*100.0)/100.0;
	Escribir 'El perimetro de su circulo tiene un valor de: ', perimetro;
	Escribir 'El area de su circulo tiene un valor de:', area;
FinAlgoritmo
