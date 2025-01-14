condition = ""

while condition.lower() != 'quit':
    condition = input(">")

    if condition == 'help':
        print("""
start - to start the car
stop - to stop the car
quit - to exit""")
    elif condition == '':
        print("no")