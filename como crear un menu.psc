//realizar analisis, dise�o y pseudocodigo para el sigueiente menu:

//menu repaso
//suma 
// multiplica 
//divide 
//ingresa los numeros 
// sale del programa 

// primero se debe ingresar los mumeros, si antes escoje otra opcion
// debe imprimir un mensaje indicando que debe primero escoger la ocpcion4
Algoritmo MenuConOpcion4
    // Declaraci�n de variables
    Definir opcion, numero1, numero2, resultado Como Real
	
    // Men� principal
    Repetir
        Escribir "------ Men� Principal ------"
        Escribir "1. Sumar n�meros"
        Escribir "2. Restar n�meros"
		escribir "3. division de  numeros"
        Escribir "4. Multiplicar dos n�meros"
        Escribir "5. Salir"
        Escribir "----------------------------"
		
        Escribir "Ingrese la opci�n deseada: "
        Leer opcion
		
        Segun opcion
				// Opci�n 1: Sumar dos n�meros
            1:
                Escribir "Ingrese el primer n�mero: "
                Leer numero1
                Escribir "Ingrese el segundo n�mero: "
                Leer numero2
                resultado = numero1 + numero2
                Escribir "La suma es: ", resultado
                Esperar tecla 
				
				// Opci�n 2: Restar dos n�meros
            2:
                Escribir "Ingrese el primer n�mero: "
                Leer numero1
                Escribir "Ingrese el segundo n�mero: "
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
				
				// Opci�n 3: Multiplicar dos n�meros
            4:
                Escribir "Ingrese el primer n�mero: "
                Leer numero1
                Escribir "Ingrese el segundo n�mero: "
                Leer numero2
                resultado = numero1 * numero2
                Escribir "La multiplicaci�n es: ", resultado
                Esperar tecla
				
				
				// Opci�n 4: Salir
				
                Escribir "�Hasta luego!"
                Esperar tecla 
				
				// Otra opci�n no v�lida
            De Otro Modo:
                Escribir "Por favor, seleccione la opci�n 4 para salir."
                Esperar tecla 
        Fin Segun
    Hasta Que opcion = 4
FinAlgoritmo

