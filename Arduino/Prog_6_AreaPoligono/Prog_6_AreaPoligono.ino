float tam_lado;
int num_lados;
float apotema;

float area;
float perimetro;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Ingrese el tamaño del lado del poligono");
  tam_lado = Serial.parseFloat();
  delay(1000);
  Serial.println("Ingrese el numero de lados del poligono");
  num_lados = Serial.parseInt();
  delay(1000); 
  Serial.println("Ingrese el apotema del poligono");
  apotema = Serial.parseFloat();
  delay(1000);
  perimetro= num_lados*tam_lado;
  area=perimetro*apotema/2;
  Serial.println("El Area del poligono es de: ");
  Serial.println(area);
  Serial.println(" cm2 ");
  Serial.println(" ");
  delay(1000);

  


}
