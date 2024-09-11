Just a quick tutorial on hacking a crackme for a ctf. It could be very simple or very hard to hack a crackme but I'll show a very simple example, Usually all it takes is for you to disassemble the program and find the key inside, or you can do a bit more leg work and you'll be able to edit the control flow using gdb or another dissembler to edit the values during execution.

it can be as simple as running strings to find the key



![Screenshot from 2024-09-11 17-43-07](https://github.com/user-attachments/assets/d4a214a6-6d35-4739-8e46-4f064f543420)



Or you can find it using a dissembler such as radare2




![Screenshot from 2024-09-11 17-34-16](https://github.com/user-attachments/assets/a004dfe6-7a37-4e1a-86be-e15f501b7978)




Try it yourself, using ``strings <FILENAME>`` and get the flag, also try to edit the control flow using gdb. 
