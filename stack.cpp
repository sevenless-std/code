#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);

    cout<<"the top element is: "<<mystack.top()<<endl;

    mystack.pop();

    if(mystack.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    cout<<"then the top element is: "<<mystack.top()<<endl;
    
    cout<<"the size of the stack is: "<<mystack.size()<<endl;
}