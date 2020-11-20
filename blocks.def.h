
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ♫ ",        "amixer get Master | awk -F'[][]' 'END{ print $2 }'",       0,   12},
	{"☼ ",         "light | cut -d . -f 1 | sed s/$/%/",                       0,   11},
	{"Mem: ",      "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",  30,  0},
	{"Battery: ",  "sed 's/.*/&%/' /sys/class/power_supply/BAT0/capacity",     10,  0},
	{"",           "date '+%b %d (%a) %R'",                                    5,   0},
	// {"",           "date '+%b %d (%a) %I:%M%p'",                               5,   0},
	// {"🔌",      "sed 's/.*/&%/' /sys/class/power_supply/BAT0/capacity",                10,  0},
	// {"♫🔊🎧",      "amixer get Master | awk -F'[][]' 'END{ print $2 }'",  0,   12},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " / ";
// static char delim[] = "›—‹";
static unsigned int delimLen = 5;
