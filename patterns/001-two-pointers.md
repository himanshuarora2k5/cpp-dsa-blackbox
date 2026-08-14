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
2. [[006-ltcd-two-sum.cpp]] - SIL: brute force approach, should initialize `j = i + 1` instead of hardcoding it to `j = 1` so it doesn't overlap with `i` when `i` is at index 1
3. [[007-gfg-0s-and-1s.cpp]] - SIL: brute force didn't work, opt for pointers at both ends of the array, map out all possible states and write conditions accordingly. move the pointer that already has the correct element between 0 and 1
4. [[008-ltcd-rem-duplicate-sorted.cpp]] - SIL: two pointers dont necessarily mean two nested loops, here `i` was declared outside the loop and only updated it a unique `j` was found.


