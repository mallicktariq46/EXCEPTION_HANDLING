# EXCEPTION_HANDLING
# Name: TARIQ AKHLAK
# PRN: 22070123124

# Exception_Handling
Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. 
There are two types of exceptions: a)Synchronous, b)Asynchronous (i.e., exceptions which are beyond the program’s control, such as disc failure, keyboard interrupts etc.). C++ provides the following specialized keywords for this purpose:
* try: Represents a block of code that can throw an exception.
* catch: Represents a block of code that is executed when a particular exception is thrown.
* throw: Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.

# SYNTAX:
try
{
// protected code
}
catch( Exception_name e1 )
{
// catch block
} 

if( Exception )
{
throw “Message”;
}

# EXPERIMENT NO: 1
AIM: To throw an error if denominator is 0
Algorithm:

--> STEP 1: START
--> STEP 2: Take numerator and denominator from user
--> STEP 3: try{ //If exception occurs this gets executed
        if(b!=0){
            cout<<"Division: "<<a/b<<endl;
        }
        else{
            throw(b); //If exception occurs it throws b to 'catch'
        }
      } catch(float e){ //If an exception has occured, it gets executed
               cout<<"Number cannot be 0: ERROR";
            }
--> STEP 4: STOP

OUTPUT
Enter 2 numbers: 3 5
Division: 0.6
Enter 2 numbers: 2 0
Number cannot be 0: ERROR

# EXPERIMENT NO: 2
AIM: To check whether age is greater than 18 or not
Algorithm:

--> STEP 1: START
--> STEP 2: Take age from user
--> STEP 3:  try{
        if(age>=18){ //Gets executed if age is greater or equal to 18
            cout<<"Age: "<<age<<" is greater than 18"<<endl<<"ACCESS GRANTED";
        }
        else{
            throw(age); //Throws age if it is less than 18
        }
    }   catch(int e){ //Gets executed if age is less than 18
            cout<<"Age is less than 18:ACCESS DENIED";
    }
--> STEP 4: STOP

OUTPUT
Enter age: 22
Age: 22 is greater than or equal to 18
ACCESS GRANTED
Enter age: 4
Age is less than 18:ACCESS DENIED
