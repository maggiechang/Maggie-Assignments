 #include <iostream>

int main() {
    int user_input, x;
    std::cout << "This program will check for prime numbers\n";
    std::cout << "Please enter an integer upper bound: ";
    std:: cin >> user_input;
    for (int i = 2; i < user_input; i++){
        x = 0;
        for (int j = 2; j < i; j++){
            if (i%j == 0){
                x = 1;
                break;
            }
        }
        if (x == 0){//if the x = 1 flag is never set the number is prime.
            std::cout << i << " is a prime number\n";
        }
    }
    return 0;
}
