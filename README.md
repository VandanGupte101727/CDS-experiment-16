# CDS-experiment-16
c plus plus and data structures experiment 16

AIM:- to study and implement exceptional handeling<br>

Software Used:-VS code <br>

Theory:-Exception handling in C++ provides a mechanism to handle runtime errors, ensuring smooth program flow. Key components include try, catch, and throw. The try block contains code that may throw an exception. The throw statement signals an error by "throwing" an exception object. The catch block handles this exception based on its type. Multiple catch blocks can be used to manage different types of exceptions. C++ supports various exception types, such as built-in types (int, char) or user-defined types (class). Using std::exception as a base class allows uniform handling of exceptions. Uncaught exceptions cause program termination unless caught. <br>

CODE:-<br>

    #include<iostream>
    using namespace std;

    int main() {
    int a, b;
    float ans;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    try {
        if (b == 0) {
            throw 0;  
        }

        
        cout << "Answer: " << ans << a/b<< endl;
    }
    catch(int x) {
        cout << "ERROR: DIVISION BY ZERO" << endl;
    }

    return 0;
    }


Output:-<br>
![exp16](https://github.com/VandanGupte101727/CDS-experiment-16/blob/main/Screenshot%202024-10-06%20at%208.02.17%20PM.png)

Conclusion:- In this experiment we learnt about exceptional handling and its keywords 
