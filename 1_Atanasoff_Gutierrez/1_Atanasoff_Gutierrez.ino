// Ejercicio evaluatorio 3er bimestre
/*
  Integrantes
    Nombre: Tomás
    Apellido: Atanasoff
    Curso: 3ro B
    
    Nombre: Facundo
    Apellido: Gutierrez
    Curso: 3ro E
  
Congisgnas
  Conexionado:
    En la protoboard, conectar 4 LEDs para que cada uno pueda ser controlado individualmente. Cada LED deberá tener su respectiva resistencia.
    Se debe conectar tambien, un pulsador que permita recibir información de un usuario.
    Indicar a continuación los pines a los cuales se conectó cada elemento y el valor de resistencias utilizado:
      Pines:
        Boton:10
        LED1: 2
        LED2: 3
        LED3: 4
        LED4: 5
      Valor:
        R_boton: 5.6k Ohms
        R_LEDs:330 Ohms
 */

// Definiendo Pines para los componentes
#define LED_AZUL 2
#define LED_VERDE 3
#define LED_ROJO 4
#define LED_AMARILLO 5
#define BOTON 10

bool botonPresionado; // Booleano para checkear si el boton está presionado

void setup() {
  
  // Seteando modo de los pines
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);

  // Boton es un input
  pinMode(BOTON, INPUT);



  Serial.begin(9600); // Iniciando serial
}

void loop() {
  // Leyendo el estado del boton, negando porque está en pull-up
  botonPresionado = !digitalRead(BOTON);

   // Seteando leds
  digitalWrite(LED_AZUL, botonPresionado);
  digitalWrite(LED_VERDE, botonPresionado);
  digitalWrite(LED_ROJO, botonPresionado);
  digitalWrite(LED_AMARILLO, botonPresionado);
}
