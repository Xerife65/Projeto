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

bool e(bool i1 , bool i2 );//cabeçalho da função AND
bool ou(bool i1 , bool i2 );//cabeçalho da função OR
bool naoe(bool i1 , bool i2 );//cabeçalho da função NAND
bool naoou(bool i1 , bool i2 );//cabeçalho da função NOR

void loop(){
  bool e1,e2,s1;

  e1 = digitalRead(chave1);
  e2 = digitalRead(chave2);
  s1= ou(e1,e2);
       
   digitalWrite(led,s1);
   
}

 bool e(bool i1 , bool i2 )
 {
  bool o1;
  if(i1 && i2 ==1)
  o1 = 1;
  else
  o1 = 0;
  return o1;
   }
bool ou(bool i1 , bool i2 )
 {
  bool o1;
  if(i1 || i2 ==1)
  o1 = 1;
  else
  o1 = 0;
  return o1;
   }
   bool naoe(bool i1 , bool i2 )
 {
  bool o1;
  if(!(i1 && i2) ==1)
  o1 = 1;
  else
  o1 = 0;
  return o1;
   }
   bool naoou(bool i1 , bool i2 )
 {
  bool o1;
  if(!(i1 || i2) ==1)
  o1 = 1;
  else
  o1 = 0;
  return o1;
   }
