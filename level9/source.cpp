#include <cstring>
#include <unistd.h>
class N {

	int _n;
	char _s[104];

	public:

	N(int n) {
		_n = n;
	}

	void setAnnotation(char *s) {
		memcpy(_s, s, strlen(s));
	}

	void operator+(N &n2) {
		_n += n2._n;
	}
};

int		main(int ac, char **av)
{
	void *machin; // 0x18
	void *truc; // 0x1c

	if (ac == 1) //+10
		exit(1); //+14
	truc = new N(5); //+28 +53
	machin = new N(6); //+58 +87
	truc->setAnnotation(av[1]);
	machin + truc;
}
