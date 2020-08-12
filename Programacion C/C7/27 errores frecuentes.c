// Errores frecuentes

// Un caracter no es una cadena. Un error frecuente es intentar añadir un caracter a una cadena con
// sttrcat o asignarselo como unico caracter con strcpy.

//char linea[10] = "cadena";
//char caracter = 's'; strcat(linea, caracter); MAL!!
// strcpy(linea, 'x'); MAL!!

// Recordar: los datos de strcat y strcpy tienen que ser cadenas. No pueden ser caracteres.
