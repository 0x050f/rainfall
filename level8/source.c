void *service;
void	*auth;

int main(void)
{
	char *s; //0x20

	while (1)
	{
		printf("%p, %p \n", auth, service);
		if (fgets(s, 128, stdin) != NULL)
		{
			if (strncmp(s, "auth ", 5) == 0) {
				auth = malloc(4);
				*auth = 0;
				if ( strlen(&s[5]) == 30) {
					strcpy(auth, &s[5]);
				}
			}
			if (strncmp(s, "reset", 5) == 0) {
				free(auth);
			}
			if (strncmp(s, "service", 6) == 0) {
				service = strdup(&s[7]);
			}
			if (strncmp(s, "login", 5) == 0) {
				if ((int)auth[32])
					system("/bin/sh");
				else
					fwrite("Password:\n", 1, 10, stdout);
			}
		}
	}
	return (0);
}
