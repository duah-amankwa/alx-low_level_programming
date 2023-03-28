This directory is on C programming Recursions

Recursion is a method where the solution to a problem depends on solutions to smaller instances of the same problem. A recursive function is a function that calls itself.

Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.

void recursion() {
   recursion(); /* function calls itself */
}

int main() {
   recursion();
}
The C programming language supports recursion, i.e., a function to call itself. But while using recursion, programmers need to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

Recursive functions are very useful to solve many mathematical problems, such as calculating the factorial of a number, generating Fibonacci series, etc.

