
int num;
int i;

float prom;
int suma;

bool auxiliar;
String texto = "Ingrese un numero: ";
String inicio = "Bienvenido: ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(inicio);
while(Serial.available()==0){
  
}
for(i=0;i<5;i++){
  Serial.println(texto);
  num = Serial.parseInt();
  suma = suma+num;
  prom=suma/5;
  
  delay(25);
}

Serial.println("El promedio de los numeros dados es: "+String(prom));
   
    
}
