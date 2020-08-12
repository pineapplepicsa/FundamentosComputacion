/*	Funciones utiles para manejar caracteres:

La libreria string.h y ctype.h contienen funciones que permiten trabajar con cadenas.

- isalnum(caracter): devuelve un entero cualquiera distinto de cero si el caracter es una letra o digito
  y 0 en caso contrario.
- isalpha(caracter): devuelve verdadero si caracter es una letra, y falso en caso contrario.
- isblank(caracter): devuelve verdadero si caracter es un espacio en blanco o un tabulador.
- isdigit(caracter): devuelve verdadero si caracter es un digito y falso en caso contrario.
- isspace(caracter): devuelve verdadero si caracter es un espacio en blanco, un salto de linea, un retorno
  de carro, un tabulador, etc., y falso en caso contrario.
- islower(caracter): devuelve verdadero si caracter es una letra minuscula, y falso en caso contrario.
- isupper(caracter): devuelve cierto si caracter es una letra mayuscula, y falso en caso contrario.
- toupper(caracter): devuelve la mayuscula asociada a caracter, si la tiene; si no, devuelve el mismo
  caracter.
- tolower(caracter): devuelve la minuscula asociada a caracter, si la tiene; si no, devuelve el mismo
  caracter.
