#include <iostream>
using namespace std;
int main()                
  { 
  	int a, b, total;
  	char operation;
    cout<<"Welcome to My Calculator" << endl; 
    cout<<""<<endl;                            
    cout<<"Operators:"<<endl;                 
    cout<<"For Addition, select '+'"<<endl;      
    cout<<"For Subtraction, select '-'"<<endl;    
    cout<<"For Multiplication, select '*'"<<endl; 
    cout<<"For Division, select '/'"<<endl;       
    cout<<""<<endl;                                                   
    cout<<"Input a mathematical equation"<<endl;
    cin >> a;
    cin >> operation;
    cin >> b;
    cout << "The answer is: " << total<<endl; 
    if (operation == '+')
    	{total = a + b;}
    else if (operation == '-')
    	{total = a - b;}
    else if (operation == '*')
    	{total = a * b;}
    else if (operation == '/' )
    	{total = a / b;}  
    else
        cout<<"Try again"<<endl; 
    return 0;
 }
        //         /\                /\
        //        /\/\              /\/\
        //       /\/\/\            /\/\/\
        //      /\/\/\/\          /\/\/\/\ 
        //     /\/\/\/\/\        /\/\/\/\/\
        //    /\/\/\/\/\/\      /\/\/\/\/\/\
        //   /\/\/\/\/\/\/\    /\/\/\/\/\/\/\
        //  /\/\/\/\/\/\/\/\  /\/\/\/\/\/\/\/\
        // /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
        // \/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
        //  \/\/\/\/\/\/\/\/  \/\/\/\/\/\/\/\/ 
        //   \/\/\/\/\/\/\/    \/\/\/\/\/\/\/
        //    \/\/\/\/\/\/      \/\/\/\/\/\/
        //     \/\/\/\/\/        \/\/\/\/\/
        //      \/\/\/\/          \/\/\/\/
        //       \/\/\/            \/\/\/
        //        \/\/              \/\/
        //         \/                \/  
