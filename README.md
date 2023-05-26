0x19. C - Stacks, Queues - LIFO, FIFO
This is a team project by David Akabogu and Adama Famous, students of Software Engineering at Alx Holberton school.
Description
The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files
Files containing Monty byte codes usually have the `.m` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$

Environment
 Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=c89

Compilation & Output
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

* *Operation codes and their usage:*

Opcode	Description
push	Pushes an element to the stack. e.g (push 1 # pushes 1 into the stack)
pall	Prints all the values on the stack, starting from the to of the stack.
pint	Prints the value at the top of the stack.
pop	Removes the to element of the stack.
swap	Swaps the top to elements of the stack.
add	Adds the top two elements of the stack. The result is then stored in the second node, and the first node is removed.
nop	This opcode does not do anything.
sub	Subtracts the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.
div	Divides the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.
mul	Multiplies the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.
mod	Computes the remainder of the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.
#	When the first non-space of a line is a # the line will be trated as a comment.
pchar	Prints the integer stored in the top of the stack as its ascii value representation.
pstr	Prints the integers stored in the stack as their ascii value representation. It stops printing when the value is 0, when the stack is over and when the value of the element is a non-ascii value.
rotl	Rotates the top of the stack to the bottom of the stack.
rotr	Rotates the bottom of the stack to the top of the stack.
stack	This is the default behavior.It sets the format of the data into a stack (LIFO).
queue	Sets the format of the data into a queue (FIFO).

Tasks
0. push, pall
Implement the push and pall opcodes.
The push opcode
The opcode push pushes an element to the stack.
1. pint
Implement the pint opcode.
The pint opcode
The opcode pint prints the value at the top of the stack, followed by a new line.
2. pop
Implement the pop opcode.
The pop opcode
The opcode pop removes the top element of the stack
3. swap
Implement the swap opcode.
The swap opcode
The opcode swap swaps the top two elements of the stack.
4. add
Implement the add opcode.
The add opcode
The opcode add adds the top two elements of the stack.
5. nop
Implement the nop opcode.
The nop opcode
The opcode nop doesn’t do anything.
6. sub
Implement the sub opcode.
The sub opcode
The opcode sub subtracts the top element of the stack from the second top element of the stack.
7. div
Implement the div opcode.
The div opcode
The opcode div divides the second top element of the stack by the top element of the stack.
8. mul
Implement the mul opcode.
The mul opcode
The opcode mul multiplies the second top element of the stack with the top element of the stack.
9. mod
Implement the mod opcode.
The mod opcode
The opcode mod computes the rest of the division of the second top element of the stack by the top element of the stack.
10. comments
Every good language comes with the capability of commenting. When the first non-space character of a line is #, treat this line as a comment (don’t do anything).
11. pchar
Implement the pchar opcode.
The pchar opcode
The opcode pchar prints the char at the top of the stack, followed by a new line.
12. pstr
Implement the pstr opcode.
The pstr opcode
The opcode pstr prints the string starting at the top of the stack, followed by a new line.
13. rotl
Implement the rotl opcode.
The rotl opcode
The opcode rotl rotates the stack to the top.
14. rotr
Implement the rotr opcode.
The rotr opcode
The opcode rotr rotates the stack to the bottom.
15. stack, queue
Implement the stack and queue opcodes.
The stack opcode

The opcode stack sets the format of the data to a stack (LIFO). This is the default behavior of the program.
The queue opcode

The opcode queue sets the format of the data to a queue (FIFO).
When switching mode:

The top of the stack becomes the front of the queue
The front of the queue becomes the top of the stack
16. Brainf*ck.
Write a Brainf*ck script that prints `School`, followed by a new line.
17. Add two digits
Add two digits given by the user.

Read the two digits from stdin, add them, and print the result
The total of the two digits with be one digit-long (<10)
18. Multiplication
Multiply two digits given by the user.

Read the two digits from stdin, multiply them, and print the result
The result of the multiplication will be one digit-long (<10)
19. Multiplication level up
Multiply two digits given by the user.
Read the two digits from stdin, multiply them, and print the result, followed by a new line
