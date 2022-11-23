// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include <stdio.h>

int main() {

  int values[5];

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
---
convert code to forth 83


: main
   5 var values
   ." Enter 5 integers: "
   values @ 5 0 do
      i @ values + @
      ." %d" . cr
   loop
   ." Displaying integers: "
   values @ 5 0 do
      i @ values + @
      ." %d" . cr
   loop
;
main

---
explain each line

: main
   5 var values
   ." Enter 5 integers: "
   values @ 5 0 do
      i @ values + @
      ." %d" . cr
   loop
   ." Displaying integers: "
   values @ 5 0 do
      i @ values + @
      ." %d" . cr
   loop
;
main

This program defines a main function that takes 5 values from the user and stores them in an array. It then prints the elements stored in the array.

: main
   5 var values

This line defines the main function and creates an array called values with 5 elements.

." Enter 5 integers: "

This line prints the string "Enter 5 integers: " to the console.

values @ 5 0 do
   i @ values + @
   ." %d" . cr
loop

This loop takes input from the user and stores it in the array values. The loop runs 5 times, once for each element in the array.

." Displaying integers: "

This line prints the string "Displaying integers: " to the console.

values @ 5 0 do
   i @ values + @
   ." %d" . cr
loop

This loop prints the elements of the array values. The loop runs 5 times, once for each element in the array.
