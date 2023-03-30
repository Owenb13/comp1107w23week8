#include<stdio.h>
#include "helpers.h"
#include <string.h>

int main(int argc, char *argv[]){

     if( argc == 2 ) {

      printf("hello %s welcome to the cypher encoder and decoder", argv[1]);
    string username =  argv[1];
    
    char isRunning = 'y';

    while(isRunning != 'n' && isRunning != 'N')
    {   
        int opperation = get_int( "what operation would you like to do\n 1.encode\n 2.decode\n please eneter the number of the operation that you choose:\t");

        switch (opperation)
        {
           // case 1 is used fo the encoding of messages 
          case 1 : 

          printf("what method of encoding do you wish to use?\n");
          printf(" #1.caeser\n #2.vigenere\n #3.salted caeser\n");

          int cypher = get_int( "please eneter the number for your selection\n 1,2, or 3:\t" );
         

         switch(cypher)
         {
            case 1: ;
            // caeser encoder 

            string message = get_string( "enter the message you wish to encode\n ");
            char direction = get_char("eneter the direction you would like to shift L or R \n");
            int NumberOfShifts = get_int( "please enter the number of shifts you would like to make:\n");

            // chance the case of the letters used 

            int messagelength = strlen(message);
            // so that the string can return the length of the string 

            // change all letters to lower case 

               for(int a = 0; a < messagelength; a++ )
               {
                  if(message[a]<97)
                  {

                     message[a]+=32;            
                  }             

               }
                
            if (direction == 'l' || direction == 'L')            
            {  
               for( int b = 0; b < messagelength; b++ )
               {
                  message[b]-=NumberOfShifts ; 
               
                  if (message[b]<97)
                  {
                  message[b]+= 26;                        
                  }
               }
            } 
            else if(direction == 'r' || direction =='R')
            {

               for( int b = 0; b < messagelength; b++ )
               {

                  message[b] += NumberOfShifts;

                  if(message[b]>122)
                  {

                     message[b]-=26;
                  }                  

               }         
            }

            printf("your encoded message is %s\n\n", message);

            
            break;

            case 2: ;
            // this is for the viginere cypher 
             message = get_string( "enter the message you wish to encode\n ");
             string CypherKey = get_string("please enter a key ");

               messagelength = strlen(message);
              int keyLength = strlen(CypherKey);

              // change all characters to lowercase 

               for(int a = 0; a < messagelength; a++ )
               {
                  if(message[a] > 65)
                  {

                     message[a] -= 32;            
                  }             

               }
                for(int a = 0; a < keyLength; a++ )
               {
                  if(CypherKey[a] > 65)
                  {

                     CypherKey[a] -= 32;            
                  }             

               }


               for( int i = 0; i < (messagelength - keyLength); i++)
               {
                  CypherKey[ keyLength + i ] = CypherKey[i]; 
                  //now do the math for the equatio
                 // needs to see the lengh of the key and the message 
                 // needs to cut off the key length after the message is fuffilled 
                 // 
                  
               }
               for( int k = 0; k< messagelength ; k++){
               
               message[k]  = (message[k] + CypherKey[k]) % 26;

               message[k] += 97;

               }

      
             printf( "%s\n", message);// need to figure out how to make the cypher key smaler 



            break;

            case 3:; 
            
             message = get_string( "enter the message you wish to encode\n ");
             direction = get_char("eneter the direction you would like to shift L or R \n");
             NumberOfShifts = get_int( "please enter the number of shifts you would like to make:\n");

            // chance the case of the letters used 

           messagelength = strlen(message);
            CypherKey = username;
            keyLength = strlen(CypherKey);
            // so that the string can return the length of the string 

            // change all letters to lower case 

               for(int a = 0; a < messagelength; a++ )
               {
                  if(message[a]<97)
                  {

                     message[a]+=32;            
                  }             

               }
                
            if (direction == 'l' || direction == 'L')            
            {  
               for( int b = 0; b < messagelength; b++ )
               {
                  message[b]-=NumberOfShifts ; 
               
                  if (message[b]<97)
                  {
                  message[b]+= 26;                        
                  }
               }
            } 
            else if(direction == 'r' || direction =='R')
            {

               for( int b = 0; b < messagelength; b++ )
               {

                  message[b] += NumberOfShifts;

                  if(message[b]>122)
                  {

                     message[b]-=26;
                  }                  

               }         
            }
                
                 for(int a = 0; a < messagelength; a++ )
               {
                  if(message[a] > 65)
                  {

                     message[a] -= 32;            
                  }             

               }
                for(int a = 0; a < keyLength; a++ )
               {
                  if(CypherKey[a] > 65)
                  {

                     CypherKey[a] -= 32;            
                  }             

               }


               for( int i = 0; i < (messagelength - keyLength); i++)
               {
                  CypherKey[ keyLength + i ] = CypherKey[i]; 
                  //now do the math for the equatio
                 // needs to see the lengh of the key and the message 
                 // needs to cut off the key length after the message is fuffilled 
                 // 
                  
               }
               for( int k = 0; k< messagelength ; k++){
               
               message[k]  = (message[k] + CypherKey[k]) % 26;

               message[k] += 97;

               }

      
             printf( "%s\n", message);





            break;


         }

         break;

        
          case 2: ; //used for the decoding of messages 


               printf("what method of decoding do you wish to use?\n");
               printf(" #1.caeser\n #2.vigenere\n #3.salted caeser\n");
                cypher = get_int( "please eneter the number for your selection\n 1,2, or 3:\t" );
             
              switch(cypher)
              { 

               case 1:; // caesar cypher decoder 

               string message = get_string( "enter the encoded message \n ");
                 char direction = get_char("eneter the direction you shifted L or R \n");
                 int NumberOfShifts = get_int( "please enter the number of shifts you made:\n");

                 int messagelength = strlen(message);

                 for(int a = 0; a < messagelength; a++ )
               {
                  if(message[a]<97)
                  {

                     message[a]+=32;            
                  }     

               }  
               
               if (direction == 'l' || direction == 'L')            
                {  
                   for( int b = 0; b < messagelength; b++ )
                {
                  message[b]+=NumberOfShifts ; 
               
                  if (message[b]<97)
                  {
                  message[b]-= 26;                        
                  }
                }
                 } 
            else if(direction == 'r' || direction =='R')
            {

               for( int b = 0; b < messagelength; b++ )
               {

                  message[b] -= NumberOfShifts;

                  if(message[b]>122)
                  {

                     message[b]+=26;
                  }                  

               }         
            }

            printf("your decoded message is %s\n\n", message);

               break;

               case 2:  ; // decoded v code 
                message = get_string( "enter the encoded message \n ");
             string CypherKey = get_string("please enter a key ");

               messagelength = strlen(message);
              int keyLength = strlen(CypherKey);

              // change all characters touppercase 

               for(int a = 0; a < messagelength; a++ )
               {
                  if(message[a] > 65)
                  {

                     message[a] -= 32;            
                  }             

               }
                for(int a = 0; a < keyLength; a++ )
               {
                  if(CypherKey[a] > 65)
                  {

                     CypherKey[a] -= 32;            
                  }             

               }


               for( int i = 0; i < (messagelength - keyLength); i++)
               {
                  CypherKey[ keyLength + i ] = CypherKey[i]; 
                  //now do the math for the equatio
                 // needs to see the lengh of the key and the message 
                 // needs to cut off the key length after the message is fuffilled 
                 // 
                  
               }
               for( int k = 0; k< messagelength ; k++){
               
               message[k]  = (message[k] - CypherKey[k]) % 26;

               if ( message[k]<0){

               
               message[k] += 26;

               }
               message[k] += 97;
               }

      
             printf( "%s\n", message);// need to figure out how to make the cypher key smaler 







               break; 
               
               case 3:  ;  

                message = get_string( "enter the encoded message \n ");
                direction = get_char("eneter the direction you shifted L or R \n");
                NumberOfShifts = get_int( "please enter the number of shifts you made:\n");
                CypherKey = get_string(" enter the username of the person that sent it to you");

                  messagelength = strlen(message);
                  keyLength = strlen(CypherKey);

                 for(int a = 0; a < messagelength; a++ )
               {
                  if(message[a]<97)
                  {

                     message[a]+=32;            
                  }     

               }  
               
               if (direction == 'l' || direction == 'L')            
                {  
                   for( int b = 0; b < messagelength; b++ )
                {
                  message[b]+=NumberOfShifts ; 
               
                  if (message[b]<97)
                  {
                  message[b]-= 26;                        
                  }
                }
                 } 
            else if(direction == 'r' || direction =='R')
            {

               for( int b = 0; b < messagelength; b++ )
               {

                  message[b] -= NumberOfShifts;

                  if(message[b]>122)
                  {

                     message[b]+=26;
                  }                  

               }         
            }
            
               for( int i = 0; i < (messagelength - keyLength); i++)
               {
                  CypherKey[ keyLength + i ] = CypherKey[i]; 
                  //now do the math for the equatio
                 // needs to see the lengh of the key and the message 
                 // needs to cut off the key length after the message is fuffilled 
                 // 
                  
               }
               for( int k = 0; k< messagelength ; k++){
               
               message[k]  = (message[k] - CypherKey[k]) % 26;

               if ( message[k]<0){

               
               message[k] += 26;

               }
               message[k] += 97;
               }

      
             printf( "%s\n", message);





               break; 


               }

            



          break;
        }




      


         isRunning = get_char("would you like to continue encoding and decoding ? enter Y / n \n");


    }


         }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }

 return 0;   
}
