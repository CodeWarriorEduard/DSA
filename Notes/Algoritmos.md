Conjunto de instrucciones utilizadas para resolver un problema específico.

Un problema puede ser resuelto mediante muchos algoritmos. 

Existe una ventaja en conocer varias soluciones a un problema es que las diferentes soluciones pueden ser más eficientes para variaciones específicas del problema. Por ejemplo, ordenar conjuntos pequeños de números un algoritmo de ordenación puede ser mejor y para resolver conjuntos grandes, puede ser mejor otro.

Para el diseño de algoritmos se utiliza un tipo de lenguaje mixto entre el español y un lenguaje de programación universal. Esta mezcla se conoce como pseudocódigo.


### Propiedades de los algoritmos

- Especificación precisa de la entrada.
- Especificación precisa de cada instrucción : No puede haber ambiguedad sobre las acciones que se deban ejecutar en cada momento.
- Exactitud: Se debe calcular la funcipon deseada, convirtiendo cada entrada a la salida correcta. Un algoritmo se espera que resuelva un problema.
- Etapas bien definidas
- Numero finito de pasos
- Debe terminar
- Descripción del resultado.


La forma correcta de medir la eficiencia de un algoritmo se llama "análisis de algoritmos", permite medir la dificultad inherente a un problema.


El programador debería elegir qué algoritmo es más eficiente
La eficiencia es la propiedad mediante el cual un algoritmo debe alcanzar la solución al problema en el tiempo más corto posible y/o utilizando la menor cantidad posible de recursos computacionales.

#### El análisis de algoritmos se centra inicialmente en la ejecución de bucles, debido a que en el caso de las funciones lineales la eficiencia es en función del número de instrucciones que tenga el algoritmo. -> La eficiencia depende más que todo de la velocidad de la máquina.


### Eficiencia en bucles

La eficiencia en general se define con:

```
f(n) = eficiencia 

```

La eficiencia del algoritmo se examina en función del número de parámetros de entrada.


### Bucles lineales

En los algoritmos los bucles son el término dominante  en cuanto a la eficiencia de estos.

¿Cuántas veces se repite el cuerpo del bucle del siguiente código?

```
i = 1
mienras (i<=n){
	// Codigo
	i = i+1
	fin_mientras
}
```

Si n es un entero n = 100, el bucle se repite 100 veces, por lo tanto la eficiencia se da por

```
f(n) = n

```


```
i = 1
mienras (i<=n){
	// Codigo
	i = i+2
	fin_mientras
}
```

Si n es un entero n = 100, la respuesta es 50, debido a que el contador avanza de 2 en 2.

```
f(n) = n/2

```


### ¿Qué pasaría si fuera una multiplicación o división?

```
i = 1
mientras (i < 1000)
	{ código de la aplicación }
	i = i * 2
	fin_mientras

```

```

i = 1000
	mientras (i >= 1)
	{ código aplicación }
	i = i/2
	fin_mientras
```


![[Pasted image 20250221143740.png]]

El número de iteraciones es una función del multiplicador o divisor, por lo tanto

Para el bucle multiplicador 
```
2^n iteraciones < 1000
```

Para el bucle divisor 
```
1000/2^n iteraciones >=1
```

El análisis de los anteriores bucles se puede generalizar de la siguiente forma

```
f(n) = [log2 n]
```



#### Bucle anidado
Total de iteraciones en un bucle anidado se da por

```
iteraciones = iteraciones_externo * iteraciones_interno
```


Existen tres tipos de bucles anidados:

- Lineal logaritmico f(n) = [n log2 n]
- Dependiente cuadrática f(n) = n (n+1)/2
- Cuadrática n^2
- 