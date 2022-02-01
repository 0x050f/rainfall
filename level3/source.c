int m;
void v()
{
	char p[520];
	fgets(p, 512, stdin);
	printf(p);
	if (m == 64)
	{
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
}

int main(void)
{
	v();
	return 0;
}
