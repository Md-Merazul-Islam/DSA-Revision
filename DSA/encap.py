class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # Private variable (encapsulated)
        self._prod_balance = balance
        self.pub_balance = balance

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount

    def get_balance(self):
        return self.__balance



# Usage
acc = BankAccount(1000)
# acc.deposit(500)
# acc.withdraw(300)

print(acc.get_balance())  # Output: 1200

# Trying to access private variable directly
print(acc.__balance)  # ❌ This will throw an error
# print(acc._prod_balance)
print(acc.pub_balance)
