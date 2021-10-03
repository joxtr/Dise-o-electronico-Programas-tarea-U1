int num;
String texto = "Ingrese el numero: ";
int x=1;
int n = 0;
int fibo = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(n>= 0 && n <= 10){
    
    x = fibo + x;
    fibo = x - fibo;
   // fibo = fibo + x;
   // x=fibo;
    Serial.print("Secuencia de fibonacci: ");
    Serial.print(n);
    Serial.print(" .- ");
    Serial.print(fibo);
    Serial.print("  ");
    Serial.println(x);
    
    //x=x+1;
    n=n+1;
    delay(1000); 
  }


}
