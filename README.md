_This project has been created as part of the 42 curriculum by kkweon_

# PUSH_SWAP

## Description
Goal of this project is to sort series of random numbers into ascending order with minimum operation by using sorting algorithm with limited movements.

There are conditions to follow.
- Two stacks called a and b.
- **pa**: take top of the stack on stack b and put it on top of the stack a.
- **pb**: take top of the stack on stack a and put it on top of the stack b.
- **sa**: swap first two elements of stack a.
- **sb**: swap frist two elements of stack b.
- **ss**: sa and sb at same time.
- **ra**: shift up all the element of the stack a by one. top stack goes to bottom.
- **rb**: shift up all the element of the stack b by one. top stack goes to bottom.
- **rr**: ra and rb at same time.
- **rra**: shift down all the element of the stack a by one. bottom stack goes to top.
- **rrb**: shift down all the element of the stack b by one. bottom stack goes to top.
- **rrr**: rra and rrb at same time.

Input requirements: 
- No repeated numbers
    ```bash
    ./push_swap 1 0 1
    #return
    Error
    ```
- Only digits
    ```bash
    ./push_swap one 3 2
    #return
    Error
    ```
- INT MIN, INT MAX Overflow check
    ```bash
    ./push_swap 3 2 -2147483648
    #return
    Error
    ./push_swap 3 2 2147483647
    #return
    Error
    ```
- Spacings: the program should be able to accept multiple arguments or as a single string with space-separated numbers.
    ```bash
    ./push_swap 1 3 2
    ./push_swap "1 3 2"
    ```
- signs: each argument should only contain digits, and single + or - sign optionally
    ```bash
    ./push_swap +3 -1 0
    #Okay
    ./push_swap ++3 -1 0
    ./push_swap --3 +1 0
    #Error
    ```
---
**Struct**: Struct is a custom datatype which can store multiple different but related datatypes.
```C
typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
} t_node;
```
**Linked List**: Its a type of data structure where each element (node) points to next node forming a chain like structure.

---

### Algorithm
In this project Radix Sort is selected and implemented for sorting algorithm.

What is **Radix Sort**? \
Radix sort is a non-comparative sorting algorithm that sorts data with integer keys by processing individual digits or characters that share the same significant position and value. Unlike algorithms like quicksort or merge sort, it avoids direct comparison of elements, instead using a distribution process. [**Geek for Geek*](https://www.geeksforgeeks.org/dsa/radix-sort/)

---

## Instructions
```bash
# To compile
make

# To test program
./push_swap 3 1 2
./push_swap "3 1 2"

# To check with checker program
ARG="3 1 2"; ./push_swap $ARG | ./checker_linux $ARG

# To generate and test 
ARG=$(shuf -i 1-100 -n 100 | tr '\n' ' '); ./push_swap $ARG
ARG=$(shuf -i 1-100 -n 100 | tr '\n' ' '); ./push_swap $ARG | ./checker $ARG
```
---

## Resources
[Geek for Geeks - Struct](https://www.geeksforgeeks.org/c/structures-c/) \
[Geek for Geeks - Linked List](https://www.geeksforgeeks.org/c/linked-list-in-c/) \
[Geek for Geeks - Radix Sort](https://www.geeksforgeeks.org/dsa/radix-sort/)

---

_**LLMs (e.g., ChatGPT, Gemini, Claude)** were not used to for direct code generation. AI is used as supportive tools to understand concepts, programming logic, and to enhance learning efficiency._