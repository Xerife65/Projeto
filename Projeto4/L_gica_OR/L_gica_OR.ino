// **Lógica OR**

#define chave1 11  //define variavel chave na entrada 11
#define chave2 10 //define variavel chave na entrada 10
#define led   30 // define variavel led  na saída do pino 30

void setup() 
{
 pinMode(chave1, INPUT);
 pinMode(chave2, INPUT); 
 pinMode(led, OUTPUT);
 
}

bool e(bool e1 , bool e2 );cabeçalho da função

void loop(){
  bool e1,e2,s1;

  e1 = digitalRead(chave1);
  e2 = digitalRead(chave2);
  
  // logica AND 
  
  if ( e1 || e2 == 1)
  s1 = 1;
  
    else 
    s1 = 0;
    
   digitalWrite(led,s1);
   
}

bool e(bool e1 , bool e2 )
