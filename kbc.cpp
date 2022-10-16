// Program for KBC game  
#include <iostream>
#include <conio.h>
using namespace std;

class kbc
{
public:
    int ch, age, q, life, option;
    char c, y, l;
    string name, place;
    void show();
    void enter();
    void input();
    void intro();
    void rules();
    void begin();
};
void kbc::show()

{
    system("color 01");
    cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "                                           $              *     *     *  ***       *********               $     " << endl;
    cout << "                                           $              *    *      *     *      *        *              $     " << endl;
    cout << "                                           $              *   *       *     *      *                       $    " << endl;
    cout << "                                           $              * *         ** * *                               $            " << endl;
    cout << "                                           $              *   *       *     *      *                       $    " << endl;
    cout << "                                           $              *     *     *     *      *        *              $      " << endl;
    cout << "                                           $              *       *   *  ***       *********               $     " << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    getch();

    system("cls");
}
void kbc::enter()
{
    system("color C");
    cout << "\t\t\t PRESS 1 TO ENTER YOUR DETAILS" << endl;
    cin >> ch;
    system("cls");
}
void kbc::input()
{
    system("color f");
    switch (ch)
    {
    case 1:
        cout << "ENTER YOUR NAME-" << endl;
        cin >> name;
        cout << "ENTER YOUR AGE-" << endl;
        cin >> age;
        cout << "ENTER THE NAME OF PLACE YOU BELONG-" << endl;
        cin >> place;
        break;

    default:
        cout << "YOU ENTER A WRONG DIGIT AND YOU ARE NOT ABLE TO CONTINUE.\n"
             << endl
             << "*  FOR PLAY THIS GAME PLEASE RUN ONCE AGAIN AND SELECT CORRECT OPTION THIS TIME.THANKYOU!  *" << endl;
    }
}
void kbc::intro()
{
    system("cls");
    system("color 9");

    cout << "WELCOME TO THE KBC SHOW*" << endl
         << endl;
    cout << "Today we have new player whose name is " << name << ". They belongs to the place called " << place << "." << endl;
    cout << "\n \t \t SO LET'S START THE GAME KAUN BANEGA CAROREPATI" << endl;
    getch();
    system("cls");
}
void kbc::rules()
{
    system("color e0");
    cout << "                                                          ||||RULES ARE AS FOLLOWS||||                                  " << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    cout << "->THERE ARE TOTAL 5 MULTIPLE CHOICE QUESTIONS IN THIS GAME" << endl;
    cout << "->THE FIRST QUESTION IS OF RS 5000" << endl;
    cout << "->THE LAST QUESTION IS THE JACKPOT QUESTION OF RS 1 crore " << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    getch();
    system("cls");
}
void kbc::begin()
{
    cout << "           SO LET'S START THIS GAME             " << endl;
    cout << "  Q1 IS OF RS 5000 PRESS 'y/Y' TO GET YOUR QUESTION ON DASHBOARD:" << endl;
    cin >> y;

    system("cls");
    system("color 71");

    int sum = 0;

    if (y == 'y' || y == 'Y')
    {
        system("cls");
        cout << "\tQ1 Who is the father of AMITABH BACHCHAN? " << endl;
        cout << "\toptions are" << endl;
        cout << "\t<1>  AJITABH BACHCHAN"
             << "\t\t\t\t"
             << "<2>  SACHIN BACHCHAN" << endl;
        cout << "\t<3>  DHRUV MAHAJAN"
             << "\t\t\t\t"
             << "<4>  HARIVANSH RAI BACHCHAN" << endl
             << endl;
        cout << "\t######  IF YOU WANT TO USE LIFELINE THEN PRESS l(lowercase L) \tOR\t  TO GIVE YOUR ANSWER PRESS ANY NUMBER  ######" << endl;
    tick1:
        cin >> l;
        if (l == 'l' || l == 'L')
        {
        lifeline1:
            cout << "\tTHE LIFE LINE YOU HAVE ARE :" << endl
                 << endl;
            cout << "\t[1]  50-50" << endl;
            cout << "\t[2]  AUDIANCE POLL" << endl;
            cout << "\t[3]  EXPERT ADVICE" << endl
                 << endl;
            cout << "\tSelect which lifeline you want to apply" << endl;
            cin >> life;
            if (life <= 3 && life != 0)
            {
                switch (life)
                {
                case 1:
                    cout << "\tTHE TWO INCORRECT OPTIONS HAVE BEEN REMOVED :" << endl;
                    cout << "\tQ1 Who is the father of AMITABH BACHCHAN?" << endl;
                    cout << "\t<1> AJITABH BACHCHAN  "
                         << "\t\t\t"
                         << "<2>    " << endl;
                    cout << "\t<3>       "
                         << "\t\t\t"
                         << "<4>  HARIVANSH RAI BACHCHAN" << endl
                         << endl;
                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS 'l'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                    goto tick1;
                    break;
                case 2:
                    cout << endl
                         << endl
                         << "\tAccording to AUDIANCE POLL the BAR GRAPH is given as--" << endl
                         << endl;
                    cout << "\tOption <1>  ||||||||                           20%" << endl;
                    cout << "\tOption <2>  ||||                               10%" << endl;
                    cout << "\tOption <3>  ||||                               10%" << endl;
                    cout << "\tOption <4>  ||||||||||||||||||||||||           60%" << endl;
                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS 'l'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                    goto tick1;
                    break;
                case 3:
                    cout << endl
                         << endl
                         << "\t\t\t\t\t\t^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION <4>  ^^^^^^^^" << endl
                         << endl;
                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS 'l'||'L' \'tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                    goto tick1;
                    break;
                }
            }
            else
            {
                cout << endl
                     << "\t---  You are selecting wrong option so,please select correct option  ---" << endl;
                goto lifeline1;
            }
        }
        cout << endl
             << "\tselect your option" << endl;
        cin >> option;
        if (option == 4)
        {

            sum = sum + 5000;
            cout << endl
                 << "\t**  congratulation you won Rs." << sum << endl;
            cout << "press 1 to continue the game \tOR\t press 0 to quit game" << endl;
            cin >> c;
            if (c == '1')
            {
                system("cls");
            q2:
                cout << endl
                     << "TO SEE SECOND QUESTION WORTH 10,000 ON YOUR SCREEN PRESS 1" << endl;
                cin >> y;
                system("cls");
                cout << "Q2 How many squares are there on a chessboard?" << endl;
                cout << "options are" << endl;
                cout << "<1>            72"
                     << "\t\t\t\t"
                     << "<2>            52" << endl;
                cout << "<3>            64"
                     << "\t\t\t\t"
                     << "<4>            32" << endl
                     << endl;
                cout << "\t######  IF YOU WANT TO USE LIFELINE THEN PRESS 'l'||'L' \tOR\t  TO GIVE YOUR ANSWER PRESS ANY NUMBER  ######" << endl;
            tick2:
                cin >> l;
                if (l == 'l' || l == 'L')
                {
                lifeline2:
                    cout << "\tTHE LIFE LINE YOU HAVE ARE :" << endl
                         << endl;
                    cout << "[1]  50-50" << endl;
                    cout << "[2]  AUDIANCE POLL" << endl;
                    cout << "[3]  EXPERT ADVICE" << endl
                         << endl;
                    cout << "Select which lifeline you want to apply" << endl;
                    cin >> life;
                    if (life <= 3 && life != 0)
                    {
                        switch (life)
                        {
                        case 1:
                            cout << "\tTHE TWO INCORRECT OPTIONS HAVE BEEN REMOVED :" << endl
                                 << endl;
                            cout << "Q2 Who is the father of AMITABH BACHCHAN?" << endl;
                            cout << "Remaining options are" << endl;
                            cout << "<1>            "
                                 << "\t\t\t\t"
                                 << "<2>              " << endl;
                            cout << "<3>           64"
                                 << "\t\t\t\t"
                                 << "<4>             32" << endl
                                 << endl;
                            cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L'\tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                            goto tick2;
                            break;
                        case 2:
                            cout << endl
                                 << endl
                                 << "According to AUDIANCE POLL the BAR GRAPH is given as--" << endl
                                 << endl;
                            cout << "Option <1>  ||||                               10%" << endl;
                            cout << "Option <2>                                      0%" << endl;
                            cout << "Option <3>  ||||||||||||||||||||||||||||       70%" << endl;
                            cout << "Option <4>  ||||||||                           20%" << endl;
                            cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L'\tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                            goto tick2;
                            break;
                        case 3:
                            cout << endl
                                 << endl
                                 << "^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION <3> ^^^^^^^^" << endl
                                 << endl;
                            cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS 'l'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                            goto tick2;
                            break;
                        }
                    }
                    else
                    {
                        cout << endl
                             << "---  You are selecting wrong option so,please select correct option  ---" << endl;
                        goto lifeline2;
                    }
                }
                cout << endl
                     << "select your option" << endl;
                cin >> option;
                if (option == 3)
                {
                    system("cls");
                    sum = sum + 10000;
                    cout << endl
                         << "*  congratulation you won Rs.10,000  **" << endl;
                s:
                    cout << "press 1 to continue the game or press any 0 to quit game" << endl;
                    cin >> c;
                    if (c == '1')
                    {
                        system("cls");

                    q3:

                        system("cls");
                        cout << "Q3  In which country did chess first originate?" << endl;
                        cout << "options are" << endl;
                        cout << "<1>  KING"
                             << "\t\t\t"
                             << "<2>  AMERICA" << endl;
                        cout << "<3>  JAPAN"
                             << "\t\t\t"
                             << "<4> INDIA" << endl
                             << endl;
                        cout << "\t######  IF YOU WANT TO USE LIFELINE THEN PRESS 'l'||'L' \tOR\t  TO GIVE YOUR ANSWER PRESS ANY NUMBER  ######" << endl;
                    tick3:
                        cin >> l;
                        if (l == 'l' || l == 'L')
                        {
                        lifeline3:
                            cout << "\tTHE LIFE LINE YOU HAVE ARE :" << endl
                                 << endl;
                            cout << "[1]  50-50" << endl;
                            cout << "[2]  AUDIANCE POLL" << endl;
                            cout << "[3]  EXPERT ADVICE" << endl
                                 << endl;
                            cout << "Select which lifeline you want to apply" << endl;
                            cin >> life;
                            if (life <= 3 && life != 0)
                            {
                                switch (life)
                                {
                                case 1:
                                    cout << "\tTHE TWO INCORRECT OPTIONS HAVE BEEN REMOVED :" << endl
                                         << endl;
                                    cout << "Q3  In which country did chess first originate?" << endl;
                                    cout << "Remaining options are" << endl;
                                    cout << "<1>           KING"
                                         << "\t\t\t"
                                         << "<2>                        " << endl;
                                    cout << "<3>                      "
                                         << "\t\t\t"
                                         << "<4> INDIA" << endl
                                         << endl;
                                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS 'l'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                    goto tick3;
                                    break;
                                case 2:
                                    cout << endl
                                         << endl
                                         << "According to AUDIANCE POLL the BAR GRAPH is given as--" << endl
                                         << endl;
                                    cout << "Option <1>  |||||||||||||||||||                 30%" << endl;
                                    cout << "Option <2>  |||||||||||||                       25%" << endl;
                                    cout << "Option <3>  |||||                               10%" << endl;
                                    cout << "Option <4>  ||||||||||||||||||||||||            35%" << endl;
                                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                    goto tick3;
                                    break;
                                case 3:
                                    cout << endl
                                         << endl
                                         << "^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION <4>  ^^^^^^^^" << endl
                                         << endl;
                                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                    goto tick3;
                                    break;
                                }
                            }
                            else
                            {
                                cout << endl
                                     << "---  You are selecting wrong option so,please select correct option  ---" << endl;
                                goto lifeline3;
                            }
                        }
                        cout << endl
                             << "select your option" << endl;
                        cin >> option;
                        if (option == 4)
                        {

                            sum = sum + 50000;
                            cout << endl
                                 << "*  congratulation you won Rs.50,000  **" << endl;
                            cout << "press 1 to continue the game or press any 0 to quit game" << endl;
                            cin >> c;
                            if (c == 'l')
                            {
                            q4:
                                system("cls");
                                cout << endl
                                     << "Q4 for Rs. 1,00,000 is" << endl;

                                system("pause");
                                system("cls");
                                cout << "Q4 Which piece can only move one square in any direction?" << endl;
                                cout << "options are" << endl;
                                cout << "<1>         PAWN"
                                     << "\t\t\t"
                                     << "<2>            KING" << endl;
                                cout << "<3>         ROOK "
                                     << "\t\t\t"
                                     << "<4>            KNIGHT   " << endl
                                     << endl;
                                cout << "\t######  IF YOU WANT TO USE LIFELINE THEN PRESS 'l'||'L'\tOR\t  TO GIVE YOUR ANSWER PRESS ANY NUMBER  ######" << endl;
                            tick4:
                                cin >> l;
                                if (l == 'l' || l == 'L')
                                {
                                lifeline4:
                                    cout << "\tTHE LIFE LINE YOU HAVE ARE :" << endl
                                         << endl;
                                    cout << "[1]  50-50" << endl;
                                    cout << "[2]  AUDIANCE POLL" << endl;
                                    cout << "[3]  EXPERT ADVICE" << endl
                                         << endl;
                                    cout << "Select which lifeline you want to apply" << endl;
                                    cin >> life;
                                    if (life <= 3 && life != 0)
                                    {
                                        switch (life)
                                        {
                                        case 1:
                                            cout << "\tTHE TWO INCORRECT OPTIONS HAVE BEEN REMOVED :" << endl
                                                 << endl;
                                            cout << "Q4 Which piece can only move one square in any direction?" << endl;
                                            cout << "Remaining options are" << endl;
                                            cout << "<1>                "
                                                 << "\t\t\t"
                                                 << "<2>           KING" << endl;
                                            cout << "<3>                "
                                                 << "\t\t\t"
                                                 << "<4>         KNIGHT" << endl
                                                 << endl;
                                            cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                            goto tick4;
                                            break;
                                        case 2:
                                            cout << endl
                                                 << endl
                                                 << "According to AUDIANCE POLL the BAR GRAPH is given as--" << endl
                                                 << endl;
                                            cout << "Option <1>  ||                                 5%" << endl;
                                            cout << "Option <2>  |||||||||||||||||||                50%" << endl;
                                            cout << "Option <3>  ||||                               10%" << endl;
                                            cout << "Option <4>  |||||||||||                        35%" << endl;
                                            cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                            goto tick4;
                                            break;
                                        case 3:
                                            cout << endl
                                                 << endl
                                                 << "^^^^^^^  According to EXPERT ADVICE the answer is may be OPTION <2>  ^^^^^^^^" << endl
                                                 << endl;
                                            cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS 1 \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                            goto tick4;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        cout << endl
                                             << "---  You are selecting wrong option so,please select correct option  ---" << endl;
                                        goto lifeline4;
                                    }
                                }
                                cout << endl
                                     << "select your option" << endl;
                                cin >> option;
                                if (option == 2)
                                {
                                    system("cls");
                                    sum = sum + 1000000;
                                    cout << endl
                                         << "*  congratulation you won Rs.10,00,000  **" << endl;
                                    cout << "press 1 to continue the game or press 0 to quit game" << endl;
                                    cin >> c;
                                    if (c == '1')
                                    {

                                    q5:
                                        system("cls");
                                        cout << endl
                                             << "FIFTH QUESTION for Rs.1 CRORE IS" << endl;
                                        system("pause");

                                        cout << "Q5 Who developed the first computer program for playing chess?" << endl;
                                        cout << "options are" << endl;
                                        cout << "<1>         John Nick"
                                             << "\t\t\t"
                                             << "<2>            Alan Turing" << endl;
                                        cout << "<3>         Alpenso"
                                             << "\t\t\t"
                                             << "<4>            Chingchong" << endl
                                             << endl;
                                        cout << "######  IF YOU WANT TO USE LIFELINE THEN PRESS 'l'||'L' TO SHOW LIFELINE OR PRESS ANY number TO GIVE YOUR ANSWER  ######" << endl;
                                    tick5:
                                        cin >> l;
                                        if (l == 'l' || l == 'L')
                                        {
                                        lifeline5:
                                            cout << "\tTHE LIFE LINE YOU HAVE ARE :" << endl
                                                 << endl;
                                            cout << "[1]  50-50" << endl;
                                            cout << "[2]  AUDIANCE POLL" << endl;
                                            cout << "[3]  EXPERT ADVICE" << endl
                                                 << endl;
                                            cout << "Select which lifeline you want to apply" << endl;
                                            cin >> life;
                                            if (life <= 3 && life != 0)
                                            {
                                                switch (life)
                                                {
                                                case 1:
                                                    cout << "\tTHE TWO INCORRECT OPTIONS HAVE BEEN REMOVED :" << endl
                                                         << endl;
                                                    cout << "Q5 Who developed the first computer program for playing chess?" << endl;
                                                    cout << "Remaining options are" << endl;
                                                    cout << "<1>            "
                                                         << "\t\t\t"
                                                         << "<2>           Alan Turing" << endl;
                                                    cout << "<3>            "
                                                         << "\t\t\t"
                                                         << "<4>           Chingchong" << endl
                                                         << endl;
                                                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L'\tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                                    goto tick5;
                                                    break;
                                                case 2:
                                                    cout << endl
                                                         << endl
                                                         << "According to AUDIANCE POLL the BAR GRAPH is given as--" << endl
                                                         << endl;
                                                    cout << "Option <1>  ||                                 5%" << endl;
                                                    cout << "Option <2>  ||||||||||||||                     45%" << endl;
                                                    cout << "Option <3>  ||||                               10%" << endl;
                                                    cout << "Option <4>  |||||||||||||||||                  40%" << endl;
                                                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                                    goto tick5;
                                                    break;
                                                case 3:
                                                    cout << endl
                                                         << endl
                                                         << "^^^^^^^  According to EXPERT ADVICE the answer is may be OPTION <2>  ^^^^^^^^" << endl
                                                         << endl;
                                                    cout << "\t######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS '1'||'L' \tOR\t  TO GIVE ANSWER PRESS ANY NUMBER  ######" << endl;
                                                    goto tick5;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                cout << endl
                                                     << "---  You are selecting wrong option so,please select correct option  ---" << endl;
                                                goto lifeline5;
                                            }
                                        }
                                        cout << endl
                                             << "select your option" << endl;
                                        cin >> option;
                                        if (option == 2)
                                        {
                                            system("cls");
                                            sum = sum + 10000000;
                                            cout << endl
                                                 << "*  congratulation you won Rs.10,00,0000  **" << endl;

                                            cout << "YOU ARE ULTIMATE CHAMPIAN OF THIS GAME ";
                                            cout << endl
                                                 << "THANKS FOR PLAYING**";
                                        }
                                        else
                                        {
                                            cout << endl
                                                 << "oops! you are giving wrong answer" << endl
                                                 << "-------->Correct answer is option <2>" << endl
                                                 << endl;
                                            cout << "----  Sorry you are not able to continue this game ----  " << endl
                                                 << endl;
                                            cout << "$$$$$  Rs.10,00,000 IS THE AMOUNT YOU GET $$$$$" << endl
                                                 << "*  BETTER LUCK NEXT TIME  *" << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Are You sure you want to quit your game" << endl;
                                        cout << "[1] Yes" << endl
                                             << "[2] No,I want to continue" << endl
                                             << endl;
                                        cin >> q;
                                        if (q == 1)
                                        {
                                            system("cls");
                                            cout << endl
                                                 << "You won Rs." << sum << endl;
                                            cout << "*Thanks for Playing the game";
                                        }
                                        else
                                            goto q5;
                                    }
                                }
                                else
                                {
                                    cout << endl
                                         << "oops! you are giving wrong answer" << endl
                                         << "-------->Correct answer is option <2>" << endl
                                         << endl;
                                    cout << "----  Sorry you are not able to continue this game ----  " << endl
                                         << endl;
                                    cout << "$$$$$  Rs.1,00,000  $$$$$" << endl
                                         << "*  BETTER LUCK NEXT TIME  *" << endl;
                                }
                            }
                            else
                            {
                                system("cls");
                                cout << "Are You sure you want to quit your game" << endl;
                                cout << "[1] Yes" << endl
                                     << "[2] No,I want to continue" << endl
                                     << endl;
                                cin >> q;
                                if (q == 1)
                                {
                                    system("cls");
                                    cout << endl
                                         << "You won Rs.1,00,000" << endl;
                                    cout << "*Thanks for Playing the game";
                                }
                                else
                                    goto q4;
                            }
                        }
                        else
                        {
                            cout << endl
                                 << "\n \n oops! you are giving wrong answer" << endl
                                 << "-------->Correct answer is option A" << endl
                                 << endl;
                            cout << "----  Sorry you are not able to continue this game ----  " << endl
                                 << endl;
                            cout << "$$$$$  Rs.0,000  $$$$$" << endl
                                 << "*  BETTER LUCK NEXT TIME  *" << endl;
                        }
                    }
                    else
                    {
                        system("cls");
                        cout << "Are You sure you want to quit your game" << endl;
                        cout << "[1] Yes" << endl
                             << "[2] No,I want to continue" << endl
                             << endl;
                        cin >> q;
                        if (q == 1)
                        {
                            system("cls");
                            cout << endl
                                 << "You won Rs.50,000" << endl;
                            cout << "*Thanks for Playing the game";
                        }
                        else
                            goto q3;
                    }
                }
                else
                {
                    cout << endl
                         << "oops! you are giving wrong answer" << endl
                         << "-------->Correct answer is option <3>" << endl
                         << endl;
                    cout << "----  Sorry you are not able to continue this game ----  " << endl
                         << endl;
                    cout << "$$$$$  Rs.10,000  $$$$$" << endl
                         << "*  BETTER LUCK NEXT TIME  *" << endl;
                }
            }
            else
            {
                system("cls");
                cout << "Are You sure you want to quit your game" << endl;
                cout << "[1] Yes" << endl
                     << "[2] No,I want to continue" << endl
                     << endl;
                cin >> q;
                if (q == 1)
                {
                    system("cls");
                    cout << endl
                         << "You won Rs.5,000" << endl;
                    cout << "*Thanks for Playing the game";
                }
                else
                    goto q2;
            }
        }
        else
        {
            cout << endl
                 << "oops! you are giving wrong answer" << endl
                 << "-------->Correct answer is option 4" << endl
                 << endl;
            cout << "----  Sorry you are not able to continue this game ----  " << endl
                 << endl;
            cout << "$$$$$  Rs.0  $$$$$" << endl
                 << "*  BETTER LUCK NEXT TIME  *" << endl;
        }
    }
    else
    {

        cout << endl
             << "oops! you select the wrong option" << endl
             << endl;
        cout << "----  Sorry you are not able to continue this game  ----  " << endl;
    }
}
int main()

{
    kbc o;
    o.show();
    o.enter();
    o.input();
    o.intro();
    o.rules();
    o.begin();

    return 0;
}