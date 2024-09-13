CrackMes are challenge programs that are password protected, They test your skills on reverse engineering which is a very important component in cybersecurity. with reverse engineering you are able to find juicy details inside of applications. vulnerable functions, keys, or maybe hidden endpoints if its webapp source code.

Disassemblers are special programs that allow you to take a programs apart and see how it works. at this stage you are able to create breakpoints which is like pressing the pause button at certain points in the programs execution. this allows you to edit the instruction pointer (a special holder for pointing you different places in code) to an address after an if statement where you basically skip the password check, ultimately cracking the software 

This is a quick tutorial on cracking a crackme for CTFs. It could be very simple or very hard to hack a crackme because there could be different security measures. for this exercise I'll show a very simple example, Usually all it takes is for you to disassemble the program and find the key inside, or you can do a bit more leg work with editing the control flow using the disassembler to edit the values during execution.

To keep it as simple as possible we'll try to find the key by pure disassembling.

It can be as simple as running strings to find the key



![Screenshot from 2024-09-11 17-34-16](https://github.com/user-attachments/assets/c2c7e097-1e5a-4c78-8487-a9c6f40c1237)



Or you can find it using a disassembler such as radare2



![Screenshot from 2024-09-11 17-43-07](https://github.com/user-attachments/assets/56739104-249a-4ca0-9429-738df45f912d)




Try it yourself, use `strings crackme` and you should be able to get the flag, it'll , also try to edit the control flow using gdb (HINT: make use of breakpoints and instruction pointer editing).
