//realizar analisis, diseño y pseudocodigo para el sigueiente menu:

//menu repaso
//suma 
// multiplica 
//divide 
//ingresa los numeros 
// sale del programa 

// primero se debe ingresar los mumeros, si antes escoje otra opcion
// debe imprimir un mensaje indicando que debe primero escoger la ocpcion4
Algoritmo MenuConOpcion4
    // Declaración de variables
    Definir opcion, numero1, numero2, resultado Como Real
	
    // Menú principal
    Repetir
        Escribir "------ Menú Principal ------"
        Escribir "1. Sumar números"
        Escribir "2. Restar números"
		escribir "3. division de  numeros"
        Escribir "4. Multiplicar dos números"
        Escribir "5. Salir"
        Escribir "----------------------------"
		
        Escribir "Ingrese la opción deseada: "
        Leer opcion
		
        Segun opcion
				// Opción 1: Sumar dos números
            1:
                Escribir "Ingrese el primer número: "
                Leer numero1
                Escribir "Ingrese el segundo número: "
                Leer numero2
                resultado = numero1 + numero2
                Escribir "La suma es: ", resultado
                Esperar tecla 
				
				// Opción 2: Restar dos números
            2:
                Escribir "Ingrese el primer número: "
                Leer numero1
                Escribir "Ingrese el segundo número: "
                Leer numero2
                resultado = numero1 - numero2
                Escribir "La resta es: ", resultado
                Esperar tecla
				
				//opcion 4: diviidir dos numeros
			3:
				Escribir "ingrise el primer numero:"
				leer numero1
				escribir "ingrese el segundo numero"
				leer numero2
				resultado =numero1 - numero2
				Escribir "la division es: " , resultado
				Esperar Tecla
				
				// Opción 3: Multiplicar dos números
            4:
                Escribir "Ingrese el primer número: "
                Leer numero1
                Escribir "Ingrese el segundo número: "
                Leer numero2
                resultado = numero1 * numero2
                Escribir "La multiplicación es: ", resultado
                Esperar tecla
				
				
				// Opción 4: Salir
				
                Escribir "¡Hasta luego!"
                Esperar tecla 
				
				// Otra opción no válida
            De Otro Modo:
                Escribir "Por favor, seleccione la opción 4 para salir."
                Esperar tecla 
        Fin Segun
    Hasta Que opcion = 4
FinAlgoritmo

