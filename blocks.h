//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/luka/.config/dwmblocks/price.sh btc Bitcoin 💰", 9000, 22},
	{"", "/home/luka/.config/dwmblocks/price.sh eth Ethereum 🍸", 9000, 23},
	{"",	"/home/luka/.config/dwmblocks/price.sh xmr \"Monero\"🔒", 9000, 24},
	{"", "/home/luka/.config/dwmblocks/music.sh", 0, 10},
	{"", "/home/luka/.config/dwmblocks/brightness.sh", 0, 10},
	{"", "/home/luka/.config/dwmblocks/time.sh",60,0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
