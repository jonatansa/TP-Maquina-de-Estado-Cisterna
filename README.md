# TP-MAQUINA-ESTADO

**Memoria Descriptiva**

*Mi sistema representa un control de llenado de tanque de agua mediante una cisterna. El Motor solo enciende (ON) si el NT esta por debajo de TB y si la cisterna esta entre SA y SB, pero si el en NS esta por debajo de SB el Motor estara apagado (OFF).*

>**NS** = Nivel del agua de la cisterna.

>**NT** = Nivel del agua del Tanque.

>**TA** = Nivel alto del tanque.

>**TB** = Nivel bajo del tanque.

>**SA** = Nivel alto de la cisterna.

>**SB** = Nivel bajo de la cisterna


![img](https://github.com/jonatansa/TP-MAQUINA-ESTADO/blob/master/recursos/tanque.png)


>**SET** = el motor siempre estaría conectado a 220v.

>**MOTOR** = el motor va a estar en espera hasta que NS > SB.

>-**TANQUE** = el tanque va a pedir agua si NS > SB , el tanque va a estar en espera hasta que el NT < TB.

>-**CISTERNA** = la cisterna va a dar agua si y solo si el NS esta entre SB y SA.
