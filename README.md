
# Projeto: Economia de Energia com Sensor Ultrassônico

Este projeto demonstra como a automação pode ajudar na economia de energia, utilizando um sensor ultrassônico para monitorar a proximidade de objetos e controlar a iluminação. Esse sistema acende um LED quando um objeto ou pessoa for detectado a uma distância pré-determinada, simulando uma solução prática para economia de energia, promovendo eficiência energética. Essa tecnologia é aplicada para criar um sistema simples de controle de iluminação, que ajuda evitando o desperdício de energia em ambientes.
<br>

**Materiais utilizados:** 
<br>
1 Arduino Uno<br>
1 Sensor Ultrassônico<br>
1 LED<br>
1 Resistor de 220 Ω<br>
Protoboard<br>
Cabos jumpers

<br>
  
**Montagem do circuito:**
<br>
VCC do sensor -> 5V no Arduino<br>
GND do sensor -> GND no Arduino<br>
TRIG do sensor -> Pino digital 13 no Arduino<br>
ECHO do sensor -> Pino digital 12 no Arduino<br>
Pino positivo (anodo) do LED -> Pino digital 7 no Arduino<br>
Pino negativo (catodo) do LED -> Resistor de 220 Ω -> GND<br>
<br>


**Resultados esperados:** <br>
O circuito está programado para acender o LED quando detectar uma aproximação de 30cm para cima, essa distãncia pode ser alterada no código.
O LED acenderá sempre que o sensor detectar um objeto a menos de 30 cm.
Se a distância do objeto for maior que 30 cm, o LED permanecerá apagado.

<br>


**Link simulação no WOKWI:** https://wokwi.com/projects/415208562278247425 <br>
**Código C++ do circuito:** dentro do repositório

<br>
<br>


**Integrantes do projeto:** <br>
Ana Luiza Santana da Rocha - RM 561194 <br>
Marcelo Affonso Fonseca - RM 559790
