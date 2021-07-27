#define chave 2  // define variavel chave na entrada 2
#define led 3  //  define variavel led  na saída 3


void setup() 
{
 // configaração do microntrolador 
 // será executado apenas uma vez

// configuração dos pinos
//pinMode(2,1);            //define a variavel chave como entrada
//pinMode (chave , 1) ;    //define a variavel chave como entrada
  pinMode(chave , INPUT);  //define a variavel chave como entrada
  pinMode(led, OUTPUT);    // define led como sáida
  Serial.begin(9600);
}
bool entrada,saida;// variavel global chamada entrada e saida

void loop() 
{
  entrada = digitalRead(chave); 
  
  if (entrada ==1)
  {
    saida = 1;
    Serial.println("Entrada acionada.");
  }
  else {
  saida = 0;
  Serial.println("Entrada desacionada.");
  }
  saida = entrada;
  digitalWrite(led, saida); 
  Serial.println(chave);
   Serial.println(saida);
    
}
