# prime-in-c

Let me explain the code to you step by step:

We start by declaring the necessary variables: num to store the user input, i for the loop counter, and flag to indicate whether the number is prime or not.

We ask the user to enter a positive integer and store it in the num variable using the scanf() function.

We use a for loop to iterate through all numbers from 2 to half of the input number. This is because any number greater than half of the input number cannot be a factor of the input number.

Inside the loop, we check if the input number is divisible by the loop counter i. If it is, we set the flag variable to 1 and break out of the loop.

After the loop, we check if the input number is equal to 1. If it is, we print that 1 is neither prime nor composite.

If the input number is not equal to 1, we check the value of the flag variable. If it is 0, we print that the input number is prime. If it is 1, we print that the input number is not prime.

Finally, we return 0 to indicate successful completion of the program.
