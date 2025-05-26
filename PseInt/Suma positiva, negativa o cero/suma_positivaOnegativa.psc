Algoritmo suma_positivaOnegativa
	Definir A, B, suma Como Real
	Escribir 'Ingrese el valor A:'
	Leer A
	Escribir 'Ingrese el valor B:'
	Leer B
	suma <- A+B
	Si suma>0 Entonces
		Escribir 'La suma es positiva'
	SiNo
		Si suma<0 Entonces
			Escribir 'La suma es negativa'
		SiNo
			Escribir 'La suma es cero'
		FinSi
	FinSi
FinAlgoritmo
