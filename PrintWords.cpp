#include<iostream>
#include<iomanip>
#include<string>
#include<cctype>
#include<cmath>
#include<map>

using namespace std;

const int NUM_COLUMNS = 1;
const string SPACE = "    ";

map<char, string*> ASCII_MAP = map<char, string*>();

void initAsciiMap();
bool asciiMapContains(const char charEnter);
string* getAsciiMap(char letter);
void copyLetterToMessage(string message[][NUM_COLUMNS], const char letter);
void putAsciiMap(char letter, const string lines[], size_t numLines);
//####################################################################
void setLetter(string messageArray[][NUM_COLUMNS],char charEntered);
void printMessageLine(string message[][NUM_COLUMNS], const int lineNumber);
                      
void initAsciiMap() {
    putAsciiMap('A', (string[]) {
        "      *      ",
        "     * *     ",
        "    *   *    ",
        "   *******   ",
        "  *       *  ",
        " *         * ",
        "*           *",
    }, 7);

    putAsciiMap('B', (string[]) {
        "*********  ",
        "*         *",
        "*         *",
        "*********  ",
        "*         *",
        "*         *",
        "********** ",
    }, 7);

    putAsciiMap('C', (string[]) {
        "  **********",
        "**          ",
        "**          ",
        "**          ",
        "**          ",
        "**          ",
        "  **********",
    }, 7);

    putAsciiMap('D', (string[]) {
        "***********  ",
        "*          **",
        "*          **",
        "*          **",
        "*          **",
        "*          **",
        "***********  ",
    }, 7);

    putAsciiMap('E', (string[]) {
        "***********",
        "*          ",
        "*          ",
        "***********",
        "*          ",
        "*          ",
        "***********",
    }, 7);

    putAsciiMap('F', (string[]) {
        "***********",
        "*          ",
        "*          ",
        "***********",
        "*          ",
        "*          ",
        "*          ",
    }, 7);

    putAsciiMap('G', (string[]) {
        " ********** ",
        "**          ",
        "**          ",
        "**     *****",
        "**         *",
        "**         *",
        " ***********",
    }, 7);

    putAsciiMap('H', (string[]) {
        "*          *",
        "*          *",
        "*          *",
        "************",
        "*          *",
        "*          *",
        "*          *",
    }, 7);

    putAsciiMap('I', (string[]) {
        "************",
        "      *     ",
        "      *     ",
        "      *     ",
        "      *     ",
        "      *     ",
        "************",
    }, 7);

    putAsciiMap('J', (string[]) {
        "  ******",
        "       *",
        "       *",
        "       *",
        "       *",
        "****   *",
        "   *****",
    }, 7);

    putAsciiMap('K', (string[]) {
        "*      *",
        "*    *  ",
        "*  *    ",
        "***     ",
        "*  *    ",
        "*    *  ",
        "*      *",
    }, 7);

    putAsciiMap('L', (string[]) {
        "*          ",
        "*          ",
        "*          ",
        "*          ",
        "*          ",
        "*          ",
        "***********",
    }, 7);

    putAsciiMap('M', (string[]) {
        "*           *",
        "* *       * *",
        "*   *   *   *",
        "*     *     *",
        "*           *",
        "*           *",
        "*           *",
    }, 7);

    putAsciiMap('N', (string[]) {
        "*           *",
        "* *         *",
        "*   *       *",
        "*     *     *",
        "*       *   *",
        "*         * *",
        "*           *",
    }, 7);

    putAsciiMap('O', (string[]) {
        " ********* ",
        "*         *",
        "*         *",
        "*         *",
        "*         *",
        "*         *",
        " ********* ",
    }, 7);

    putAsciiMap('P', (string[]) {
        "********** ",
        "*         *",
        "*         *",
        "********** ",
        "*          ",
        "*          ",
        "*          ",
    }, 7);

    putAsciiMap('Q', (string[]) {
        " ********** ",
        "*          *",
        "*          *",
        "*          *",
        "*       *  *",
        "*         * ",
        " ********  *",
    }, 7);

    putAsciiMap('R', (string[]) {
        "*********   ",
        "*         * ",
        "*         * ",
        "*********   ",
        "*        *  ",
        "*         * ",
        "*          *",
    }, 7);

    putAsciiMap('S', (string[]) {
        "     ******  ",
        "   **      **",
        "   **        ",
        "     ****    ",
        "         **  ",
        " **      **  ",
        "   ******    ",
    }, 7);

    putAsciiMap('T', (string[]) {
        "************",
        "      *     ",
        "      *     ",
        "      *     ",
        "      *     ",
        "      *     ",
        "      *     ",
    }, 7);

    putAsciiMap('U', (string[]) {
        "*          *",
        "*          *",
        "*          *",
        "*          *",
        "*          *",
        "*          *",
        " ********** ",
    }, 7);

    putAsciiMap('V', (string[]) {
        "*           *",
        " *         * ",
        "  *       *  ",
        "   *     *   ",
        "    *   *    ",
        "     * *     ",
        "      *      ",
    }, 7);

    putAsciiMap('W', (string[]) {
        "*          *",
        "*          *",
        "*          *",
        "*          *",
        "*    **    *",
        " *  *  *  * ",
        "  **    **  ",
    }, 7);

    putAsciiMap('X', (string[]) {
        "*           *",
        "  *       *  ",
        "    *   *    ",
        "      *      ",
        "    *   *    ",
        "  *       *  ",
        "*           *",
    }, 7);

    putAsciiMap('Y', (string[]) {
        "*           *",
        "  *       *  ",
        "    *   *    ",
        "      *      ",
        "      *      ",
        "      *      ",
        "      *      ",
    }, 7);

    putAsciiMap('Z', (string[]) {
        "***********",
        "         * ",
        "       *   ",
        "     *     ",
        "   *       ",
        " *         ",
        "***********",
    }, 7);

    putAsciiMap('\'', (string[]) {
        "   *****",
        "  ***** ",
        " ****   ",
        "***     ",
        "        ",
        "        ",
        "        ",
    }, 7);

    putAsciiMap('?', (string[]) {
        "  ***** ",
        "     ***",
        "      **",
        "     ***",
        "  ****  ",
        "        ",
        "  ***   ",
    }, 7);

    putAsciiMap('!', (string[]) {
        " ***** ",
        " ***** ",
        " ***** ",
        " ***** ",
        "       ",
        "  ***  ",
        "  ***  ",
    }, 7);

    putAsciiMap(' ', (string[]) {
        SPACE,
        SPACE,
        SPACE,
        SPACE,
        SPACE,
        SPACE,
        SPACE,
    }, 7);
    
}

bool asciiMapContains(const char charEnter) {
    return ASCII_MAP.find(charEnter) != ASCII_MAP.end();
}

string* getAsciiMap(char letter) {
    map<char, string*>::iterator it = ASCII_MAP.find(letter);
    if (it == ASCII_MAP.end()) {
        return nullptr;
    } else {
        return it->second;
    }
}

void copyLetterToMessage(string message[][NUM_COLUMNS], const char letter)
{
    string* letterMap = getAsciiMap(letter);
    if (letterMap == nullptr) {
        // silently fail
    } else {
        for (int i = 0; i < 7; i++) {
            message[i][0] += SPACE;
            message[i][0] += letterMap[i];
        }
    }
}

/**
 * Copies literal and saves in ASCII_MAP
 */
void putAsciiMap(char letter, const string lines[], size_t numLines) {
    string* dupeLines = new string[numLines];
    for (size_t i = 0; i < numLines; i++) {
        dupeLines[i] = string(lines[i]);
    }
    ASCII_MAP.insert(pair<char, string*>(letter, dupeLines));

    //delete [] dupeLines;    //seeing if this breaks it
}

int main()
{
    initAsciiMap();

    string phraseEntered;
    int phraseLength;
    int numLines;

    cout << "Enter a phrase: " << endl;
    getline(cin,phraseEntered);

    phraseLength = phraseEntered.length();
    cout << "Phrase length = " << phraseLength << endl;

    numLines = ceil(static_cast<double>(phraseLength) / 13);

    string tempMessage[7][NUM_COLUMNS];

    for(int k = 0; k < phraseLength; k++)   //add each char to the message
    {
            if((k % 13 == 0) && (k != 0)) //for every new line
            {
                cout << "k = " << k << endl;
                for(int x = 0; x < 7; x++)  //for every string in message
                {
                    printMessageLine(tempMessage, x);    //print the string then
                    tempMessage[x][0] = "";   //reset string to empty
                }
                cout << endl;
                cout << "    ##########################################################################################################################################################################################################" << endl << endl;

            }
            
            setLetter(tempMessage,toupper(phraseEntered[k]));
    }
    do //print last line of the message or messages shorter than 13
    {
        for(int i = 0; i < 7; i++)  //for the message
                {
                    printMessageLine(tempMessage, i);   //print each line
                }
                cout << endl;
    }while(false);  //only do it once

    cout << "Exiting" << endl;
    return 0;
}

void setLetter(string messageArray[][NUM_COLUMNS],char charEntered)
{
    if (asciiMapContains(charEntered)) {
            copyLetterToMessage(messageArray, charEntered);
        return;
    }
    else
    {
        cout << "Hello i was too lazy to put in a throw here" << endl;
    }
}

void printMessageLine(string message[][NUM_COLUMNS], const int lineNumber)
{
    cout << message[lineNumber][0] << endl;    //print the string
}
