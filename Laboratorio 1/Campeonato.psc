Algoritmo Campeonato
	// Definir las matrices para los datos de los equipos
	Dimensionar Equipo(6,20)
	Dimensionar golesContra(6) // Matriz para almacenar los nombres de los equipos
	Dimensionar golesFavor(6) // Goles en contra por equipo
	Dimensionar partidosGanados(6) // Goles a favor por equipo
	Dimensionar partidosEmpatados(6) // Partidos ganados por equipo
	Dimensionar partidosPerdidos(6) // Partidos empatados por equipo
	Dimensionar matriz(7,6) // Partidos perdidos por equipo
	Definir cantidadDePartidosJugados, Puntos, EquipoGanador, EquipoPerdedor Como Entero // Matriz para mostrar los resultados: 7 filas (estadísticas) y 6 columnas (equipos)
	cantidadDePartidosJugados <- 0
	Puntos <- 0
	EquipoPerdedor <- 0
	EquipoGanador <- 0 
	// Inicializamos las matrices para cada equipo
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		golesFavor[i] <- 0
		golesContra[i] <- 0
		partidosGanados[i] <- 0
		partidosEmpatados[i] <- 0
		partidosPerdidos[i] <- 0
	FinPara
	Escribir 'Mundial de futbol'
	Escribir 'Ingrese el nombre de los 6 equipos a participar'
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Escribir 'Ingrese el nombre del equipo ', i
		Leer Equipo[i,1]
	FinPara
	// Partidos todos contra todos
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Para k<-1 Hasta 6 Con Paso 1 Hacer
			Si (Equipo[i,1]<>Equipo[k,1]) Entonces
				// Generar goles aleatorios para el partido (0 a 10 goles)
				golesFavorEquipoI <- Aleatorio(0,10)
				golesFavorEquipoK <- Aleatorio(0,10)
				// Acumulamos los goles de cada equipo
				golesFavor[i] <- golesFavor[i]+golesFavorEquipoI
				golesContra[i] <- golesContra[i]+golesFavorEquipoK
				golesFavor[k] <- golesFavor[k]+golesFavorEquipoK
				golesContra[k] <- golesContra[k]+golesFavorEquipoI
				// Determinamos quién ganó, empató o perdió
				Si (golesFavorEquipoI>golesFavorEquipoK) Entonces
					partidosGanados[i] <- partidosGanados[i]+1
					Puntos <- puntos + 3 
					partidosPerdidos[k] <- partidosPerdidos[k]+1
				SiNo
					Si (golesFavorEquipoI<golesFavorEquipoK) Entonces
						partidosGanados[k] <- partidosGanados[k]+1
						puntos <- puntos + 3
						partidosPerdidos[i] <- partidosPerdidos[i]+1
					SiNo
						partidosEmpatados[i] <- partidosEmpatados[i]+1
						puntos <- puntos + 1
						partidosEmpatados[k] <- partidosEmpatados[k]+1
					FinSi
				FinSi
				cantidadDePartidosJugados <- cantidadDePartidosJugados+1
			FinSi
		FinPara
	FinPara
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		matriz[1,i]<-partidosGanados[i]+partidosEmpatados[i]+partidosPerdidos[i]
		matriz[2,i]<-partidosGanados[i]
		matriz[3,i]<-partidosEmpatados[i]
		matriz[4,i]<-partidosPerdidos[i]
		matriz[5,i]<-golesFavor[i]
		matriz[6,i]<-golesContra[i]
	FinPara
	Escribir 'Equipo     PJ  PG  PE  PP  GF  GC'
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Escribir Equipo[i  ,  1], ' ', matriz[1,i], ' ', matriz[2,i], ' ', matriz[3,i], ' ', matriz[4,i], ' ', matriz[5,i], ' ', matriz[6,i]
	FinPara
	
	// Mostrar quien gano y quien perdio
	Mostrar 'puntos'
	Mostrar 'El equipo Ganador es: '
	Mostrar 'El equipo que bajo de categoria es: '
FinAlgoritmo
