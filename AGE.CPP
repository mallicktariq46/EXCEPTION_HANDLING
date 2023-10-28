#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age>=18){ //Gets executed if age is greater or equal to 18
            cout<<"Age: "<<age<<" is greater than 18"<<endl<<"ACCESS GRANTED";
        }
        else{
            throw(age); //Throws age if it is less than 18
        }
    }catch(int e){ //Gets executed if age is less than 18
        cout<<"Age is less than 18:ACCESS DENIED";
    }

    return 0;
}

/*OUTPUT
Enter age: 22
Age: 22 is greater than or equal to 18
ACCESS GRANTED
Enter age: 4
Age is less than 18:ACCESS DENIED
*/
