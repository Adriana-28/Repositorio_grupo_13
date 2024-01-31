# Octavo entregable

## Preguntas previas

- ¿Cuánto tiempo debería durar la batería?
  10.99 horas.

- ¿Los objetos de la prótesis no se resbalaran?
No, esto debido a que se ha bañado la punta y articulaciones del dedo protésico en ecoflex, un tipo de silicona flexible.

- ¿Las dimensiones de la prótesis son las adecuadas?
  Si debido a la forma y tamaño que se asemeja al dedo pulgar

- ¿Es lo suficientemente pequeño para que sea portátil?
 No, debido a que el case donde se ubican los componentes de arduino,regulador y protoboard son ligeramente grandes  

- ¿La prótesis es de fácil comprensión para el paciente?
Sí, pues no es complejo colocarse en el brazo del usuario.

- ¿Qué tan cómodo o amigable con la piel es la prótesis para el paciente?
Es amigable debido al material impreso que estamos utilizando, lo cual hace que el paciente se sienta satisfecho
  
- ¿La prótesis llega a resbalarse de la mano?
No, debido a que utilizamos una correa para sujetar la base al muñón

## Tabla de requerimientos

<img src="https://raw.githubusercontent.com/Adriana-28/Repositorio_grupo_13/50a38d02043cdea065adcec917c2e7e13a0d8828/Im%C3%A1genes/Tabla%20de%20verificaci%C3%B3n.png">

<img src="https://raw.githubusercontent.com/Adriana-28/Repositorio_grupo_13/50a38d02043cdea065adcec917c2e7e13a0d8828/Im%C3%A1genes/Tabla%20verificacion%202.png">

## Tabla de verificación del proyecto

| Funcionalidad | Cumplimiento |
| :--: | :---: |
|La prótesis que tiene contacto debe tener silicona médica alrededor del paciente. | No |
|El circuito de la prótesis se debe mantener activo  para el correcto funcionamiento del prototipo| Sí |
|La prótesis debe ser capaz de realizar un movimiento de pinza con ángulos correctos sin ayuda externa|Sí |
|El sensor EMG debe detectar la señal mioeléctrica sin complicación alguna a través de su case| Sí|
|La prótesis debe ser lo suficientemente liviana para que el usuario la use con normalidad |Sí |
|El circuito de la prótesis debe ser capaz de obtener y procesar la información hacia los servomotores de manera correcta. |Sí |
|La prótesis debe ocupar el menor espacio posible y ser portátil| Sí|
|La batería debería durar el tiempo suficiente para que el usuario pueda hacer de manera autónoma sus tareas| Sí|
|La prótesis debe tener una silicona en los dedos para evitar el deslice de objetos.| No |

## Cuantificación del movimiento de la prótesis

### Procedimiento: Videos de pruebas

[**Link de los videos de prueba**](https://drive.google.com/drive/folders/12zblGr60froh0Lr7Ek2Yj1X8CRKrDT_y)

### Tabla datos 

- Elastómero 1: Elastómero menos flexible

- Elastómero 2: Elastómero medio flexible

- Elastómero 3: Elastómero más flexible

- Resorte 1: Diámetro 0.2 cm

- Resorte 2: Diámetro 0.3 cm

𝝰: Ángulo entre falange proximal y distal
𝛃: Ángulo entre base y falange proximal

<img src="https://github.com/Adriana-28/Repositorio_grupo_13/blob/main/Im%C3%A1genes/Captura%20de%20pantalla%202023-11-24%20011259.png?raw=true">

<img src="https://github.com/Adriana-28/Repositorio_grupo_13/blob/main/Im%C3%A1genes/Captura%20de%20pantalla%202023-11-24%20035401.png?raw=true">

<img src="https://github.com/Adriana-28/Repositorio_grupo_13/blob/main/Im%C3%A1genes/Captura%20de%20pantalla%202023-11-24%20035810.png?raw=true">


**Variación (%) = (ángulo final - ángulo inicial) / ángulo inicial * 100%**


<img src="https://github.com/Adriana-28/Repositorio_grupo_13/blob/main/Im%C3%A1genes/Captura%20de%20pantalla%202023-11-24%20035815.png?raw=true">

### Ángulos de movimiento

- Articulación MF: De 0° a 50°
- Articulación IF: De 0° a 80°

### Extensión MF e IF del pulgar

| Músculo | Origen | Inserción |
| :--: | :---: | :--: |
|Extensión MF: Extensor corto propio del pulgar | Radio (superficie posterior) | Pulgar (falange proximal, dorsal)|
|Extensión IF: Extensor largo del pulgar | Cúbito (superficie posterolateral del eje medio), membrana interósea | Pulgar (base de la falange distal)|

> Tabla 1 [1]


<img src="https://github.com/Adriana-28/Repositorio_grupo_13/blob/main/Im%C3%A1genes/Captura%20de%20pantalla%202023-11-24%20041236.png?raw=true">

<img src="https://github.com/Adriana-28/Repositorio_grupo_13/blob/main/Im%C3%A1genes/Captura%20de%20pantalla%202023-11-24%20041244.png?raw=true">


## Pruebas para el manejo de prótesis mioeléctricas y el agarre

Para evaluar el desempeño y las funcionalidades de los dos sistemas consideramos 2 evaluaciones estándar, la prueba de Caja y Bloques (BBT) y la Evaluación de la Capacidad de Control Mioeléctrico (ACMC).
La BBT mide la destreza manual bruta unilateral 45 y se utiliza con una amplia gama de poblaciones (es decir, no es específica para prótesis). El usuario debe mover el número máximo de bloques, uno por uno, de un compartimento a otro en 60 s. Repetimos esta acción 3 veces. Para evaluar funcionalidades avanzadas y habilidades de manipulación, incluimos la prueba ACMC. Es la primera evaluación de resultados diseñada específicamente para prótesis mioeléctricas. El ACMC es una evaluación basada en observaciones que mide la capacidad de una persona para operar una prótesis de mano mioeléctrica cuando realiza actividades de la vida cotidiana. La prueba consta de 22 ítems divididos en 4 subsecciones (Agarrar, Reajustar el agarre, Sostener, Soltar) y puntuados en una escala de calificación de 4 puntos por un observador certificado. [2]


## Conclusiones

Según los datos de los ángulos obtenidos se puede evidenciar que el elastómero medio flexible es el que tiene mejores resultados, pues tiene un valor aceptable de flexión y se asemeja más con la flexión de un dedo pulgar real, el cual posee una flexión de hasta 80°, sin dejar de lado sus propiedades de resistencia.
El resorte con mejores resultados es el resorte 2, obteniendo ángulos bastante cercanos a 40°, el cual sería el ideal.


## Bibliografía

[1]  Hislop HJ, Montgomery J. Pruebas funcionales musculares - 6b* ed. Marban Libros; 2001.

[2]  Capsi-Morales P, Piazza C, Catalano MG, Grioli G, Schiavon L, Fiaschi E, et al. Comparison between rigid and soft poly-articulated prosthetic hands in non-expert myo-electric users shows advantages of soft robotics. Sci Rep [Internet]. 2021;11(1). Disponible en: http://dx.doi.org/10.1038/s41598-021-02562-y



