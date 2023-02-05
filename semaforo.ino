// C++ code
//

/*
  Semáforo Duas Ruas 
  Autor: Vinicius do Prado Carneiro
  R.A.: 322103871
  Data: 26/08/22
  Versão: 1.0
*/
 

// ------- Delay
int	tempo_VM = 3000;
int	tempo_AM = 700;
int	tempo_VD = 5000;

// ------- Status
#define  ON     HIGH
#define  OFF    LOW

// ------- LEDS SEMÁFORO ESQUERDA
#define ledVM1   13
#define ledVD1   12
#define ledAM1   11

// ------- LEDS SEMÁFORO DIREITA
#define ledAM2   10
#define ledVD2   9
#define ledVM2   8


void setup()
{
  
  pinMode(ledVM1, OUTPUT);
  pinMode(ledAM1, OUTPUT);
  pinMode(ledVD1, OUTPUT);
  
  pinMode(ledVM2, OUTPUT);
  pinMode(ledAM2, OUTPUT);
  pinMode(ledVD2, OUTPUT);
}


void loop()
{
  // Vermelho no 1, Verde no 2
  digitalWrite(ledVM1,ON);
  digitalWrite(ledAM1,OFF); 
  digitalWrite(ledVD1,OFF); 
  digitalWrite(ledVM2,OFF);
  digitalWrite(ledVD2, ON);
  delay(tempo_VM);
  digitalWrite(ledAM2,ON); 
  digitalWrite(ledVD2,OFF);
  delay(tempo_AM);
  
  
  // Verde no 1, Vermelho no 2
  digitalWrite(ledVM1, OFF);
  digitalWrite(ledVD1, ON);
  digitalWrite(ledAM1,OFF);
  digitalWrite(ledVM2,ON);
  digitalWrite(ledAM2, OFF);
  delay(tempo_VD);
  digitalWrite(ledAM2,OFF); 
  digitalWrite(ledVD2,OFF);
  delay(tempo_VM); 
  
  // Amarelo no 1, Verde no 2
  digitalWrite(ledVM1, OFF);
  digitalWrite(ledVD1, OFF);
  digitalWrite(ledAM1,ON);
  digitalWrite(ledVM2,OFF);  
  digitalWrite(ledAM2,OFF); 
  digitalWrite(ledVD2,ON);
  delay(tempo_AM);
}