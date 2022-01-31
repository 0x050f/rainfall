
class _Znwj {

	int _n;
	char _s[104];
	int _m;

	public:
	_Znwj(int n) : _n(n) {

	}
	_ZN1NC2Ei(int n) {
		_m = _ZN1plERS(_Znwj(n))
	}

	_ZN1NplERS(_Znwj obj) {
		_m += obj._m;
	}

	_ZN1N13setAnnotationEPc(char *s) {
		memcpy(_s, s, strlen(s));
	}
}

int		main(int ac, char **av)
{
	void *machin; // 0x18
	void *truc; // 0x1c

	if (ac == 1)
		exit(1);
	truc = new _Znwj(108); 
	truc._ZN1NC2Ei(5);
	machin = new  _Znwj(108);
	machin._ZN1NC2Ei(5);
	truc._ZN1N13setAnnotationEPc(av[1]);
	machin = truc;
}
