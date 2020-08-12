//float: tipo de retorno
//logaritmo: identificador
//parentesis: parametros formales (o simplemente parametros)

float logaritmo (float x, int b)
{
	float logbase, resultado;//--//------>Declaracion de variables locales
								 //
	logbase = log10(b);			 //
	resultado = log10(x)/logbase;//------>Declaración de variables locales
	return resultado;//----------//------>Sentencia de devolucion de valor
}
