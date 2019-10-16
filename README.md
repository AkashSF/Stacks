# Stacks
## Aim
    To implement stacks.
## Theory
    ->Stack is a simple data structure that allows adding and removing elements from only one end, its top end.
    ->It follows Last In First Out (LIFO).
### Operations
    1. push(): Check for stack overflow. Increment top of stack, and then add data.
    2. pop(): Check for stack underflow. Remove data, and then decrement top of stack.
## Algorithm
    1. Initialize top of stack as -1.
    2. For push(): Check if top = size -1. If not go to 3, else go to 4.
    3. Add data and increment top.
    4. Stack overflow.
    5. For pop(): If top = -1, stack underflow and exit; else remove data, and decrement pop.
