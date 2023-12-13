stack = []

def push(value):
    try:
        stack.append(int(value))
    except ValueError:
        print("Error: usage: push integer")
        exit(1)

def pall():
    if len(stack) > 0:
        for value in reversed(stack):
            print(value)
