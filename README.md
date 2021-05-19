# HELP WALTER WHITE
## Problem
Walter White is working on getting a new chemistry invention on his name, but he needs your help to do it. He has already prepared N solutions, each possessing strength si (1<=si<=1e9). 
He needs to club all these solutions together by performing an operation every time on each present set of chemicals.
The operation involves taking some portion of two adjacent chemicals and mixing them to create a new solution, and this new solution gets the strength value of the XOR of the constituent solutions it was made up of.
For example, mixing s[i] and s[i+1] will give you a new solution with strength of s[i]^s[i+1].

The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite( 0^1 or 1^0), other wise the result is 0 (0^0 or 1^1) It is denoted by ^

He performs this operation K times on the initial chemicals present, and lastly has some a smaller set of chemicals left. He wants to find out the strength of the Pth chemical solution. (P is 0 indexed) Can you help him?

 

## Input Format

3 lines containing N, K, P respectively.

1 line containing the already made N solutions

## Output Format

1 number containing the strength of the Pth chemical solution after K rounds of mixing.

## Constraints

1<=N<=1e5
1<K<N
0<=P<N-K
1<=S[i]<=1e9

## OBSERVATION:
For question 2, we can get all the indexes whose elements needs to be XORed to get the answer by
using the binary representation of k.(Observation)
## EXPLANATION:
For example, if k = 6, i.e., 0110, from this we try to get all the numbers we can form using only the set
bits of the number.
Here, we can from 0, 2, 4, 6 (0000, 0010, 0100, 0110) by using set bits of 6.
In case of k = 7, i.e., 0111, we can from 0, 1, 2, 3, 4, 5, 6, 7 by using set bits of 7.
Similarly for any k which is a power of 2, we can only form, 0 and k itself. For example, using k = 8
(1000), we can get 0 and 8.
After we get the indexes, we add these indexes to p and XOR all the values at those indexes.
If k = 6, we will have the answer as (a[p+0] ^ a[p+2] ^ a[p+4] ^ a[p+6])
Similarly for k = 8, we have answer as (a[p+0] ^ a[p+8])
