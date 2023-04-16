//TIME COMPLEXITY
/*
--> It is the Amount of time taken by an algorithm to run
--> IN WHAT FORM?
--> As a Function of length of input 
--> WHY IT IS NEEDED?
--> For Making Better Programs 
--> For Comparison of Algos

--> BIG O NOTATION (FOR UPPER BOUND)
It is used to calculate the time complexity in worst case
--> THETA (FOR AVG-CASE COMPLEXITY)
--> OMEGA (FOR LOWER BOUND)

--> Constant Time -> O(1)
--> Linear Time -> O(n)
--> Logarithmic Time -> O(log n)
--> Quadratic Time -> O(n^2)
--> Cubic Time -> O(n^3)

    O(N!)    ^   HIGHEST TIME COMPLEXITY
    O(2^n)   |
    O(N^3)   |
    O(N^2)   |  Complexity in Increasing Order
    O(NLOGN) |
    O(N)     |
    O(LOGN)  |
    O(1)     |   LEAST TIME COMPLEXITY

--> If there is nested loop then time complexities
are multiplied & If the loops are diff then time complexities
are added 

--> STUCK IN TLE
10^8 OPERATION RULE -> Most of the Modern Machines can perform 10^8 Operations/second


    < [10..11]   O(n!) , O(n^6)
    < [15..18]   O(2^n * n^2)
    < 100        O(n^4)
    < 400        O(n^3)
    < 2000       O(n^2*log n)
    < 10^4       O(n^2)
    < 10^6       O(nlogn)
    < 10^8       O(n) , O(log n)

    --->  Worst-Case Analysis: The worst-case consists of the input for which the algorithm takes the longest time to complete its execution. 
    • Best Case Analysis: The best case consists of the input for which the algorithm takes the least time to complete its execution. 
    • Average case: The average case gives an idea about the average running time of the given algorithm.

*/

//SPACE COMPLEXITY
/* It is the amount of memory taken by an algorithm
*/