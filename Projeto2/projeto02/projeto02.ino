
// Lógica inversora
#define chave1 11  //define variavel chave na entrada 11
#define chave2 10 //define variavel chave na entrada 10
#define led   30 // define variavel led  na saída do pino 30


void setup() 
{
 pinMode(chave1, INPUT);
 pinMode(chave2, INPUT); 
 pinMode(led, OUTPUT);

 
}

void loop()
{
  bool e1,e2,s1;

  e1 = digitalRead(chave1);

  s1= !e1;// complemento da chave s1

   0digitalWrite(led,s1);
}
