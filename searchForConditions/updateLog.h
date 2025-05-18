/*
* 2023/9/5 20:00
* 1. Incorrect results when testing the previous results of the algorithm Acorn. Currently we are debugging the code.
* 2. Add code to optimize the Ch component and Maj component of the Acorn algorithm in the callback expanding function.
* 
* 2023/9/5 20:44
* Update the code of reading final superpoly for Acorn.
* 
* 2023/9/6 16:22
* 1. Optimize the back expand code for Acorn.
* 2. Optimize the objective function in the solver code for Acorn.
* 
* 2023/9/7 8:53
* The optimized solver code for Acorn seems not work in server.
* 
* 2023/9/15 20:21
* 1. The problem of Acorn is solved.
* 2. Add code to test balancedness
* 
* 2023/9/18 8:52
* Adjust the solver time of Acorn to avoid the problem OOM 
* 
* 2023/9/28 21:29
* Add an individual function to evaluate the superpoly
* 
* 2023/10/23 15:09
* Add the support for defining different update functions for a cipher
* 
* 2023/12/10 18:32
* Add the code for guessing some key bits in the superpoly and then reduce the superpoly 
* 
* 2023/12/13 21:41
* Add the code of conditional cube with s0,...,s6 on Grain128-AEAD
* 
* 2023/12/25 9:19
* Adjust the midround to end - 1 when the rounds from start to end are all delta bits
* 
* 2024/1/17 22:11
* Add the code for analyzing multiple superpolies
* 
* 2024/1/18 5:47
* Correct the cost calculation function
* 
* 2024/3/12 21:04
* Add code for setting noncube variables to constants (need further verification, maybe there exists errors)
* 
* 2024/5/8 15:17
* Correcting a overflow bug when calculating the reducing cost
* 
* 2024/5/15 21:16
* Add supporting codes for Mobius transform that considers degree
* 
* 2024/6/12 22:55
* Add supporting codes for check if the p vars or mul of p vars are 0 
*/


