# two pointer approach 

#### What is it:
- instead of one index, use two
- work remains the same
- time gets halved
- example: two people at diff levels in a building
#### When to use it:
- Arrays / LLs
- sorted / want to sort data
- merge / duplicate / rearrange 
- detect cycle / or want to find cycle
- pair / triplets / quads
- "do not use extra space"
- CANNOT be used if asked to return index as output in an unsorted array
##### Solo Execs:
1. [[005-ltcd-two-sum-ii.cpp]] - SIL: vectors are 0-indexed so initialize pointers as `i = 0` and `j = n - 1` only (how you'd do it normally), and since question mentioned 1-indexed, just add one to the indices when returning. Also compiler needs a fall-back `return {}` statement even if it says that it doesn't.


