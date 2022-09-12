///Operators Visited *(BASIC INTRODUCTION)*
//Open Source Document For Educational Purpose
//Date - 11-09-22
//Author - Aditya Kalra
//github- gatYouBoii


#include <stdio.h>
#include <stdlib.h>


//-------------Must Read-------------
/*
	Know these Terms first -
    
    Operator - The sign representing a function to be held on operators
    
    Operands - Data or values on which the operation is to be held
    
    *Simple Meaning*
    int x = a + b;
    x is a variable which is going to store the sum of a and b 
    a and b are the _operands_
    and x is a _operator_
    
    just like mathematics we add two numbers by checking the + sign,the c also supports the same way. we use + to identify the operation and variables to identify the data on which operation is to be happen
    
    
    C Supports Following Operators
    
	----Arithmetic
    ----Logical
    ----Unary
    ----Relational
    ----Assignment
    ----Ternary / conditional
    ----binary
    
  
  =======================================================================
  ---Arithmetic---
  
  		+ - plus
        - - minus
        * - multiplication
        / - division
        % - modulus (Returns the remainder when devided by a number)
   =======================================================================                 
	---Logical---
    
    	&& - AND 
        || - OR
        !  - NOT
        
    =======================================================================        ---Unary---
    
    	++ 
        	_pre / post increment 
        -- 
        	_pre/post decrement
		& - reference Operator
        * - pointer operator
        sizeof() - returns the size of the operator on which the function is performed
    ========================================================================
	       
	---Relational---
    
    	> - Less Than
        <- Greater Than
        >= - Greater Than or equal to
        <= - Less Than or equal to
        == - equal to
        != - not equal to
        
  =======================================================================        	----Assignment---
  		 = - assignment Operator
         += 
         -=
         /=
         *=
         *****Do not get confused between = and ==*****
         = takes the value from right hand operator and pass it to the left hand operator
         whereas,
         
         == used to compare the equal value
         (
         eg-	 a = 10;
          		 b = a;
                 (b will get the value of a i.e 10)
                
                and
                
                a = 10; 
                b == a;
                (will not do anything it is used to compare)
                	
                    b = 10;
                    if(b==a){printf("Yes a and b are equal");}
                    else{printf("No a and b are not equal");}
         
  					*****************************
    ========================================================================
    	
     ---Ternary / conditional ---
     
		 used as a short hand notation for if else statment
         int a > 10 ? printf("a") : printf("no"); 
    	
    ========================================================================
    	
        ---Binary---
        Used to solve binary operations 
        like Register Shift
        	 one's complement
             binary addition
             binary subtraction
             etc
             
    ========================================================================


_______-------The above mentioned data is very important to understand---______
*/


/* ***********************Program Starts Here************************** */
//we will be creating a program to do some of these operations


void arithmetic();
void logical();
void unary();
void relational();

int main() {

int choice;

do{
    printf("\n\n");
      for(int i =0; i<50;i++){
        printf("-");
    }
printf("\nPlease enter your choice \n");
printf("1: Arithmetic Operations \n");
printf("2: Logical Operations \n");
printf("3: Unary Operations \n");
printf("4: Relational Operations \n");
printf("5: To Exit \n\n");

 for(int i =0; i<50;i++){
        printf("-");
 }
    printf("\nYour choice: ");
    scanf("%d",&choice);
    if((choice>=1) && (choice<=5)){
	switch(choice){
    	case 1: 
        		arithmetic();
                break;
        case 2:
        		logical();
                break;
        case 3: 
        		unary();
                break;
		case 4:
        		relational();
                break;	
		case 5:
        		printf("Exiting...");
        		exit(0);
    }
    }
    else{
            printf("Please Enter the valid choice");
            printf("\n\n\nRestarting...");
        
    }
     

}
while(choice!=5);

return 0;
}
    
   
        	


void arithmetic(){
    //for displaying a line
      for(int i =0; i<50;i++){
        printf("*");
    }
    
    printf("\n\n Here we will see the Arithmetic operations that are \n + - * / %% ");
    printf("\n");
	int a , b; 
    printf("Enter the two numbers :\n");
    for(int i = 0 ; i<2;i++){
        if(i==0){
            printf("Number 1:");scanf("%d",&a);
        }
        else if(i==1){
            printf("Number 2:");scanf("%d",&b);
        }
    }
    printf("The sum of %d and %d is \t\t\t",a , b);
    printf(" %d",a+b);
    printf("\n");
    
    if(a>b){
         printf("The subtraction of %d and %d is \t",a , b);
    printf(" %d",a-b);
    printf("\n");
    }
    else if(b>a){
            printf("The subtraction of %d and %d is \t",b , a);
    printf(" %d",b-a);
    printf("\n");
    }

    
     printf("The multiplication of %d and %d is \t",a , b);
    printf(" %d",a*b);
    printf("\n");
    
    printf("The division of %d and %d is \t\t",b , a);
    printf(" %d",b/a);
    printf("\n");
   
   
   if(a>b){
    printf("The modulous of %d and %d is \t\t",a , b);
    printf(" %d",a%b);
    printf("\n");
   }
   
   else if(b>a){
    printf("The modulous of %d and %d is \t\t",b , a);
    printf(" %d",b%a);
    printf("\n");
   }
    for(int i =0; i<50;i++){
        printf("*");
    }

}

void relational(){
     for(int i =0; i<50;i++){
        printf("*");
    }
	  printf("\n\n Here we will see the Relational operations that are >, < , != etc \n");
      int age ;
      printf(" Please enter your age:\n");
      printf("Your age:");
      scanf("%d",&age);
      

            if((age>0) && (age<18))
            {
                printf("You are not eligible for voting\n");
            }
            else if(age>=18 && age<110){
                 printf("You are eligible for voting\n");
            }
            else{
                printf("Please enter the valid number\n");
            }
            printf("\n");
         for(int i =0; i<50;i++){
        printf("*");
    }
}

void logical(){
     for(int i =0; i<50;i++){
        printf("*");}
        
    int a , b , c;
    printf("\n Enter the three numbers \n");
    for(int i= 0 ; i<3;i++){
        if(i==0)
        {printf("\nNumber %d: ",i+1);scanf("%d",&a);}
          if(i==1)
        {printf("\nNumber %d: ",i+1);scanf("%d",&b);}
          if(i==2)
        {printf("\nNumber %d: ",i+1);scanf("%d",&c);}
    }
    printf("Checking...\n");
    if((a>b) && (a>c)){
        printf("%d is biggest of all", a);
    }
    else if((b>c)){
        printf("%d is biggest of all", b);
    }
    else if ((c>a)){
        printf("%d is biggest of all", c);
    }
    else{
        printf("Add a good combination :)");
    }
    
    
}

void unary(){
    
    
        
    
    int choice;
    printf("\n Please enter your choice \n");
    printf("1: Increment \n");
    printf("2: Decrement \n");
    printf("3: sizeof Operator \n");
    printf("4: Reference \n");
    printf("5: Derefence Operator \n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1 :
                printf("1: Pre-Increment? or 2: Post-Increment\t");
                int x;
                scanf("%d",&x);
                if(x==1){
                    int a; 
                    printf("Enter the value of a ");
                    scanf("%d",&a);
                    printf("\n The previous value of a is %d \n", a);
                    printf("++a (Pre-incremented) Executed\n");
                    ++a;
                    printf("Now the Value of a is %d" , a);
                }
                if(x == 2){
                    int a; 
                    printf("Enter the value of a ");
                    scanf("%d",&a);
                    printf("\n The previous value of a is %d \n", a);
                    printf("a++ (Post-increment) Executed\n");
                    a++;
                    printf("Now the Value of a is %d" , a);
                }
                break;
                
                case 2:
                printf("1: Pre-Decrement? or 2: Post-Decrement\t");
                int c;
                scanf("%d",&c);
                if(c==1){
                    int a; 
                    printf("Enter the value of a ");
                    scanf("%d",&a);
                    printf("\n The previous value of a is %d \n", a);
                    printf("--a (Pre-decrement) Executed\n");
                    --a;
                    printf("Now the Value of a is %d" , a);
                }
                if(c == 2){
                      int a; 
                    printf("Enter the value of a ");
                    scanf("%d",&a);
                    printf("\n The previous value of a is %d \n", a);
                    printf("a-- Post-decrement) Executed\n");
                    a--;
                    printf("Now the Value of a is %d" , a);
                }
                break;
                
                case 3:
                    printf("Using sizeof() operator to find the size of \n 1: Integer 2:Float 3:Char in Architecture \n");
                    
                    printf("If segmentation fault please run the program again\n");
                    
                    printf("Integer -");
                    printf("%ld",sizeof(int));
                    printf("\n");
                    
                    printf("Float -");
                    printf("%ld",sizeof(float));
                    printf("\n");
                    
                     printf("Char -");
                    printf("%ld",sizeof(char));
                    printf("\n");
                    
                    case 4:
                    case 5:
                    printf("\n The reference and dereference operator works collectively to produce one result, best example is pointers \n");
                        
                    printf("Declaring a pointer variable int * ptr; ");
                    printf("\n Now Declaring a simple variable int var = 10;");
                    printf("\n Now using reference operator to make ptr point to var -> ptr = &var\n");
                    printf("\n Value of ptr is now");
                    int *ptr;
                    int var = 10;
                    ptr= &var;
                    printf("%ls", ptr);
                    printf("Dereferencing the ptr");
                    printf("\n printf(\"*ptr\")");
                    printf("%d",*ptr);
                    printf("If any segmentation fault please restrart the program. Sorry For inconvenience");
                    
     }
     printf("\n\n");
    for(int i =0; i<50;i++){
        printf("*");
    }
    }
