def add(a,b):
    return a + b

def subtract(a,b):
    return a - b

def multiply(a,b):
    return a*b

def divide(a,b):
    if b == 0:
        return "Error: Cannot divide by zero"
    return a/b

def main():
    while True:
        print("\n-------Calculator-------")
        print("1. Addition")
        print("2. Subtraction")
        print("3. Multiplication")
        print("4. Division")
        print("5. Exit")

        choice = input("Choose an option: ")

        if choice in ("1","2","3","4"):
            try:
                num1 = float(input("Enter the First Number: "))
                num2 = float(input("Enter the Second Number: "))
            except ValueError:
                print("Invalid number entered")
                continue 

            if choice == "1":
                result = add(num1, num2)
            elif choice == "2":
                result = subtract(num1, num2)
            elif choice == "3":
                result = multiply(num1, num2)
            elif choice == "4":
                result = divide(num1, num2)

            print(f"Result = {result}")

        elif choice == "5":
            print("Exiting Calculator.....")
            break
        else:
            print("Invalid Choice! Try again.")

if __name__ == "__main__":
    main()