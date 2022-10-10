#  Bank Deposit and Withdrawal Program
print("**"*50)

# Welcome message.
print("Welcome To Bank Deposit and Withdrawal Program.")


def get_info():
    print("\nWelcome to the Python First National Bank.")

    name = input("\nEnter your name:")
    s_account = int(
        input("How much money would you like to set up your savings account with: "))
    c_account = int(
        input("How much money would you like to set up your checking account with: "))

    bank_account = {"name": name,
                    "savings": s_account,
                    "checking": c_account,
                    }

    return bank_account


def make_deposit(bank_account, account, money):
    bank_account[account] += money
    print(f"\nDeposited {money}rs into {bank_account['name']}'s {account} account.")


def make_withdrawal(bank_account, account, money):
    if bank_account[account]-money > 0:
        bank_account[account] -= money
        print(f"\nwithdraw {money}rs from {bank_account['name']}'s {account} account.")
    else:
        print(
            f"\nSorry by withdrawing {money}rs you will have negative balence.")


def display_info(bank_account):
    print("\ncurrent account information:")
    for key, value in bank_account.items():
        #if it is name of person
        if key == "name":
            print(key, ":", value)
        # else it is an amount therefore rs
        else:
            print(key,": "+str(value)+" Rs")


def main():
    my_account = get_info()
    active = True

    while active:
        display_info(my_account)

        type_of_account = input(
            "\nWhat account would you like to access (Savings or Checking): ").strip().lower()
        type_of_trans = input(
            "What type of transaction would you like to make (Deposit or Withdrawal): ").strip().lower()
        amount = int(input("How much money: "))

        if type_of_account == "savings" or type_of_account == "checking":
            if type_of_trans == "deposit":
                make_deposit(my_account, type_of_account, amount)
            elif type_of_trans == "withdrawal":
                make_withdrawal(my_account, type_of_account, amount)
            else:
                print("I'm sorry, we cannot do that for you today.")
        else:
            print("I'm sorry, we cannot do that for you today.")

        # Continue or not
        Choice = input(
            "\nWould you like to run the program again (y/n): ").lower().strip()
        if Choice.startswith("y"):
            continue
        elif Choice.startswith("n"):
            display_info(my_account)
            active = False
        else:
            print("Please choose y/n only!")
            display_info(my_account)
            break


if __name__ == "__main__":
    main()

# End of programm.
print("\n\nThank you for using the Bank Deposit and Withdrawal Program. Goodbye.\n")
print("**"*50)
