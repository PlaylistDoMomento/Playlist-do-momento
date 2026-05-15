// Definição dos pinos
const int ledVerde = 4;
const int ledAmarelo = 3;
const int ledVermelho = 2;
const int botao = 5;

void setup() {

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  // Botão usando resistor interno pull-up
  pinMode(botao, INPUT);

  // Estado inicial
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
}

void loop() {

  // Só entra quando apertar
  if (digitalRead(botao) == LOW) {

    // Pequeno debounce
    delay(50);

    // Confirma o clique
    if (digitalRead(botao) == LOW) {

      // Verde OFF
      digitalWrite(ledVerde, LOW);

      // Amarelo ON
      digitalWrite(ledAmarelo, HIGH);
      delay(1000);

      // Amarelo OFF
      digitalWrite(ledAmarelo, LOW);

      // Vermelho ON
      digitalWrite(ledVermelho, HIGH);
      delay(5000);

      // Vermelho OFF
      digitalWrite(ledVermelho, LOW);

      // Verde ON novamente
      digitalWrite(ledVerde, HIGH);

      // Espera soltar o botão
      while (digitalRead(botao) == LOW) {
      }
    }
  }
}
