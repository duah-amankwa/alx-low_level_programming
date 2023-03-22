This file is on C programming functino pointers

Definition of a pointer
A pointer is a memory address.

A function pointer, also called a subroutine pointer or procedure pointer, is a pointer that points to a function. As opposed to referencing a data value, a function pointer points to executable code within memory.

Say you declare a variable named foo.

int foo;

This variable occupies some memory. On current mainstream Intel processors, it occupies four bytes of memory (because an int is four bytes wide).

Now let's declare another variable.

int *foo_ptr = &foo;

foo_ptr is declared as a pointer to int. We have initialized it to point to foo.

As I said, foo occupies some memory. Its location in memory is called its address. &foo is the address of foo (which is why & is called the “address-of operator”).

Think of every variable as a box. foo is a box that is sizeof(int) bytes in size. The location of this box is its address. When you access the address, you actually access the contents of the box it points to.

This is true of all variables, regardless of type. In fact, grammatically speaking, there is no such thing as a “pointer variable”: all variables are the same. There are, however, variables with different types. foo's type is int. foo_ptr's type is int *. (Thus, “pointer variable” really means “variable of a pointer type”.)

The point of that is that the pointer is not the variable! The pointer to foo is the contents of foo_ptr. You could put a different pointer in the foo_ptr box, and the box would still be foo_ptr. But it would no longer point to foo.
