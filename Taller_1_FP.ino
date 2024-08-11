int boton1 = 17;
int boton2 = 18;
int boton3 = 15;
int boton4 = 16;

int rojo1= 13;
int azul1 = 12;
int verde1 = 11;

int rojo2= 10;
int azul2 = 9;
int verde2 = 8;

int rojo3= 7;
int azul3 = 6;
int verde3 = 5;

int rojo4= 4;
int azul4 = 3;
int verde4 = 2;

int consola = 1;
int led = 14;

int contador = 0;

bool boton1EstadoAnterior = HIGH;
bool boton2EstadoAnterior = HIGH;
bool boton3EstadoAnterior = HIGH;
bool boton4EstadoAnterior = HIGH;
bool boton4PresionadoPrimero = false;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(consola, OUTPUT);
  
  pinMode(rojo1,OUTPUT);
  pinMode(azul1,OUTPUT);
  pinMode(verde1,OUTPUT);
  
  pinMode(rojo2,OUTPUT);
  pinMode(azul2,OUTPUT);
  pinMode(verde2,OUTPUT);
  
  pinMode(rojo3,OUTPUT);
  pinMode(azul3,OUTPUT);
  pinMode(verde3,OUTPUT);
  
  pinMode(rojo4,OUTPUT);
  pinMode(azul4,OUTPUT);
  pinMode(verde4,OUTPUT);
  
  pinMode(boton1, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);
  pinMode(boton3, INPUT_PULLUP);
  pinMode(boton4, INPUT_PULLUP);// Manda 1 cuando no esta pulsado
}

void loop() {
  bool boton1Estado = digitalRead(boton1);
  bool boton2Estado = digitalRead(boton2);
  bool boton3Estado = digitalRead(boton3);
  bool boton4Estado = digitalRead(boton4);

  // Detectar flanco descendente para ambos botones
  if (boton1Estado == LOW && boton1EstadoAnterior == HIGH) {
    contador++;
  }
  if (boton2Estado == LOW && boton2EstadoAnterior == HIGH) {
    contador += 2;
  }
  if (boton3Estado == LOW && boton3EstadoAnterior == HIGH) {
    contador =0;
    boton4PresionadoPrimero = false;
    
    digitalWrite(led, LOW);
    analogWrite(rojo1, 0);
    analogWrite(azul1, 0);
    analogWrite(verde1, 0);
    analogWrite(rojo2, 0);
    analogWrite(azul2, 0);
    analogWrite(verde2, 0);
    analogWrite(rojo3, 0);
    analogWrite(azul3, 0);
    analogWrite(verde3, 0);
    analogWrite(rojo4, 0);
    analogWrite(azul4, 0);
    analogWrite(verde4, 0);    
  }
  if (boton4Estado == LOW && boton4EstadoAnterior == HIGH && contador == 0) {
    boton4PresionadoPrimero = true;
  }
  
  int maxContador = boton4PresionadoPrimero ? 8 : 15;

  if (contador > maxContador) {
      digitalWrite(led, HIGH);  // Enciende el LED si el contador excede el maxContador
  } else {
      digitalWrite(led, LOW);   // Apaga el LED si el contador no excede maxContador
  }
  if (contador > maxContador) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1, 0);
      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2, 0);
      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3, 0);
      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4, 0);
  }


  boton1EstadoAnterior = boton1Estado;
  boton2EstadoAnterior = boton2Estado;
  boton3EstadoAnterior = boton3Estado;
  boton4EstadoAnterior = boton4Estado;
  
  if  (boton4PresionadoPrimero){
    if (contador == 1) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
    if (contador == 2) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4, 0);
    }    
    if (contador == 3) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
    if (contador == 4) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4,0);
    }
    if (contador == 5) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
    if (contador == 6) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4,0);
    }
    if (contador == 7) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4,255);
    }
    if (contador == 8) {
      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4,0);
    }
  }
  else {  
    if (contador == 1) {
      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    } 
    else if (contador == 2) {

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3, 255);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4, 0);
    }
    else if (contador == 3) {

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3, 255);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
    else if (contador == 4) {

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2, 43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4,0);
      analogWrite(azul4, 0);
      analogWrite(verde4, 0);
    }
    else if (contador == 5) {

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2, 43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);

    }
    else if (contador == 6) {

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2, 43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4,0);
    }
    else if (contador == 7) {

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2, 43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
    else if (contador == 8) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4,0);
    }  
    else if (contador == 9) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
    else if (contador == 10) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4, 0);
    }   
    else if (contador == 11) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 0);
      analogWrite(azul2, 0);
      analogWrite(verde2,0); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }   
    else if (contador == 12) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4, 0);
    }
    else if (contador == 13) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,0);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
    else if (contador == 14) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 0);
      analogWrite(azul4, 0);
      analogWrite(verde4,0);
    }

    else if (contador == 15) {

      analogWrite(rojo1, 0);
      analogWrite(azul1, 0);
      analogWrite(verde1,255);

      analogWrite(rojo2, 138);
      analogWrite(azul2, 226);
      analogWrite(verde2,43); 

      analogWrite(rojo3, 0);
      analogWrite(azul3, 0);
      analogWrite(verde3,255);

      analogWrite(rojo4, 138);
      analogWrite(azul4, 226);
      analogWrite(verde4, 43);
    }
  } 
}