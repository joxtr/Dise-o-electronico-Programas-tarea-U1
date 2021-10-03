int num1;
int num2;
int a;
int b;

int respuesta;
int aciertos;
int fallidas;
int resultado;
int estado=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  switch(estado){
    case 0:
    Serial.println("Estamos en el estado " + String(estado));
    estado= 1;
    delay(1000);
    break;
    case 1:
    Serial.println("Estamos en el estado " + String(estado));
    estado=0;
    delay(1000);
    break;
  }
   
  
    
   
}
