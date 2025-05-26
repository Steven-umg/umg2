Algoritmo CalculadoraSimple
		Definir num1, num2, resultado Como Real
		Definir operacion Como Caracter
		
		Escribir "CALCULADORA SIMPLE"
		Escribir "Ingrese el primer número:"
		Leer num1
		
		Escribir "Ingrese el segundo número:"
		Leer num2
		
		Escribir "Seleccione la operación (+, -, *, /):"
		Leer operacion
		
		Segun operacion Hacer
			"+":
				resultado <- num1 + num2
				Escribir "Resultado: ", resultado
			"-":
				resultado <- num1 - num2
				Escribir "Resultado: ", resultado
			"*":
				resultado <- num1 * num2
				Escribir "Resultado: ", resultado
			"/":
				Si num2 <> 0 Entonces
					resultado <- num1 / num2
					Escribir "Resultado: ", resultado
				Sino
					Escribir "Error: No se puede dividir entre cero."
				FinSi
			De Otro Modo:
				Escribir "Operación no válida."
		FinSegun
FinAlgoritmo
