
Projeto: Economia de Energia com Sensor Ultrassônico

Este projeto demonstra como a automação pode ajudar na economia de energia, utilizando um sensor ultrassônico para monitorar a proximidade de objetos e controlar a iluminação. Esse sistema acende um LED quando um objeto ou pessoa for detectado a uma distância pré-determinada, simulando uma solução prática para economia de energia, promovendo eficiência energética. Essa tecnologia é aplicada para criar um sistema simples de controle de iluminação, que ajuda evitando o desperdício de energia em ambientes.

	
Materiais utilizados:
1 Arduino Uno
1 Sensor Ultrassônico
1 LED
1 Resistor de 220 Ω
Protoboard
Cabos jumpers

  
Montagem do circuito:
VCC do sensor -> 5V no Arduino
GND do sensor -> GND no Arduino
TRIG do sensor -> Pino digital 13 no Arduino
ECHO do sensor -> Pino digital 12 no Arduino
Pino positivo (anodo) do LED -> Pino digital 7 no Arduino
Pino negativo (catodo) do LED -> Resistor de 220 Ω -> GND


Resultados esperados:
O circuito está programado para acender o LED quando detectar uma aproximação de 30cm para cima, essa distãncia pode ser alterada no código.
O LED acenderá sempre que o sensor detectar um objeto a menos de 30 cm.
Se a distância do objeto for maior que 30 cm, o LED permanecerá apagado.



Link simulação no WOKWI: https://wokwi.com/projects/415208562278247425
Código C++ do circuito: dentro do repositório



integrantes do projeto:
Ana Luiza Santana da Rocha - RM 561194
Marcelo Affonso Fonseca - RM 559790
