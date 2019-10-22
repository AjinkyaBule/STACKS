# STACKS
## AIM: To create a stack and perform following operations:
        (i) Push
        (ii) Pop
        (iii) Display
        (iv) Exit.
        
        
## ALGORITHM:
1) Start.
2) Take input from user for following operations:
      1. Push
      2. Pop
      3.  Display
      4. Exit.
3) Use the integer choice entered by user in switch case to call the  functions of respective operations.
4) Push: 
        if top==MAX-1 => stack is full
        else top=top+1; stack[top]= val.
5)Pop: 
       if top==-1 => stack is empty
       else print stack[top]; top--;
6) Display:
       if top==-1 => stack is empty
       else for(i=top;i>0;--i){
       print stack[i];}
7) Exit: in case of exit => exit(0);
8) Stop.
