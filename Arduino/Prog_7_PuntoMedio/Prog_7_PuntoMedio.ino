int X1;
int X2;

int Y1;
int Y2;

float PMX;
float PMY;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  while(Serial.available()==0){
    
  Serial.println("Ingrese el Punto X1");
  X1 = Serial.parseInt();
  delay(1000);
  Serial.println("Ingrese el Punto Y1");
  Y1 = Serial.parseInt();
  delay(1000); 
  Serial.println("Ingrese el Punto X2");
  X2 = Serial.parseInt();
  delay(1000);
  Serial.println("Ingrese el Punto Y2");
  Y2 = Serial.parseInt();
  delay(1000);
  PMX = (X1 + X2) / 2;
  PMY =  (Y1 + Y2)/ 2;
  Serial.print("El punto medio es: ");
  Serial.print("( " +String(PMX));
  Serial.print(" , " +String(PMY)+" ) ");
    
  }
  
}
