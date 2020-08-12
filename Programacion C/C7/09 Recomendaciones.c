/* Recomendaciones:

Cuando un programa alterna la lectura de cadenas con blancos y valores escalares, la solucion consiste en:

- Si se va a leer una cadena usar gets.

- Si se va a leer un valor escalar, proceder en dos pasos:

1. Leer una linea completa con gets (usar una variable auxiliar).

2. Extraer los valores escalares que se deseaba leer con ayuda de la funcion sscanf.

La funcion sscanf es similar a scanf pero no obtiene informacion leyendola del teclado, sino que la
extrae de una cadena
