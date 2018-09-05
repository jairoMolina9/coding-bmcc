/*
 * Jairo Molina
 * 23499086
 * Fall 2018, CSC 211
 * Thursday, Oct 30th 2018
 * 7:00 PM
 *
 * Dr. Azhar
 */

#include <iostream>

using namespace std;

//function prototype
void checkCommand(string);

int main() {

    //user input command stored in this variable
    string unix_command;

    do{

        cout << "\n'quit' to quit\nEnter unix command:"  << endl;
        cin >> unix_command;

        //sends user's input to the function
        checkCommand(unix_command);


     //allows user to quit the program by typing quit
    }while (unix_command != "quit");

    //displays message only when user inputs quit
    cout << "\nClosing Unix Command Library "<< endl;


    return 0;
}

void checkCommand(string check) {

    /*variable serves as a flag to determine
    if the user's input is in the command list array*/
    int exists = 0;

    string command_list[6] = {"ls",
                              "cat",
                              "mv",
                              "sudo",
                              "pwd",
                              "clear"};

    //descriptions are in the same order as the command list array
    string command_description[6] = {"LS: List  information  about  the FILEs (the current directory by default)\n"
                                     "Sort entries alphabetically if none of -cftuvSUX nor --sort  is  specified\n",

                                     "\nCAT: Concatenate FILE(s) to standard output."
                                     "With no FILE, or when FILE is -, read standard input.\n",

                                     "MV: Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY."
                                     "Mandatory arguments to long options are mandatory for short options too.\n",

                                     "SUDO: Sudo allows a permitted user to execute a command as the supe‐"
                                     "ruser or another user, as specified by the security policy.\n",

                                     "PWD: Print the full filename of the current working directory.\n",

                                     "CLEAR: clear clears your screen if this is possible, including its scrollback buffer (if the extended\n"
                                     "“E3” capability is defined).  clear looks in the environment for the terminal  type  given  by\n"
                                     "the environment variable TERM, and then in the terminfo database to determine how to clear the\n"
                                     "screen.\n"};

    for (int i = 0; i <= 6; i++)
    {
        if (check == command_list[i]) {

            cout << "\n********** DESCRIPTION **********\n" << command_description[i];

            break;//automatically goes back to the main
        }

        if (check != command_list[i])
            /*this counts the amount of times
            check is not equal to command list
            must check every single value
            therefore exist must equal to 7*/
            exists++;
    }

    /*if the user input is quit the software will not print the
    sentence inside the if statement's body*/
    if(exists == 7 && check != "quit")

        cout << "Sorry but " << check << " is not available." << endl;
}
