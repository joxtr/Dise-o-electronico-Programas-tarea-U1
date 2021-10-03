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
    Serial.println("Bienvenido Usuario seleccione el numero de la accion que usara: ");
    Serial.println("1.- Piedra ");
    Serial.println("2.- Papel ");
    Serial.println("3.- Tijera ");
    eleccion_usuario=Serial.readString().toInt();
    Serial.println("");
    Serial.println("Procesando informacion.....espere");
    delay(1500);
    Serial.println("");
    estado=eleccion_usuario;
    break;
    case 1:
    //Caso piedra
    a=random(1,4); //seleccion de la maquina
    eleccion_maquina=a;
    if(eleccion_maquina==1){
      Serial.println("Usuario selecciono: Piedra");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Piedra");
      delay(100);
      Serial.println("Resultado: Empate");
      delay(1000); 
      estado=0;
    }
    if(eleccion_maquina==2){
      Serial.println("Usuario selecciono: Piedra");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Papel");
      delay(100);
      Serial.println("Resultado: Perdiste");
      delay(1000); 
      estado=0;
    }
    if(eleccion_maquina==3){
      Serial.println("Usuario selecciono: Piedra");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Tijera");
      delay(100);
      Serial.println("Resultado: Ganaste");
      Serial.println(" ");
      delay(1000); 
      estado=0;
    }

    break;
    case 2:
    //Caso papel
    a=random(1,4); //seleccion de la maquina
    eleccion_maquina=a;
    if(eleccion_maquina==1){
      Serial.println("Usuario selecciono: Papel");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Piedra");
      delay(100);
      Serial.println("Resultado: Ganaste");
      delay(1000); 
      estado=0;
    }
    if(eleccion_maquina==2){
      Serial.println("Usuario selecciono: Papel");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Papel");
      delay(100);
      Serial.println("Resultado: Empate");
      delay(1000); 
      estado=0;
    }
    if(eleccion_maquina==3){
      Serial.println("Usuario selecciono: Papel");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Tijera");
      delay(100);
      Serial.println("Resultado: Perdiste");
      Serial.println(" ");
      delay(1000); 
      estado=0;
    }

    break;
    case 3:
    //Caso tijera
    a=random(1,4); //seleccion de la maquina
    eleccion_maquina=a;
    if(eleccion_maquina==1){
      Serial.println("Usuario selecciono: Tijera");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Piedra");
      delay(100);
      Serial.println("Resultado: Perdiste");
      delay(1000); 
      estado=0;
    }
    if(eleccion_maquina==2){
      Serial.println("Usuario selecciono: Tijera");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Papel");
      delay(100);
      Serial.println("Resultado: Ganaste");
      delay(1000); 
      estado=0;
    }
    if(eleccion_maquina==3){
      Serial.println("Usuario selecciono: Tijera");
      delay(100);
      Serial.println(" VS ");
      Serial.println("La maquina selecciono: Tijera");
      delay(100);
      Serial.println("Resultado: Empate");
      Serial.println(" ");
      delay(1000); 
      estado=0;
    }

    break;
   }
}
