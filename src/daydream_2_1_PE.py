# 2021.08.31
# Shuddho Sharaf

# Contributors:

#   Ilham Daiee Muntahi:
#       He helped me with the procedure, also helped me a lot
#       while we were setting up the exit system.
#   Afia Farzana Priontee:
#       She taught me the algorithm, the core of this program.

# Changelog:

#   Finally! I got rid of the bug. It works fine though it might
#   not be the cleanest program.


days = ["\nSaturday", "\nSunday", "\nMonday",
        "\nTuesday", "\nWednesday", "\nThursday", "\nFriday"]


def set_result(a,  b,  c,  d,  e,  f,  g):
    if (day_code == a):
        print(days[0])
    elif (day_code == b):
        print(days[1])
    elif (day_code == c):
        print(days[2])
    elif (day_code == d):
        print(days[3])
    elif (day_code == e):
        print(days[4])
    elif (day_code == f):
        print(days[5])
    elif (day_code == g):
        print(days[6])


while True:

    print("\nDaydream")

    while True:
        try:
            date = int(input("\nEnter date (1-31): "))
            break
        except ValueError:
            print("\nInvalid!")
    while not(date in range(1, 32)):
        try:
            print("\nInvalid!")
            date = int(input("\nEnter date (1-31): "))
            if date in range(1, 32):
                break
            else:
                print("\nInvalid!")
                date = int(input("\nEnter date (1-31): "))
        except ValueError:
            continue

    if (date in range(1, 32)):
        while True:
            try:
                month = int(input("\nEnter month (1-12): "))
                break
            except ValueError:
                print("\nInvalid!")
        while not(month in range(1, 13)):
            try:
                print("\nInvalid!")
                month = int(input("\nEnter month (1-12): "))
                if month in range(1, 13):
                    break
                else:
                    print("\nInvalid!")
                    month = int(input("\nEnter month (1-12): "))
            except ValueError:
                continue

        if (month in range(1, 13)):
            if (month == 1 or month == 10):
                month_code = 0
            elif (month == 5):
                month_code = 1
            elif (month == 8):
                month_code = 2
            elif (month == 2 or month == 3 or month == 11):
                month_code = 3
            elif (month == 6):
                month_code = 4
            elif (month == 9 or month == 12):
                month_code = 5
            elif (month == 4 or month == 7):
                month_code = 6

            while True:
                try:
                    year = int(input("\nEnter year (1600-2199): "))
                    break
                except ValueError:
                    print("\nInvalid!")
            while not(year in range(1600, 2200)):
                try:
                    print("\nInvalid!")
                    year = int(input("\nEnter year (1600-2199): "))
                    if year in range(1600, 2200):
                        break
                    else:
                        print("\nInvalid!")
                        year = int(input("\nEnter year (1600-2199): "))
                except ValueError:
                    continue

            # year = int(input("Enter year (1600-2199): "))

            # while not(year in range(1600, 2200)):
            #     print("Invaild!")
            #     year = int(input("Enter year again (1600-2199): "))

            if (year in range(1600, 2200)):
                if (year in range(1600, 1700)):
                    delta_year = year - 1600
                elif (year in range(1700, 1800)):
                    delta_year = year - 1700
                elif (year in range(1800, 1900)):
                    delta_year = year - 1800
                elif (year in range(1900, 2000)):
                    delta_year = year - 1900
                elif (year in range(2000, 2100)):
                    delta_year = year - 2000
                elif (year in range(2100, 2200)):
                    delta_year = year - 2100

                day_code = int((int(date) + month_code +
                                delta_year + (delta_year / 4)) % 7)

                if (year in range(1600, 1700)):
                    set_result(3, 4, 5, 6, 0, 1, 2)
                elif (year in range(1700, 1800)):
                    set_result(4, 5, 6, 0, 1, 2, 3)
                elif (year in range(1800, 1900)):
                    set_result(5, 6, 0, 1, 2, 3, 4)
                elif (year in range(1900, 2000)):
                    set_result(6, 0, 1, 2, 3, 4, 5)
                elif (year in range(2000, 2100)):
                    set_result(0, 1, 2, 3, 4, 5, 6)
                elif (year in range(2100, 2200)):
                    set_result(1, 2, 3, 4, 5, 6, 0)

    exit_code = input("\nEnter 'q' to quit or 'c' to continue: ")

    if exit_code == "q":
        break
    elif exit_code == "c":
        continue
    else:
        while not (exit_code == "q" or exit_code == "c"):
            print("\nUnacceptable!")
            exit_code = input("\nTry either 'q' or 'c': ")
