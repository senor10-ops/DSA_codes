
Instead of writing many if..else statements, you can use the switch statement.

The switch statement selects one of many code blocks to be executed:


This is how it works:

The switch expression is evaluated once
The value of the expression is compared with the values of each case
If there is a match, the associated block of code is executed
The break statement breaks out of the switch block and stops the execution
The default statement is optional, and specifies some code to run if there is no case match

switch(grade){
      case 'A':
         printf("perfect!\n");
         break;
      case 'B':
         printf("You did good!\n");
         break;
      case 'C':
         printf("You did okay!\n");
         break;
      case 'D':
         printf("At least it's not an F!\n");
         break;
      case 'F':
         printf("YOU FAILED!\n");
         break;
      default:
         printf("Please enter only valid grades");
   }

    return 0;
