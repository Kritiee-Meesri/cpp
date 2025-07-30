// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    cout << "calculator" << endl;
    cout << "----------" << endl;
    int op,num1,num2;
    cout << "type your number" << endl;
    cin >> op;
    if(op==1){
        cout << "add funtion" << endl;
        //num1
        cout << "enter num1 : ";
        cin  >> num1;
        cout << endl;
        //num2
        cout << "enter num2 : ";
        cin  >> num2;
        cout << endl;
        cout << "---------------------" <<endl;
        cout << num1 << " + " << num2 << " = " <<
                num1+num2 << endl;
    }else if(op==2) {
         //num1
        cout << "enter num1 : ";
        cin  >> num1;
        cout << endl;
        //num2
        cout << "enter num2 : ";
        cin  >> num2;
        cout << endl;
        cout << "---------------------" <<endl;
        cout << num1 << " - " << num2 << " = " <<
                num1-num2 << endl;
    }else if(op==3) {
         //num1
        cout << "enter num1 : ";
        cin  >> num1;
        cout << endl;
        //num2
        cout << "enter num2 : ";
        cin  >> num2;
        cout << endl;
        cout << "---------------------" <<endl;
        cout << num1 << " / " << num2 << " = " <<
                num1/num2 << endl;
    }else if(op==4) {
         //num1
        cout << "enter num1 : ";
        cin  >> num1;
        cout << endl;
        //num2
        cout << "enter num2 : ";
        cin  >> num2;
        cout << endl;
        cout << "---------------------" <<endl;
        cout << num1 << " * " << num2 << " = " <<
                num1*num2 << endl;            
    } else if(op==5) {
         //num1
        cout << "enter num1 : ";
        cin  >> num1;
        cout << endl;
        //num2
        cout << "enter num2 : ";
        cin  >> num2;
        cout << endl;
        cout << "---------------------" <<endl;
        cout << num1 << " % " << num2 << " = " <<
                num1%num2 << endl;            
    }else {
        cout << "invaild deta" << endl;
    }
    
    return 0;
}
