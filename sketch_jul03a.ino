#include<Morse.h>
#define pin 13;
int incomingByte = 0;
int i,j;
char morse[26][4]={"*-",//a
"-***",//b
"-*-*",//c
"-**",//d
"*",//e
"**-*",//f
"--*",//g
"****",//h
"**"//i
"*---",//j
"-*-",//k
"*-**",//l
"--",//m
"-*",//n
"---",//o
"--*",//p
"--*-",//q
"*-*",//r
"***",//s
"-",//t
"**-",//u
"***-",//v
"*--",//w
"-**-",//x
"-*--",//y
"--**",//z
};
void setup()
{
 Serial .begin(9600);

}

void loop() {
  if (Serial.available()>0)
  {
    incomingByte = Serial.read();
    Serial.print("I recieved : ");
    Serial.println(incomingByte,DEC);
    for(i=0;i<26;i++)
    {
      if((incomingByte-97)==i)
      {
        for(j=0;(morse[i][j]!='\0');j++)
         {
          if( morse[i][j]=='*')
            Morse dot();
            else if(morse[i][j]=='-')
                   Morse dash();
                   
                 
         }
      }      
    }
   if(incomingByte==32)
   Morse w_space();
   Morse c_space();
  }
}
