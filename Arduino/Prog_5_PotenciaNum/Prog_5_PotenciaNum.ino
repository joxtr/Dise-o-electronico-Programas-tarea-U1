String texto = "Ingrese el numero: ";
String pot = "ingresar potencia";

int num;
int y;

int i;
int res;
int aux;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(texto);
  num=Serial.parseInt();
  delay(1000);
  Serial.println(pot);
  y=Serial.parseInt();
  delay(1000);
  Serial.println("El resultado es: ");
  Serial.println(pow(num,y));
    
    delay(1000); 


}
