# def factorial(n):    
#     if n < 0:
#         print("Negative number not allowed")
#     elif (n == 0) or (n == 1):        
#         print(n, "the factorial result is : 1")
#     else:        
#         result = 1
#         for i in range(1, n + 1):
#             result *= i
#         print(f"The factorial of {n} is: {result}")

# n = int(input("Enter the value of n: "))
# factorial()



def factorial_recursive(n):
    if n == 0 or n == 1: 
        return 1
        print("tumra ekta chagol")
    else:
        return n * factorial_recursive(n - 1)
        print("tumra ekta chagol")

# Example usage
num  = int(input("Enter the value of num: "))
print(f"Factorial of {num} (Recursive): {factorial_recursive(num)}")