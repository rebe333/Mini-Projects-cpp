#include <iostream>
#include <string>
#include <sstream>

int main() {
    bool end = false;
    std::string input;

    while(!end) {
        std::cout << "What do you want to calculate?" << std::endl;
        std::getline(std::cin, input);

        if(input == "q" || input == "Q") {
            end = true;
            continue;
        }


        std::stringstream ss(input);
        double a, b;
        char op;

        if(!(ss >> a >> op >> b)) {
            std::cout << "False Input!" << std::endl;
            continue;
        }

        switch(op) {
            case '+': std::cout << a + b << std::endl; break;
            case '-': std::cout << a - b << std::endl; break;
            case '*': std::cout << a * b << std::endl; break;
            case '/': 
                if(b != 0) std::cout << a / b << std::endl;
                else std::cout << "Failure, Division trough null!" << std::endl;
                break;
            default: std::cout << "Unknown Operator!" << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}