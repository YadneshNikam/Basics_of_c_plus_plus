Experiment 5: C++ Decision Making Statements

Aim:
To study and implement **C++ decision making statements**, including `if`, `else if`, `else`, and `switch` statements, for controlling the program flow based on conditions.

Tools:VScode

Theory
Decision making statements in C++ allow a program to take different actions depending on conditions. The primary statements used for this purpose include:

- if statement: Executes a block if a specified condition is true.
    if (condition) {
        // code to execute if condition is true
    }
  
- else statement: Executes a block if the preceding `if` statement is false.
    if (condition) {
        // code if condition is true
    } else {
        // code if condition is false
    }
- else if statement: Checks multiple conditions in sequence.
    if (condition1) {
        // code
    } else if (condition2) {
        // code
    } else {
        // code
    }
    
- switch statement: Evaluates an expression and executes corresponding `case` blocks.
    switch(expression) {
        case constant1:
            // code block
            break;
        case constant2:
            // code block
            break;
        default:
            // default code block
    }
    
Typical uses include checking if a number is odd, even, or zero; finding the largest of three numbers; and creating menu-driven programs such as day-of-the-week selectors or calculator programs. The `break` and `default` keywords are often used in `switch` statements to control the flow and handle default actions.

Conclusion:
In this experiment, we successfully implemented C++ decision making constructs (if, if-else, else-if, and switch), enabling the program to take logical paths based on conditions. These control statements are essential for writing interactive, dynamic, and real-world applications.

Algorithms:

 1. Vowel or Consonant Checker

Algorithm:
1. Start.
2. Prompt the user to enter a character.
3. Read the input character.
4. Check if the character is one of 'a', 'e', 'i', 'o', or 'u':
   - If yes, display "The character is a vowel."
5. Else, check if the character is between 'a' and 'z' (i.e., a lowercase alphabet letter):
   - If yes, display "The character is a consonant."
6. Else, display "The character is neither a vowel nor a consonant."
7. Stop.

 2. Greatest of Three Numbers

Algorithm:
1. Start.
2. Prompt the user to enter three integers.
3. Read the three integers.
4. If the first number is greater than or equal to both the second and third numbers:
   - Display that the first number is the greatest.
5. Else if the second number is greater than or equal to both the first and third numbers:
   - Display that the second number is the greatest.
6. Else:
   - Display that the third number is the greatest.
7. Stop.



3. Menu Driven Menu (Nested Switch Statements)

Algorithm:
1. Start.
2. Display the main menu options (Biryani, Pizza, Pasta, Salad).
3. Prompt the user to enter their choice (1-4).
4. Read the user's choice.
5. Use a switch statement to process the main choice:
   - For each main option, display the corresponding submenu.
   - Prompt for a submenu choice.
   - Read the submenu choice.
   - Use a nested switch statement to process the submenu selection and display the appropriate message.
6. If the main choice or submenu choice is invalid, display an error message.
7. Stop.
 
 
 
4. Odd or Even Number Checker

Algorithm:
1. Start.
2. Prompt the user to enter an integer.
3. Read the integer.
4. Compute the remainder when the number is divided by 2.
   - If the remainder is 0, display that the number is even.
   - Else, display that the number is odd.
5. Stop.


5. Calculator Using Switch Case

Algorithm:
1. Start.
2. Display the calculator menu (Addition, Subtraction, Multiplication, Division).
3. Prompt the user to enter a choice (1-4).
4. Read the choice.
5. Prompt the user to enter two numbers.
6. Read the two numbers.
7. Use a switch statement to perform the selected operation:
   - If Addition, add the numbers and display the result.
   - If Subtraction, subtract the numbers and display the result.
   - If Multiplication, multiply the numbers and display the result.
   - If Division, check if the second number is not zero:
     - If not zero, divide the numbers and display the result.
     - Else, display a division by zero error.
   - If the choice is invalid, display an error message.
8. Stop.


