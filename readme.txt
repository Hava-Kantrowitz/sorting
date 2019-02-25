Sorting Functions 

Homework for Systems 2303 at WPI, 2/25/19, by Hava Kantrowitz

The purpose of this assignment was to create various integer sorting functions in order to determine which
sorting method is the fastest. 

Sorttest:

The sorttest function takes a list of numbers read from the command line, and sorts them into 
descending order using array notation to access array elements.

User input: At least two integers

Sorttest2:

The sorttest2 function takes a count and a sorting function to use. It generates an array of length count of random numbers between 1 and 100
and sorts them according to the given sorting function. 

Function 1 uses array notation to access array elements.
Function 2 uses pointer notation to access array elements.
Function 3 uses incrementing pointer notation to access array elements. 

User input: An integer greater than 0 for the count
			1, 2, or 3, corresponding to which function the user wishes to use to sort
			
Testing

All tests performed with Sorttest2 function 

Test 1:
Array Size: 15000
Function 1 Time: Seconds: 1, Microseconds: 790636
Function 2 Time: Seconds: 0, Microseconds: 759756
Function 3 Time: Seconds: 0, Microseconds: 648037

Order(Fastest-Slowest): Function 3, Function 2, Function 1

Test 2:
Array Size: 30000
Function 1 Time: Seconds: 4, Microseconds: 878342
Function 2 Time: Seconds: 3, Microseconds: 724171
Function 3 Time: Seconds: 2, Microseconds: 727783

Order(Fastest-Slowest): Function 3, Function 2, Function 1

Test 3:
Array Size: 50000
Function 1 Time: Seconds: 10, Microseconds: 949109
Function 2 Time: Seconds: 10, Microseconds: 627022
Function 3 Time: Seconds: 7, Microseconds: 632720

Order(Fastest-Slowest): Function 3, Function 2, Function 1

Test 4:
Array Size: 70000
Function 1 Time: Seconds: 21, Microseconds: 438740
Function 2 Time: Seconds: 22, Microseconds: 351093
Function 3 Time: Seconds: 16, Microseconds: 637147

Order(Fastest-Slowest): Function 3, Function 1, Function 2

Test 5: 
Array Size: 100000
Function 1 Time: Seconds: 41, Microseconds: 741457
Function 2 Time: Seconds: 45, Microseconds: 893214
Function 3 Time: Seconds: 36, Microseconds: 702536

Order(Fastest-Slowest): Function 3, Function 1, Function 2

Conclusions

From the tests, I conclude that the fastest sorting algorithm is Sorting Function 3, 
followed by Sorting Function 2, and then Sorting Function 1.
