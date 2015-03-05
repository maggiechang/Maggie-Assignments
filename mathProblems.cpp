#include <iostream>
using namespace std;
int main()
{
    string level; //excess elements in scalar initializer
    string name; //cannot initialize a variable of type char with an Ivalue of type 'const char'
    float a, b;
    cout << "input a level of difficulty : easy, medium, or hard" << endl;
    cin >> level;
    if ((level == "easy"))
    {
        cout << "What is the shorter diagonal of a parallelogram that has sides of 3 and 8 and a base angle of 35°" << endl;
        cin >> a;
        if ((a == 5.8))
        {
            cout << "YOU GOT IT!" << endl;
        }
        else
        {
            cout << "You got it wrong. Sux for you. Come back tmrw. jk don't" << endl;
        }
    }
    else if ((level == "medium"))
    {
        cout << "Juan Pablo and Diana are racing to grab their dog chiquis. Juan Pablo is 500 ft from their dog and Diana is only 300 ft away. JP runs 8 ft persecond. Camila runs 6 ft per second, but she trips over a pile of dirt and starts 1 second later than Bert. Who gets to the ducky first?" << endl;
        cin >> name;
        if (name == "Diana") //use of unceclared identifier 'Diana'
        {
            cout << "You is da winna winna chicken dinna!! Hallaaaaa" << endl;
        }
        else
        {
            cout << "You lose and you suck at math. Try liberal arts" << endl;
        }
    }
    else if ((level == "hard"))
    {
        cout << "An airplane is flying at a bearing of 200° at 500 mph. If the true course and bearing is 507 mph bearing 197°, what is the speed of the wind?" << endl;
        cin >> b;
        if ((b == 27.3))
        {
            cout << "it's ya birthday! it's ya birthday! WOOHOO!!" << endl;
        } 
        else
        {
            cout << "yeah... i can do this with my eyes closed. Better luck next time!!!!!!" << endl;
        }
    }
    else
    {
        cout << "HELLO PICK A LEVEL FIRST" << endl;
    }
    return 0;
}
