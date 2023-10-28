#include <iostream>
using namespace std;

int main() {
    float a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    try{ //If exception occurs this gets executed
        if(b!=0){
            cout<<"Division: "<<a/b<<endl;
        }
        else{
            throw(b); //If exception occurs it throws b to 'catch'
        }
    }catch(float e){ //If an exception has occured, it gets executed
        cout<<"Number cannot be 0: ERROR";
    }

    return 0;
}

/*OUTPUT
Enter 2 numbers: 3 5
Division: 0.6
Enter 2 numbers: 2 0
Number cannot be 0: ERROR
*/
