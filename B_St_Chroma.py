def solve():
    # Read number of test cases
    t = int(input())
    
    # Iterate over each test case
    for _ in range(t):
        # Read the inputs for each test case
        n, x = map(int, input().split())
        
        # Create a permutation where we maximize the number of occurrences of color x
        p = list(range(n))  # Create a list from 0 to n-1 (the basic permutation)
        
        if x == n - 1:
            # If x is n-1, we just print the reverse of the basic permutation.
            # Because MEX(0..n-1) will give n as the first missing number, 
            # which will appear at the last cell, maximizing its count.
            print(*p[::-1])
        else:
            # For other cases, we will shift the xth element to the front
            # to maximize the number of occurrences of color x
            p.remove(x)
            p = [x] + p  # Put x at the beginning of the list
            print(*p)

# Run the solve function
solve()
