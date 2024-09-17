"""
Just trying to make my own gobuster in python
attemp to brute force dir
:3
"""

#might add a thread pull executor later.

import requests

#reading the file 
def read_file(filename):
    with open(filename, 'r') as f:
        commondir = [line.strip() for line in f.readlines()]
    return commondir

target = input("Specify Targets IP or Url :3 :  ")

filename = 'wordweblist.txt'
commondir = read_file(filename)
counter = 0
# print(commondir)

print("Please wait this mughty take a while :P")

for dir in commondir:
    target_addr = f"{target}/{dir}"
    response = requests.get(target_addr)
    if response.status_code == 200:
        print (f"{target_addr} - Success")
        counter += 1
    else:
        pass # does nothing 

print(f"Total directories found: ", {counter})