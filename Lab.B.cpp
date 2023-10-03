#include <iostream>

int main() {
    const int MAX_LENGTH = 300;
    char stroka[MAX_LENGTH];

    std::cout << "Vvedite ctroky (ne bolee 300 simvolov): ";
    std::cin.getline(stroka, MAX_LENGTH);

    bool newWord = 1;

    for (int i = 0; stroka[i] != '\0'; ++i) {

        if (stroka[i] == ' ' || stroka[i] == '\t' || stroka[i] == '\n') 
        {
            newWord = 1;
        }

        else if (newWord && islower(stroka[i])) {
            stroka[i] = toupper(stroka[i]);
            newWord = 0;
        }

        else {
            newWord = 0;
        }
    }

    std::cout << "New ctroka:                             " << stroka << std::endl;

    return 0;
} 