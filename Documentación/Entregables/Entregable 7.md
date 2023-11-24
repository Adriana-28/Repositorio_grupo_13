# Séptimo entregable

## Código del proyecto

<img height="400px;" src="https://github.com/Adriana-28/Repositorio_grupo_13/blob/main/Im%C3%A1genes/Captura%20de%20pantalla%202023-11-10%20073234.png?raw=true">

**- Descripción del código:**

Se demuestra un funcionamiento óptimo del código Arduino. Inicia mediante la instalación de la librería Servo y la creación de variables globales [THRESHOLD,EMG_PIN,SERVO_PIN,SERPO_PIN2]. Luego de la activación del comando serial, conectamos los dos servomotores con sus respectivos pines analogicos, y mediante la función analogRead obtenemos los valores de las señales musculares detectadas por el sensor EMG. Finalmente, mediante una estructura condicional y la magnitud del valor obtenido ejecutamos el movimiento mediante los servomotores sea 180° cuando se ejerce presión y 0° cuando el músculo se encuentra relajado, obteniendo al mismo tiempo la lectura de la señal. 

## Lista de módulos identificados

**Lista de componentes presentes en el funcionamiento del código:**

- Módulo del Sensor EMG:
  
En este caso, este dispositivo cumple la función de monitorear las señales eléctricas de origen muscular, cumple el proceso de amplificar y filtrar para luego ser receptado por algún procesador [Arduino]. Esto se lleva a cabo mediante la lectura del valor analogica de la señal correspondiente al sensor EMG, esto apoyado de los electrodos, el cual al obtener un valor brindaría la acción necesaria para desencadenar el funcionamiento del servomotor y la lectura del EMG, dentro de ciertos parámetros que dependen netamente de la fuerza ejercida por el usuario.

- Módulo de los Servomotores:
  
Identificamos este dispositivo como una alternativa de mecanismo de movimiento, siendo más específicos, de rotación en un rango predeterminado, usualmente entre los 0-180 grados los cuales son utilizados en aplicaciones que requieran precisión y control. La biblioteca Servo nos brinda mayor facilidad mediante la implementación  de señales PWM [Modulación por ancho de pulso], y en nuestro caso dependiente de la señal recibida por el módulo anteriormente mencionado, afectará el rango del movimiento deseado. En este caso al mantener el músculo relajado el servomotor rotara en una posición equivalente a 0 grados y en caso detecte algún esfuerzo muscular generado por el usuario, el servomotor inmediatamente modificara su rango de posición a 180 grados aproximadamente.


## Funcionamiento del circuito con sensor EMG

[**Video del funcionamiento del circuito**](https://drive.google.com/drive/folders/12zblGr60froh0Lr7Ek2Yj1X8CRKrDT_y?usp=drive_link)

Descripción: Se muestra un correcto funcionamiento del circuito. Se utiliza una hoja de papel para la simulación de una superficie y verificar que esta se doble con la programación del circuito. El código corre en el arduino y el sensor EMG detecta las señales y adicionalmente las filtra. Luego, el arduino procesa los datos y envía la señal para que los servomotores giren acorde a lo indicado en el código. 

## Pruebas de prototipo

Debido a las características de nuestro producto, hemos decidido hacer pruebas múltiples con 3 tipos de elastómeros que varían en flexibilidad; sin embargo, todos son del mismo color y están hechos de TPU:

Elastómeros a utilizar:

- Elastómero 1: 2 líneas de pared, no tiene infill porque con esas líneas cubre todo debido a las dimensiones pequeñas de la pieza. Poco flexible. 

- Elastómero 2: 1 línea de pared y 0% de infill. Bastante flexible.

- Elastómero 3: 1 línea de pared y 15% de infill. Flexibilidad intermedia.

  [Vídeo de las pruebas de prototipo](https://drive.google.com/drive/folders/12zblGr60froh0Lr7Ek2Yj1X8CRKrDT_y?usp=drive_link)

|Tipo de elastómero| Resultado |
| :--: | :---: |
|Elastómero 1| Se requiere mucha fuerza para deformarlo y movilizar la prótesis. No se aprecia el movimiento de la falange distal. |
|Elastómero 2 |Se requiere fuerza media para la deformación, se muestra movimiento de la falange distal. El elastómero regresa a su posición original de manera suave. |
| Elastómero 3 | La falange distal presenta un movimiento completo, se muestra una mejor flexibilidad de la prótesis. El elastómero regresa a su posición original de manera rápida.|  



## Prueba con el 95% de las partes

[Vídeo del prototipo 95%](https://drive.google.com/drive/folders/12zblGr60froh0Lr7Ek2Yj1X8CRKrDT_y?usp=drive_link)

- Descripción: El circuito tracciona con las señales mioeléctricas enviadas y el hilo se tensa por los servomotores. Con ello se contrae el elastómero y se estiran los resortes, para que al final de la acción regresen a su forma original. Este video ha sido hecho con el elastómero N, los elegido para el prototipo final. 


## Retos y limitaciones

### Circuito:

**Retos durante la prueba de prototipado:**

 | Reto | Solución |
 | :--: | :--: |
  |Compactar el circuito lo más pequeño posible | Utilizar piezas pequeñas para que no sea pesado el circuito |

  **Limitaciones durante la prueba de prototipado:**

| Limitaciones | Solución |
 | :--: | :--: |
| Se tiene que trabajar con una cantidad de espacio pequeña debido a las dimensiones del brazo humano promedio  | Minimizar en el desorden del circuito, teniendo un diseño compacto para el espacio a utilizar |
| Los componentes son de baja calidad y no siempre tienen precisión | Al tener un buen circuito se tratara que los componentes trabajen de una correcta forma |


### Software

**Retos durante la prueba de prototipado:**


 | Reto | Solución |
  | :--: | :--: |
  | Lograr una mejor filtración de las señales musculares |Añadir un código extra para mejorar la filtración de señal.  |
| El electrodo no detecta las señales del músculo. | Utilizar nuevos electrodos de manera constante y/o buscar electrodos más eficaces. |

  **Limitaciones durante la prueba de prototipado:**
  
| Limitaciones | Solución |
 | :--: | :--: |
|El Arduino nano posee defectos de fábrica que aparecen cada cierto tiempo. | Anotar las descripciones de error e intercambiar cables o drivers de acuerdo al problema. En última instancia, comprar un nuevo Arduino nano. |
|Las señales musculares siempre tienen interferencias. | Mejorar la filtración de las señales musculares en el Arduino. |


### Manufactura digital

**Retos durante la prueba de prototipado:**

 | Reto | Solución |
  | :--: | :--: |
  | La impresión no presente ningún desperfecto por parte de la impresora | Tener parámetros fijos para una correcta impresión |
| Eliminar los soportes de manera adecuada | Tener una buena colocación de soportes en la impresión para evitar daños en la estructura de la pieza |


  **Limitaciones durante la prueba de prototipado:**

| Limitaciones | Solución |
 | :--: | :--: |
| Resistencia y durabilidad de las impresiones debido al material | Tener un buen material de impresión |
| Los detalles pequeños de las piezas pueden no aparecer debido a los límites de las impresoras 3D | Cuidar esos detalles de la impresión con un buen parámetro para evitar daños.|
| Es posible que ciertas medidas planteadas en el modelado no lleguen a tener la misma medida en la vida real por un margen de error pequeño | Tratar de calibrar correctamente la impresora para evitar mucho margen de error |



