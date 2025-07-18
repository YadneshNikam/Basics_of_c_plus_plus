Experiment 2:To study and implement C++ Program Structure (Data Types)

Aim:  
To study and implement the basic structure of a C++ program using fundamental data types and understand different storage classes.

Tool: VScode

Theory:
1. Data Types in C++:
Data types define the type and size of data a variable can store. They help in efficient memory usage and data manipulation.

Basic Data Types:  
  int, float, double, char, bool, void, wchar_t
  
Size & Range (Typical):  
  - int: 4 bytes (−2,147,483,648 to 2,147,483,647)  
  - float: 4 bytes (6 decimal places)  
  - double: 8 bytes (15 decimal places)  
  - char: 1 byte (−128 to 127)  
  - bool: 1 byte (true or false)  
  - wchar_t: 2 or 4 bytes (wide characters)

- Variables must be declared with a data type before use.

2. Storage Classes in C++:

Storage classes define a variable’s scope, lifetime, and linkage.

- auto: Default for local variables.  
- register: Suggests storing in CPU register.  
- static: Retains value between function calls or restricts visibility.  
- extern: Refers to variables defined in other files.  
- mutable: Allows modification of class members in a const object.

Conclusion:  
Data types and storage classes are core concepts in C++. They ensure proper memory allocation and control variable visibility and lifetime, which are crucial for writing efficient and maintainable programs.
