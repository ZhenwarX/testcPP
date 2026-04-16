#include <iostream>
using namespace std;

int main() {

 // Q333. Write a C++ program that is printing the corresponding ASCII of each letter of your name. (Ex: Znar -> int(‘Z’), int(‘n’), int(‘a’), int(‘r’).
string name = "AHMED";
for (char c : name) {
    cout << "THE ASCII VALUE OF " << c << " IS: " << int(c) << endl;
}

 //Q4. Create a C++ program that asks the user for the total study hours and study days per week, then calculates and displays the average study hours per day.
double totalHours, days, average;
cout << "Enter total study hours: ";
cin >> totalHours;
cout << "Enter number of study days per week: ";
cin >> days;
average = totalHours / days;
cout << "Average study hours per day: " << average << endl;

    //Q6. Write a C++ program that asks the user to input two numbers (a and b) and calculates the following expression: (a^2 + b^2) / (2ab).
double a, b, result;
cout << "Enter first number (a): ";
cin >> a;
cout << "Enter second number (b): ";
cin >> b;
result = (a*a + b*b) / (2*a*b);
cout << "Result = " << result << endl;


    // Write a C++ program that generates a random number between 1 and 100, then prompts the user to guess the number. The program should provide feedback on whether the guess is too low, too high, or correct, and should continue until the user guesses the correct number.
    srand(time(0));
    int num1 = rand();           
    int num2 = rand() % 100;       
    int num3 = rand() % 36 + 5;
    cout << "1st random number: " << num1 << endl;
    cout << "2nd random number (0-99): " << num2 << endl;
    cout << "3rd random number (5-40): " << num3 << endl;


    //Q9. Write a C++ code that generate 3 random numbers between 1 - 100 and find the average of these random numbers.
    srand(time(0));
    int n1 = rand() % 36 + 5; 
    int n2 = rand() % 100 + 1;
    int n3 = rand() % 100 + 1;
    double average = (n1 + n2 + n3) / 3.0;
    cout << "Random number 1: " << n1 << endl;
    cout << "Random number 2: " << n2 << endl;
    cout << "Random number 3: " << n3 << endl;
    cout << "Average: " << average << endl;


    //Q10. Write a C++ program that asks the user to input the price of three items and a discount percentage. Then, calculate and display the total price before and after applying the discount.
    double price1, price2, price3, discountPercent;
    cout << "Enter price of item 1: ";
    cin >> price1;
    cout << "Enter price of item 2: ";
    cin >> price2;
    cout << "Enter price of item 3: ";
    cin >> price3;
    cout << "Enter discount percentage: ";
    cin >> discountPercent;
    double totalBefore = price1 + price2 + price3;
    double discountAmount = totalBefore * (discountPercent / 100.0);
    double totalAfter = totalBefore - discountAmount;
    cout << "Total before discount: " << totalBefore << endl;
    cout << "Total after discount: " << totalAfter << endl;


     //Q11. Write a C++ program that generates 4 random numbers in the following ranges: (7-13), (80-102), (63-82), and (23-47). Then, calculate and display the product of the first and third numbers, and the quotient of the second and fourth numbers.
    srand(time(0));
    int a = rand() % 7 + 7;    // 7-13
    int b = rand() % 23 + 80;  // 80-102
    int c = rand() % 20 + 63;  // 63-82
    int d = rand() % 25 + 23;  // 23-47
    cout << "a (7-13): " << a << endl;
    cout << "b (80-102): " << b << endl;
    cout << "c (63-82): " << c << endl;
    cout << "d (23-47): " << d << endl;
    cout << "a * c = " << a * c << endl;
    cout << "b / d = " << (double)b / d << endl;


    //Q12. Write a C++ program that generates two random numbers between 1 and 10, then prompts the user to enter the product of these two numbers. The program should check if the user's answer is correct and display an appropriate message.
    srand(time(0));
    int num1 = rand() % 10 + 1; // 1 to 10
    int num2 = rand() % 10 + 1; // 1 to 10
    int userAnswer;
    cout << "What is " << num1 << " x " << num2 << "? ";
    cin >> userAnswer;
    if (userAnswer == num1 * num2) {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong. The correct answer is " << num1 * num2 << endl;
    }
    
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
