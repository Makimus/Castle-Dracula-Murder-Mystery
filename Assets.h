#pragma once
#include <string>
#include <map>
#include <vector>

map<int, string> story = {
	{1, "In the DRACULA Castle 'BRAN', set in Romania, the BRAN Castle Museum has been closed for a private\n"
				"event held by Sir Alexandru Albescu.vA lavish banquet was in full swing. Distinguished nobles such as\n"
				"an old countess from Sweden and the Baroness from Holland had gathered to celebrate.\n\n"},
    {2 , "As the night progressed, some of the guests as well as the butlers and the maids would disappear,\n"
    			"causing a slight unease to fall amongst the revellers. Suddenly, Sir Alexandru Albescu let out a yell and\n"
				"collapsed, holding onto one of the castle's large silk banners as the goblet he held in his hand dropped\n"
				"creating a large sound which echoed through the room. The wine in the goblet spilled everywhere and panic\n"
				"rippled through the crowd as all the guests and all the maids and butlers stood in silence.\n\n"},
    {3, "Luckily, a young couple who were on their honeymoon, one of them happened to be a doctor.\n"
    			"Dr.Ella Newton was called to the body and after a short examination it was declared that Sir\n"
				"Alexandru Albescu had been poisoned...\n\n"},
	{4, "Whispers of conspiracy spread like wildfire amongst the hall.\n"
				"Suspicion fell upon all of the guests, each who harboured secrets and motives of their own...\n\n"},
	{5, "You, the inspector, were called immediately, and as you stepped through the gates of the\n"
				"imposing castle on the hill, you knew that nothing about this case would be simple...\n\n"}
};


/////////////////////ROOM ASSETS///////////////////////
/*
 * (map)nameRoom
 * (map)descriptionRoom
 */

std::map<std::string, std::string> nameRoom = {
    {"library", "King Ferdinand's Library"},
    {"throne", " The Vampire's Throne Room"},
    {"weapon", "The Royal Armory 'King Carol the First' "},

	{"marie", "Queen Marie's Apartment"},
    {"court", "The Bran Castle Courtyard"},
    {"restaurant", "Dracula's Restaurant"},

	{"observatory", "The Prince Vlad's Observatory"},
    {"entrance", "The Grand Entrance Hall"},
    {"oriental", "The Oriental Saloon"},
};


std::map<std::string, std::string> descriptionRoom = {
    {"library", "King Ferdinand's Library. The library\n"
				"has a massive door located on the southern wall of the room. On the East Wall is\n"
				"a huge library of books. The room has a balcony, access to the balcony can be done\n"
				"through a huge glass door located on the North Wall of the room. Natural light enters\n"
				"through the glass door but also through the 2 windows located on the west wall of\n"
				"the room.\n\n"},

	{"throne", "a large imposing throne, there is an\n"
				"eclectic architecture with the main element of the composition being the the dramatic\n"
				"Byzantine style architecture. The columns are made of white Ruschița marble. The\n"
				"entrance way is a monumental door carved with decorative motifs, framed in marble\n"
				"and richly ornamented in brass. Velvet brocade drapes stitched with gold thread\n"
				"emphasize the luxury of this room.\n\n"},

	{"weapon", "The  'King Carol the First' Armory\n"
				"Room was set up in a space decorated in the German Renaissance style. The walls are\n"
				"decorated on the lower part with oak paneling, and the ceiling with coffers bearing\n"
				"coats of arms and mottos in Latin. The rooms contain a rich collection of weapons,\n"
				"over 4000 European and Oriental pieces, from the 14th-17th centuries. The panoplies\n"
				"are accompanied by a suite of German armour from the 16th and 17th centuries and a\n"
				"precious complete armour of a horse and knight, of the Maximilian type, unique in\n"
				"Romania.\n\n"},

	{"marie", "Queen Maria's Apartment is a room with\n"
				"two large deep windows on the same wall (West Wall) and is decorated in a medieval\n"
				"style, the room has 3 doors that are made of massive oak wood (one door on North,\n"
				"East and South Walls), it also has a fireplace in the North-East corner. In the\n"
				"middle of the room there is a monumental bed with a canopy, a writing desk is situated\n"
				"in the West-North corner, a chest under one of the windows, a dressing table with\n"
				"a mirror in the South-East corner of the room, on this table is the box with\n"
				"the queen's jewels. On the table is the queen's intimate diary\n\n"},

	{"court", "The BRAN Castle Courtyard is an open,\n"
				"cobblestone space enclosed by towering stone walls. Knights spar with clashing swords\n"
				"and servants rush around with supplies.There's a lush garden and a central fountain.\n\n"},

	{"restaurant", "a grand dining room with three wide windows,\n"
				"embellished with stained glass depicting beautiful scenes. The walls are\n"
				"almost entirely covered by paintings depicting bucolic scenes of the lives\n"
				"of German nobility in the romantic framework of the 17th - 18th centuries.\n"
				"A large dining table dominates the centre of the room, richly adorned by\n"
				"cold, untouched desserts and drinks. However, all this grandeur fails to\n"
				"distract you from the corpse collapsed by the silk drapes. An older\n"
				"gentleman, Sir Alexandru Albescu, lies cold on the floor, one hand twisted\n"
				"in the curtains and the other hand reaching out for a fallen goblet,\n"
				"spilling a dark red liquid into the floor.\n\n"},

	{"observatory", "The Prince Vlad's Observatory tower\n"
				"is in the castle, a secluded retreat for stargazers. It offers panoramic views\n"
				"of the surrounding lands through its large windows. There are extraordinary\n"
				"telescopes and astronomical instruments.\n\n"},

	{"entrance", "a grand chamber of stone and splendor.\n"
				"Towering walls with tapestries and torches greet you as you enter. A magnificent\n"
				"chandelier hangs from the vaulted ceiling. A sweeping staircase beckons to the upper\n"
				"levels decorated with model knights suited in silver armour.\n\n"},

	{"oriental", "The Oriental Room is in shades of red and\n"
				"gold. It has no windows, access to the room is through one double door situated on\n"
				"the North wall. In each corner of the room there is a half meter wide mirror that\n"
				"stretches from the floor to the ceiling. The furniture is in Turkish style with:\n"
				"Turkish sofas on each wall, in front of the sofas there are low tables with 2 stools\n"
				"each. On the floor is a huge Persian carpet that covers the entire floor of the room.\n"
				"In the middle of the room there is a small table, also in Turkish style, surrounded\n"
				"by 4 stools.The Oriental salon has hand embroidery on the ceiling and walls. The\n"
				"ensemble is completed by a collection of Turkish and Persian brass vessels.\n\n"},
};



/////////////////////////////////////CHARACTER ASSETS////////////////////////////////////////////

// CHARACTER ASSETS (3 maps, 9 vectors)
/*
 * (map) nameCharacter
 * (map) descriptionCharacter
 * (map) pronounChar
 *
 * (vector) princessPromptedLine
 * (vector) madamePromptedLine
 * (vector) baronessPromptedLine
 * (vector) workerPromptedLine
 * (vector) inspectorPromptedLine
 *
 * (vector) princessSpeakingLine
 * (vector) madameSpeakingLine
 * (vector) baronessSpeakingLine
 * (vector) workerSpeakingLine
 * (vector) inspectorSpeakingLine
 *
 * (vector) princessKeyWords
 * (vector) madameKeyWords
 * (vector) workerKeyWords
 * (vector) baronessKeyWords
 * (vector) inspectorKeyWords
 */

    std::map<std::string, std::string> nameCharacter = {
          {"inspector", "The Inspector"},
          {"organizer", "Sir Alexandru Albescu"},
          {"princess","Penelope",},
          {"baroness", "Helena Van Arsdale"},
          {"worker", "Andrzej"},
          {"madame", "Madame Ionescu"},
};

std::map<std::string, std::string> descriptionCharacter = {
      {"inspector","The Inspector, a very experimented, intelligent and unconventional cop\n"
					"with flair for people (40 years old)\n\n"},
      {"organizer","The organizer of the private event connected with all the quest somehow\n\n" },
      {"princess","Princess Penelope. A young, very beautiful woman with bright red hair that is\n"
      				"cut short into a fashionable bob. She wears a sleek blue dress with subtle\n"
      				"rhinestones.\n\n"},
      {"baroness","Baroness Helena Van Arsdale from Holland - a shrivelled old aristocrat who is\n"
					"almost buried in a large fur coat. Her wrinkled hands are each adorned in\n"
					"large golden rings that almost look too heavy to lift.\n\n"},
      {"worker", "Andrzej, a strong looking Polish man. He looks uncomfortable in an ill\n"
					"fitting suit.\n\n"},
      {"madame", "Madame Elena Ionescu - an older woman with an over adornment of bright purple\n"
					"eye shadow. She wears a long, ostentatious green shimmering dress\n\n"},
};

std::map<std::string, std::vector<std::string>> pronounChar = {
      {"inspector", {"he", "him"}},
      {"princess",{"she", "her"}},
      {"baroness", {"she", "her"}},
      {"worker", {"he", "him"}},
      {"madame", {"she", "her"}},
};

////////////////////////////////////////PROMPTED CHARACTER LINES/////////////////////////////////////////////////

std::vector<std::string> princessPromptedLine = {
	"Oh how dreadful, I have never witnessed something like this before,\n"
		"but did I hear some unusual noises coming from the library earlier.\n"
		"It sounded like someone was arguing, but I didn't think it would\n"
		"result in poison being involved.\n\n" ,
	"Poison is such a ghastly way to die, isn't it?\n\n",
	"I had left the room I'm afraid... I had gone to powder my nose...\n\n" };

std::vector<std::string> madamePromptedLine = {
	"Ah, nasty business this... I'm afraid even I didn't see this coming\n"
		"or I would have warned you well in advance.\n\n",
	"line 2\n\n",
	"Well I was here of course! I was about to dig into my pudding!\n\n" };

std::vector<std::string> workerPromptedLine = {
	"I had nothing to do with it... you've got to believe me! the Baroness\n"
		"was giving me foul looks all night, I swear she is going to accuse me!\n\n",
	"I did notice something off about the Princess ... She seemed annoyed with Sir Alexandru Albescu this morning about getting his fingerprints all over her new dressing mirror.But who knows if that's related to his murder?\n\n",
	"",};

std::vector<std::string> baronessPromptedLine = {
	"Ah such a shame, I quite liked Sir Alexandru. If you ask me who did\n"
		"I think its that Polish fellow... what right does a worker like him\n"
		"have to be at a glamourous event like this, hmmm?\n\n",
	"",
	"",};

std::vector<std::string> inspectorPromptedLine = {
	"Thank you for bringing this matter to my attention. I’ve been on the case and here’s what I found out so far: Sir Alexandru was in the drinking reception when he was poisoned. Everyone but the couple from the honeymoon were there. However there are only two sets of fingerprints leading away from the crime scene. Footprints of high heels ... I suggest we follow this trail carefully and get closer to the truth!\n\n",
	"2\n\n",
	"3\n\n" };


//////////////////////////////////////////////////CHARACTER KEYWORDS///////////////////////////////////////////////////////
std::vector<std::string> princessKeyWords = { "murder","poison","11 o'clock" };
std::vector<std::string> madameKeyWords = { "murder","2","11 o'clock" };
std::vector<std::string> workerKeyWords = { "murder","2","3" };
std::vector<std::string> baronessKeyWords = { "murder","2","3" };
std::vector<std::string> inspectorKeyWords = { "murder","2","3" };



//////////////////////////////////////CHARACTER SPEAKING LINES///////////////////////////////////////////////////

std::vector<std::string> princessSpeakingLine = { "Oh... hello there Inspector... its been a horrible night, just horrible! Please help us.","2","3" };
std::vector<std::string> madameSpeakingLine = { "Ah, Inspector... I knew you'd be comin'. I've a sense for these things...","2","3" };
std::vector<std::string> workerSpeakingLine = { "Oh, inspector, nice to meet you","2","3" };
std::vector<std::string> baronessSpeakingLine = { "1","2","3" };
std::vector<std::string> inspectorSpeakingLine = { "1","2","3" };


/////////////////////////////////////ROOM PROMPTED LINES/////////////////////////////////////////////

std::vector<std::string> entrancePromptedLine = { "", "", "" };
std::vector<std::string> courtyardPromptedLine = { "" };
std::vector<std::string> thronePromptedLine = { "" };
std::vector<std::string> mariesAptPromptedLine = { "" };
std::vector<std::string> libraryPromptedLine = { "" };
std::vector<std::string> observatoryPromptedLine = { "" };
std::vector<std::string> restaurantPromptedLine = { "The body is pale cold, it has been a while since the murder occurred.\nThe body of Alexandru is finely dressed in a tuxedo,\nshowing off his wealth with tasteful jewelry and a\nfancy watch on the hand clutching the goblet.\n\n",
														"The goblet is finely made and is identical to the others sat on the\ntable, whoever did this either knew which goblet Alexandru would drink from\nor Alexandru wasn't the intended target...",
														"The twisted red curtains are clutched in Alexandru's hand, even in death.\nSomething catches your eye, from your position by the body you see\na hidden servants door behind one of the other curtains.",
														"The fine watch cracked as the man fell, causing the hands to be frozen at eleven o'clock."};
std::vector<std::string> weaponRoomPromptedLine = { "" };
std::vector<std::string> orientalRoomPromptedLine = { "" };

///////////////////////////////////////ROOM KEYWORDS////////////////////////////////////////////////

std::vector<std::string> entranceKeyWords = { "" };
std::vector<std::string> courtyardKeyWords = { "" };
std::vector<std::string> throneKeyWords = { "" };
std::vector<std::string> marieKeyWords = { "" };
std::vector<std::string> libraryKeyWords = { "" };
std::vector<std::string> observatoryKeyWords = { "" };
std::vector<std::string> restaurantKeyWords = { "body", "goblet", "curtains", "watch"};
std::vector<std::string> weaponKeyWords = { "" };
std::vector<std::string> orientKeyWords = { "" };