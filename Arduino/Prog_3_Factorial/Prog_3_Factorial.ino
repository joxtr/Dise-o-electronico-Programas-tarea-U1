int num;
String texto = "Ingrese el numero: ";
float x;
int n = 10;
int m = 10;
float factorial = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(n>= 1 && n <= 10){
x=n; 
factorial = factorial * x;
Serial.print("El factorial de ");
Serial.print(x);
Serial.print(" es ");
Serial.println(factorial);
n=n-1;
delay(1000); 
  }


}
