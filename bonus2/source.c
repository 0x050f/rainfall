int language; //0x8049988

void greetuser(char *s)
{
	char buffer[72];
	
	if (language == 1) //+11 +14
	{
		buffer = "Hyvää päivää "; //+54
	}
	else if (language == 2) //+16 +19
	{
		buffer = "Goedemiddag! ";
	}
	else if (language == 0) //+25
	{
		buffer = "Hello ";
	}
	strcat(buffer, s); //+147
	puts(buffer); //+158
}

int main(int ac, char *av)
{
	char buffer[72]; //0x50
	char *truc; //0x9c

	if (ac != 3) //+15 +26
		return 1;

	strncpy(&buffer[0], av[1], 40);//+51 +78
	strncpy(&buffer[40], av[2], 32);//+83 +113

	truc = getenv("LANG"); //+118 +145
	if (truc)
	{
		if (memcmp(truc,"fi", 2) == 0) //+147 +173
			language = 1;
		else if (memcmp(truc, "nl", 2) == 0) //+194 +220
			language = 2;
		greetuser(buffer); //+258
	}
	return (19);
}
