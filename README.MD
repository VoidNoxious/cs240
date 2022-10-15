# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. Called by Value (10 Points)

What it means called by value in C?
What are the values being passed when arguments are integer and char array respectively?

**Answer**: The function called by a value is when the function is given the values of its arguments in temporary variables. The values being passed are by value and by reference.

### 2. Scope (10 Points)

What is the scope of a variable in C? What's the usage of the
key word *extern* in C?

**Answer**: The scope of the variable is the area of the program where a variable can be referenced. Extern is used to define a variable outside the function and searches the external variable that is not within the function.

### 3. Static (10 Points)

What is the static key word means for an external and an internal variable?

**Answer**: For an external variable, the key word static retains and stores its values globally. For an internal variable, the key word static retains and stores its values between function calls.

### 4. Commandline Arguments (10 Points)

How to use commandline arguments in C? Give an example.

**Answer**: Commandline arguments are handled using the main() function arguments where argc refers to the number of arguments passed and argv[] refers to the pointer to each argument. For example, if you were to run a program and pass an argument from the commandline, argv[0] would print out the title of the program and argv[1] would print out the input from the commandline (Hello World -> PRINTS: Hello | "Hello World" -> PRINTS: Hello World).

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](Coding_2.MD) and [Source Code](coding_2.c)
