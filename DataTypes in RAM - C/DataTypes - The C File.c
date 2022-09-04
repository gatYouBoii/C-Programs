//How Are the Data Types stored inside the Primary Memory *(BASIC INTRODUCTION)*
//Open Source Document For Educational Purpose
//Date - 03-09-22
//Author - Aditya Kalra
//github- gatYouBoii


#include <stdio.h>

//-------------Must Read-------------
/*
	Know these Terms first -
    
    Variables - Containers for storing the Data 
    
    Data - Everything we need to manage or the content we work upon
    
    The C has rich types of data 
    eg- if we want to have number we have int...
    	if we want to have text we have string...
        if we want to have boolean i.e true and false value we have boolean...
        and a lot more.
    
    In programming language we call them Data Types - 
    We have following Data types 
    ----------Primitve 
    ----------Derived
    ----------User Defined
    
  
  =======================================================================
  *  *Primitive* * //Must Know
  
  	(The simplest Form Of Data)
    	These are the basic data types from which we can create further Data Types
        In C we have -
		For Number -
        			Without decimal -	int , long 
                    		With decimal - float, double
       For Character -
       			 char
       For Boolean -
       			boolean
	   For Void - 
       			void
                    
   =======================================================================                 
	* *Derived* * //Very Important For Programmers
    	
    	(Secondary Data Type)
        		Function
           		 Arrays
           		 Pointer
            		Structures
            		Unions


    =======================================================================        
    * *User Defined* * //Good To Know About
    	Enum
	Typedef
	
    ========================================================================

	-----------As A beginner You should know these First--------------------
	
*/

//Executing Some Data Types
//Creating Seperate Functions for Various Data Types 'Don't Focus on Functions , Try to understand the concept'
//To Experience Various Data types use the Function Name and () like - Numbers(); in between the Program




void Numbers();		//function Definition for Number
void Characters();





int main() {


	//Numbers();	//Defaut Call For Numbers()
    Characters();
  return 0;
}

void Numbers(){
	int num1; //Declared the Variable that will hold the Integer data types
	long num2;//Declared the Variable that will hold the Integer (With Large Capacity) data type 
	num1= 10; //Assigning Value of num1
	
    
    printf("What We Actually See -> ");
	printf("%d",num1);
	printf("\n"); //Printed New Line
	printf("See How the Num1 is allocated inside the Memory (Actually Inside the RAM)-> \n");
	printf("%x",&num1);
    printf("\n \n");
	
    
    float num3; //Declared the Variable that will hold the Decimal Type
	num3= 3.3532;
       printf("What We Actually See -> ");
	printf("%f",num3);
	printf("\n"); //Printed New Line
	printf("See How the Num1 is allocated inside the Memory (Actually Inside the RAM) -> ");
	printf("%x",&num3); 

}



void Characters(){
	char c1; //Declared the Variable that will hold the Character data types
	c1 = 'a';
     printf("What We Actually See -> ");
	printf("%c",c1);
	printf("\n"); //Printed New Line
	printf("See How the Num1 is allocated inside the Memory (Actually Inside the RAM)-> \n");
	printf("%x",&c1);
    printf("\n \n");
    
}








