 #include <iostream>
int main() {
    int a, x;
    std::cout << "This program will check for prime numbers";
    std::cout << "Please enter an integer upper bound: ";
    std:: cin >> a;
    for (int i = 2; i < a; i++){
        x = 0;
        for (int j = 2; j < i; j++){
            if (i%j == 0){
                x = 1;
                break;
            }
        }
        if (x == 0){
            std::cout << i << " is a prime number";
        }
    }
    return 0;
}
