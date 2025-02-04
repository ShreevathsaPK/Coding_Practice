def my_decorator(func):
    def wrapper():
        print("Before the function runs...")
        func()
        print("After the function runs...")
    return wrapper

@my_decorator
def say_hello():
    print("Hello, World!")

say_hello()









def decorator(fun):
    def wrapper():
        print("**")
        fun()
        print("**")
    return wrapper

@decorator
def sayhello():
    print("Hello")

sayhello()