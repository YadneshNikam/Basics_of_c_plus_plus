Experiment 5: C++ Decision Making Statements

Aim:
To study and implement **C++ decision making statements**, including `if`, `else if`, `else`, and `switch` statements, for controlling the program flow based on conditions[1].

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
    
Typical uses include checking if a number is odd, even, or zero; finding the largest of three numbers; and creating menu-driven programs such as day-of-the-week selectors or calculator programs. The `break` and `default` keywords are often used in `switch` statements to control the flow and handle default actions[1].

Conclusion:
In this experiment, we successfully implemented C++ decision making constructs (if, if-else, else-if, and switch), enabling the program to take logical paths based on conditions. These control statements are essential for writing interactive, dynamic, and real-world applications.
