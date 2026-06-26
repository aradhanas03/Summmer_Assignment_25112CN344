/*Write a program to Create quiz application. */

#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== Quiz Application =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. Which language is used for C++ programs?\n";
    cout << "1. C++\n2. HTML\n3. CSS\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\n===== Result =====\n";
    cout << "Your Score: " << score << "/3";

    return 0;
}