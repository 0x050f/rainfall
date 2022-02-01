char language[2]; //0x8049988
void greetuser(char *s)
{
	//variable 46 66?
//met de la place pour 88
	if (language == 1) //+11 +14
	{
		buffer = "Hyv\303\244\303\244 p\303\244iv\303\244\303\244 "; //+54
	}
	else if (language == 2) //+16 +19
	{
		buffer = "Goedemiddag! ";
	}
	else if (language == 0) //+25
	{
		buffer = "Hello";
	}
	strcat(buffer, s); //+147
	puts(buffer); //+158
}
int main(void)
{
	char buffer[73]; //0xbffffee3
	char buf[2];
	if (ac != 3) //+15 +26
	{
		return 1;
	}

	strncpy(&buffer[80], av[1], 40);//+51 +78

	strncpy(&buffer[120], av[2], 32);//+83 +113

	if (getenv("LANG") == 0) //+118 +145
	{
		return (19); // ??
	}

	if (memcmp(buffer,"fi", 2) == 0)//+147 +173   0x804873d
	{
		return (19); // ???
	}
	if (memcmp(buffer, "nl", 2) == 0)//+194 +220 0x8048740
	{
		return (19);
	}

	greetuser(buffer);//		+258

	return 0;
}
