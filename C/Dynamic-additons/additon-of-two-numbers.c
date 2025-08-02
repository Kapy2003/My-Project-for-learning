#include <stdio.h>     // string module
#include <string.h>    // standard input-output module

int main ( void ) 
{

   char type[10];       // number of characters are there in the string +1 [for eg = int+1]


   printf("what is the data_type of you wanna add ( int or float ): ");
   scanf("%s", type);

   
   
// Logic for dynamic switching between float and int

if ( strcmp(type, "int")==0 )  // checks if user input and the string matches or not using 0

{
   int numb1, numb2;
   printf("what is the number 1 : ");
   scanf("%d", &numb1);
         
   printf("what is the number 2 : ");
   scanf("%d", &numb2);

   printf("The sum of two number is: %d\n",numb2+numb1);
}


else if ( strcmp (type, "float")==0 )   
{

   float numb1, numb2;
   printf("what is the number 1 : ");
   scanf("%f", &numb1);
         
   printf("what is the number 2 : ");
   scanf("%f", &numb2);

   printf("%f",numb2+numb1);


}


else                                // if nothing is matched then returns this value
{
   printf("Its neither an integer number nor a floating number\n");

}


   return 0;                      
    
}
