listy = [12,34,45,67]

for i,num in enumerate(listy):
    print(i)
    print(num)

for i,num in enumerate(listy,start=52):#starts index value from 52 instead of 0
    print(i)
    print(num)

def square(x):
    return x*x

def isodd(x):
    return bool(x%2)

print([square(x) for x in listy]) #List comprehension as Maps
print(list(map(square,listy))) #usage of maps

#breakpoint() #how to use breakpoint at this point it will enter pdb debugger mode.

print([x for x in listy if isodd(x)]) #List comprehension as filter
print(list(filter(isodd,listy))) #usage of filter.

#format with strings
print(f"List values are as follows {listy}")

#usage of sorted
print(sorted(listy))
print(sorted(listy,reverse=True)) #reverse sorting

#complex sorting with key
animals = [
     {'type': 'penguin', 'name': 'Stephanie', 'age': 8},
     {'type': 'elephant', 'name': 'Devon', 'age': 3},
     {'type': 'puma', 'name': 'Moe', 'age': 5},
 ]

print(sorted(animals, key=lambda x: x['name']))  # sorting animals by age usage of lambda func.

#usage of set in some cases.
number = set()
number ={12,12,23,23,45,45}
number.add(45)
number.add(65)
print(number)

#list creation
l_x = [12,34,45,56,23,12]
l_x.append(45)
print(l_x)

#Usage of generators
'''
Swapping out the brackets changes your list comprehension into a generator expression. 
Generator expressions are perfect for when you know you want to retrieve data from a sequence,
 but you don’t need to access all of it at the same time.
'''
print(sum([i*i for i in range(1,100)]))
print(sum((i*i for i in range(1,100))))

#get a key detail from a list if present or give a custom message for a dictionary.
dict_x = {'name':'shree','age':34,'height':5.5}
print(dict_x.get('name','noname'))
dict_x = {'age':34,'height':5.5}
print(dict_x.get('name','noname'))
print(dict_x)
#setdefault does the same job but updates name column with new default value
print(dict_x.setdefault('name','noname'))
print(dict_x)

#Counter concept 
from collections import Counter
string_strm = "abc abc abc sdf sdf ert ert dfgh ui io"
string_list = string_strm.split()
string_dict = Counter(string_list)
print(string_dict)
print(string_dict.most_common(2))

#string library
import string
letter = "a"
print(letter in string.ascii_letters)
print(letter in string.ascii_uppercase)
print(letter in string.ascii_lowercase)
print(letter in string.digits)
print(letter in string.hexdigits)
print(letter in string.octdigits)
print(letter in string.punctuation)
print(letter in string.printable)
print(letter in string.whitespace)

#*args and **kwargs
def multifun(*args,**kwargs):
    print(args)
    print(kwargs)
multifun(1,2,3,4,'rt')
print('*****************')
multifun(1,2,3,4,t='rf',n='56')

ad= 34
print(f"ad:{ad}")




