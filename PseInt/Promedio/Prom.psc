Algoritmo Prom
	Definir N, i Como Entero
	Definir numero, suma, promedio Como Real
	suma <- 0
	Escribir '¿Cuántos números desea promediar?'
	Leer N
	Para i<-1 Hasta N Con Paso 1 Hacer
		Escribir 'Ingrese el número ', i, ':'
		Leer numero
		suma <- suma+numero
	FinPara
	promedio <- suma/N
	Escribir 'El promedio es: ', promedio
FinAlgoritmo
