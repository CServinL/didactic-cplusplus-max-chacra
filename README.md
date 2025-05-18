# didactic-cplusplus-max-chacra
Fundamentos - Algoritmos - C++ - Maximo Chacra

Este es un ejercicio practico, la descripcion del problema es:

    Hay un campo en el cual hay postes clavados en el suelo, en ubicaciones en apariencia arbitrarias. Un colono, al que le gustan particularmente los campos triangulares, desea establecer su chacra allí. Dada su preferencia, y el hecho de que no parece haber otros colonos, decide delimitar su chacra eligiendo los tres postes que hagan máxima su superficie.
    
    El archivo chatri.in contiene la lista de las coordenadas x e y, enteras, no negativas, menores que 1000, de cada poste, separadas por un espacio en blanco, en una línea cada par.
    
    El fin de la lista está indicado por un par –1 –1, que no forma parte de la lista.
    
    Hay a lo sumo 500 postes.
    
    En el archivo chatri.out debe grabar, en cualquier orden, las coordenadas de los tres postes que hacen máxima la superficie de la chacra triangular que determinan esos postes, en una línea cada par de coordenadas.

```
Ejemplo:
Si, chatri.in contiene:

0 4
1 7
3 1
3 8
5 10
5 5
6 2
8 9
10 7
10 3
-1 -1
```

    El archivo chatri.out podría contener:
```
1 7
3 1
10 7
```

Luego de build los binarios me qudan bajo el directorio `build`

ejecuto con:
`build/gen-coords/gen-coords 15 chatri.in`
```
> build/gen-coords/gen-coords 15 ./chatri.in
Archivo generado: ./chatri.in con 15 coordenadas.
```

luego:
`build/max-chacra/max-chacra`

```
> build/max-chacra/max-chacra
Área máxima: 372006
Triángulo: (39,139), (981,913), (38,928)
```
