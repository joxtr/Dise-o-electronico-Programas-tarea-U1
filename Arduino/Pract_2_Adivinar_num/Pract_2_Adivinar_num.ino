int eleccion_usuario;
int eleccion_maquina;

int a;
int estado;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
   switch(estado){
    case 0:
    Serial.println("");
    Serial.println("Bienvenido Usuario ingrese un numero del 1 al 5 que crea que tiene el programa ");
    Serial.println("Ingrese el numero: ");
    eleccion_usuario=Serial.readString().toInt();
    Serial.println("");
    Serial.println("Procesando informacion.....espere");
    delay(2500);
    Serial.println("");
    estado=1;
    break;
    case 1:
    a=random(1,5); //generacion del numero
    eleccion_maquina=a;
    if(eleccion_maquina==eleccion_usuario){
      Serial.println("Usuario selecciono el numero: "+String(eleccion_usuario));
      delay(100);
      Serial.println(" ");
      Serial.println("La maquina selecciono el numero: " +String(eleccion_maquina));
      delay(100);
      Serial.println("Ganaste adivinaste el numero");
      delay(1000); 
      estado=0;
    }else{
     Serial.println("Usuario selecciono el numero: "+String(eleccion_usuario));
      delay(100);
      Serial.println(" ");
      Serial.println("La maquina selecciono el numero: " +String(eleccion_maquina));
      delay(100);
      Serial.println("Perdiste no adivinaste el numero :c");
      delay(1000); 
      estado=0; 
    }

    break;
   }
}
