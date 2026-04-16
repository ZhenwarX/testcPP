#include <iostream>
using namespace std;

int main() {

    // This program calculates the average of three numbers and checks if it is greater than 10.
    //Q1    
    double n1, n2, n3, avg;
    cout << "Please enter first number: "; cin >> n1;
    cout << "Please enter second number: "; cin >> n2;
    cout << "Please enter third number: "; cin >> n3;

    avg = (n1 + n2 + n3) / 3.0;
    cout << "The average is: " << avg << endl;

    if (avg > 10) {
        cout << "The average is greater than 10." << endl;
    } else {
        cout << "The average is less than 10." << endl;
    }


//Q2. Write a C++ program that takes two numbers as input and checks if the first number is divisible by the second number. If it is divisible, print "Divisible", otherwise print "Not Divisible".
    double x, y;
    cout << "Enter value for x: "; cin >> x;
    cout << "Enter value for y: "; cin >> y;

    if (y != 0) {
        cout << "The result is: " << (x * x) / y << endl;
    } else {
        cout << "y value must NOT be zero!" << endl;
    }

//Q3. Write a C++ program that takes a number as input and checks if it is even or odd. If the number is even, print "It's an even number", otherwise print "It's an odd number".
    int num;
    cout << "Enter a number: "; cin >> num;

    if (num % 2 == 0) {
        cout << "It's an even number" << endl;
    } else {
        cout << "It's an odd number" << endl;
    }

//Q4. Write a C++ program that takes two numbers as input and checks which one is greater. Print the greater number.
    int n1, n2;
    cout << "Enter first number: "; cin >> n1;
    cout << "Enter second number: "; cin >> n2;

    if (n1 > n2) {
        cout << "First number is greater" << endl;
    } else {
        cout << "Second number is greater" << endl;
    }


//Q5. Write a C++ program that takes a character as input and checks if it is a vowel or not. If it is a vowel, print "The character is a vowel", otherwise print "The character is not a vowel".
    char ch;
    cout << "Enter a character: "; cin >> ch;
    
    //char lowCh = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "The character " << ch << " is vowel!" << endl;
    } else {
        cout << "The character " << ch << " is not vowel!" << endl;
    }


    //Q8. Write a C++ program that takes two numbers as input and checks if their sum is greater than 10. If the sum is greater than 10, print "I am greater than 10", otherwise print "I am smaller than 10".
    int n1, n2;
    cout << "Enter first number: "; cin >> n1;
    cout << "Enter second number: "; cin >> n2;
    if (n1 > 10 || n2 > 10) {
        cout << "I am greater than 10" << endl;
    } else {
        cout << "I am smaller than 10" << endl;
    }


    //Q10. Write a C++ program that takes the name of a city and its population as input. If the city is "Erbil" and the population is greater than or equal to 1 million, print "City approved", otherwise print "City not approved".
    string city;
    int pop;
    cout << "Enter the city name: "; cin >> city;
    cout << "Enter the population: "; cin >> pop;
    if (city == "Erbil" && pop >= 1000000) {
        cout << "City approved" << endl;
    } else {
        cout << "City not approved" << endl;
    }


    //Q11. Write a C++ program that takes three numbers as input and checks which one is the largest and which one is the smallest. Print the largest and smallest numbers.
    double n1, n2, n3;
    double largest, smallest;

    cout << "Enter first number: "; cin >> n1;
    cout << "Enter second number: "; cin >> n2;
    cout << "Enter third number: "; cin >> n3;
    if (n1 >= n2 && n1 >= n3) {
        largest = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        largest = n2;
    } else {
        largest = n3;
    }

    if (n1 <= n2 && n1 <= n3) {
        smallest = n1;
    } else if (n2 <= n1 && n2 <= n3) {
        smallest = n2;
    } else {
        smallest = n3;
    }
    cout << "The largest number is: " << largest 
         << " The smallest number is: " << smallest << endl;


    //Q12. Write a C++ program that takes an exam mark as input and converts it to a letter grade based on the following scale:
    int mark;
    cout << "Enter an exam mark: "; cin >> mark;

    if (mark >= 90) cout << "Equivalent letter grade is AA" << endl;
    else if (mark >= 85) cout << "Equivalent letter grade is BA" << endl;
    else if (mark >= 80) cout << "Equivalent letter grade is BB" << endl;
    else if (mark >= 75) cout << "Equivalent letter grade is CB" << endl;
    else if (mark >= 70) cout << "Equivalent letter grade is CC" << endl;
    else if (mark >= 60) cout << "Equivalent letter grade is DC" << endl;
    else if (mark >= 50) cout << "Equivalent letter grade is DD" << endl;
    else if (mark >= 40) cout << "Equivalent letter grade is FD" << endl;
    else cout << "Equivalent letter grade is FF" << endl;


//Q13. Write a C++ program that uses a while loop to print the numbers from 10 to 1 in descending order.
    int i = 10;
    while (i >= 1) {
        cout << i << " ";
        i--;
    }



    //Q14. Write a C++ program that uses a for loop to print all the even numbers between 1 and 50, and also counts how many even numbers there are.
    int count = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal even numbers: " << count << endl;


    //Q15. Write a C++ program that uses a for loop to take 4 numbers as input from the user and calculates their total sum.
    //Gringa
    double num, sum = 0;
    for (int i = 1; i <= 4; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << "The total sum is: " << sum << endl;


    //Q16. Write a C++ program that uses a for loop to take 5 numbers as input from the user and calculates the square of each number.
    double num;
    for (int i = 1; i <= 5; i++) {
        cout << "Enter number: ";
        cin >> num;
        cout << "Square is: " << num * num << endl;
    }


    // ⚡ Rule to remember:
    // If condition is <= → use i++
    // If condition is >= → use i--
//Q17. Write a C++ program that uses a for loop to print the numbers from 1 to 5 in ascending order, and then from 5 to 1 in descending order.
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;


    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

//Q18. Write a C++ program that uses a for loop to calculate the factorial of a given number.
    int n;
    int fact = 1;
    cout << "Enter an integer: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;



    Q19. Write a C++ program that uses a for loop to print the multiplication table of a given number.
    int num;
    cout << "Enter a number: "; cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }



    //Q20. Write a C++ program that uses a while loop to create a simple calculator that performs basic arithmetic operations (addition, subtraction, multiplication, division) based on user input. The program should continue to run until the user chooses to exit.
    double n1, n2;
    char op, choice = 'y';

    while (choice == 'Y' || choice == 'y') {
        cout << "Enter Number 1: "; cin >> n1;
        cout << "Enter number 2: "; cin >> n2;
        cout << "Enter operation sign (+, -, *, /): "; cin >> op;
        if (op == '+') cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        else if (op == '-') cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        else if (op == '*') cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        else if (op == '/') cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        cout << "Press Y or y to do another operation or any other key to exit: ";
        cin >> choice;
    }



    int low, high, oddCount = 0, evenCount = 0;
    int totalSum = 0, oddSum = 0, evenSum = 0;
    cout << "Enter lowest: "; cin >> low;
    cout << "Enter highest: "; cin >> high;
    int i = low;
    while (i <= high) {
        totalSum += i;
        if (i % 2 == 0) {
            evenCount++;
            evenSum += i;
        } else {
            oddCount++;
            oddSum += i;
        }
        i++;
    }
    cout << "There are " << oddCount << " odds and " << evenCount << " even numbers." << endl;
    cout << "The sum of all is " << totalSum << ", sum of even is " << evenSum << " and sum of odd is " << oddSum << endl;



//QLAB6 . Write a C++ program that generates two random numbers between 5 and 10, asks the user to guess their sum, and repeats the game if the guess is incorrect, allowing the user to play again by entering Y or y. If the guess is correct, display a “Congratulations” message and end the program.
  srand(time(0)); // seed random numbers
    char choice = 'Y';
    while (choice == 'Y' || choice == 'y') {
        int num1 = rand() % 6 + 5; // 5 - 10
        int num2 = rand() % 6 + 5; // 5 - 10
        int guess;
        cout << "Guess the sum of two numbers between 5 and 10: ";
        cin >> guess;

        int sum = num1 + num2;

        if (guess == sum) {
            cout << "Congratulations! Correct answer 🎉" << endl;
            break; // end program
        } else {
            cout << "Wrong! The correct sum was: " << sum << endl;
            cout << "Do you want to play again? (Y/y to continue): ";
            cin >> choice;
        }
    }


    //Qlab62 Write a C++ program that takes two numbers as input: the lowest and highest values. The program should print all odd numbers between these two values, with a maximum of 5 odd numbers printed per line. The program should continue printing until it reaches the highest number.
    int low, high;
    cout << "Enter lowest value: ";
    cin >> low;
    cout << "Enter highest value: ";
    cin >> high;

    int count = 0; // to track numbers per line

    for (int i = low; i <= high; i++) {
        if (i % 2 != 0) { // check if odd
            cout << i << " ";
            count++;

            if (count == 5) {
                cout << endl; // new line after 5 numbers
                count = 0;
            }
        }
    }

    return 0;
}
