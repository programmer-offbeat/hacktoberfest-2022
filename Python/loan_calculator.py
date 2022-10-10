from matplotlib import pyplot

#  Head to Loan Calculator Application
print("**"*50)

# Welcome message.
print("Welcome To Head to Loan Calculator Application.")


def get_loan_info():
    loan = {}
    loan["principal"] = float(input("\nEnter loan amount: "))
    loan["rate"] = float(input("Enter the interest rate: "))/100
    loan["monthly payment"] = float(input("Enter the monthly payment: "))
    loan["money paid"] = 0
    return loan


def show_loan_info(loan, months):
    print(f"\n----Loan information after {months} months----\n")
    for key, value in loan.items():
        print(f"{key}: {value}")


def collect_interest(loan):
    loan["principal"] += loan["principal"]*loan["rate"]/12.


def make_monthly_payment(loan):
    loan["principal"] -= loan["monthly payment"]

    if loan["principal"] > 0:
        loan["money paid"] += loan["monthly payment"]
    else:
        loan["money paid"] += loan["monthly payment"]+loan["principal"]
        loan["principal"] = 0


def summarize_loan(loan, month_num, intl_principal):
    print(f"\nCongratulations! You paid off your loan in {month_num} months!")
    print(
        f"Your initial loan was {intl_principal} Rs at a rate of {100*loan['rate']}%.")
    print(f"Your monthly payment was {loan['monthly payment']} Rs.")
    print(f"You spent {round(loan['money paid'],2)} Rs total.")

    interest = round(loan['money paid'] - intl_principal, 2)
    print(f"You spent {interest} on interest!")


def create_graph(data, loan):
    x_val = []
    y_val = []

    for i in data:
        x_val.append(i[0])
        y_val.append(i[1])

    pyplot.plot(x_val, y_val)

    # Give the plot a descriptive title.
    pyplot.title(str(100*loan['rate']) + "%"+"Interest" +
                 " With "+str(loan['monthly payment']) + " Monthly Payment")

    # Label your x axis.
    pyplot.xlabel("monthly payment")

    # Label your y axis.
    pyplot.ylabel("Principal of Loan")

    # Show the created graph.
    pyplot.show()


def main():
    month_num = 0
    loan = get_loan_info()
    sarting_principal = loan["principal"]
    data_to_plot = []

    show_loan_info(loan, month_num)

    input("\nPress 'Enter' to begin paying off your loan.")

    while loan["principal"] > 0:
        if loan["principal"] > sarting_principal:
            break

        month_num += 1

        collect_interest(loan)
        make_monthly_payment(loan)

        data_to_plot.append((month_num, loan['principal']))  # append tuple

        show_loan_info(loan, month_num)

    if loan['principal'] <= 0:
        summarize_loan(loan, month_num, sarting_principal)
        create_graph(data_to_plot, loan)
    else:
        print("\nYou will NEVER pay off your loan!!!")
        print("You cannot get ahead of the interest! :-(")


if __name__ == '__main__':
    main()

# End of programm.
print("\n\nThank you for using the Head to Loan Calculator Application. Goodbye.\n")
print("**"*50)
