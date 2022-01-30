#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#define _GNU_SOURCE 

int main(int ac, char **av)
{
	
	char *s[2]; //esp + 0x10 and esp + 0x14
	uid_t uid; //esp + 0x18
	gid_t eid; //esp + 0x1c
	
	int ret = atoi(av[1]); //av[1] ebp+0x10
	if (ret == 423) {
		s[0] = strdup("/bin/sh");
		s[1] = NULL;
		eid = getegid();
		uid = geteuid();
		setresgid(eid, eid, eid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", s);
		return 0;
	}
	fwrite("No!\n", 1, 5, stderr);
	return 0;
}
