# Semáforo com Sensor de Proximidade - Arduino

Este projeto utiliza um sensor ultrassônico (HC-SR04) e dois LEDs (vermelho e verde) para simular um sistema de semáforo simples.

- 🚗 Quando um objeto (veículo) está a menos de 10 cm: LED vermelho acende.
- ✅ Quando não há objeto próximo: LED verde acende.

## Componentes usados

- 1x Arduino Uno
- 1x Sensor HC-SR04
- 1x LED vermelho
- 1x LED verde
- 2x resistores 220Ω
- Jumpers, protoboard

## Esquema de ligação

- TRIG → Pino 9
- ECHO → Pino 10
- LED vermelho → Pino 3
- LED verde → Pino 4

## Código

Arquivo `semaforo.ino` contém todo o código necessário.

## Imagem do circuito

Incluída como `circuito.png`.
