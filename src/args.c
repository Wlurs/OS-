#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
 * 
Scope: create a simple command line interpreter, able to interpret a set of internally-implemented commands.

Your task for this task assignment is to create a simple command line interpreter. The command line interpreter should offer the following facilities:

    * Accept user commands from command line. The interpreter will expose a specific prompt (e.g. '$>') showing that it is prepared to accept a user command.
    * Execute user commands, from the list of accepted commands. The following error situations MUST be considered:
          o Command execution returned an error. The exact error code must be reported.
          o Issued command is not an accepted command. Error information will contain 'offending' command name.
          o Arguments are in a wrong format: the only accepted format is "-o ARG", where ARG is the optional argument of your option. 
 * It is not accepted to use the '/' notation for options or the --option long notation for options. These errors should be identified 
 * during preprocessing of command line.
 * 
 * 
 * COMMANDS: "cp" -i, -r (-R), -t, -v, 
 *           "mv" -i, -t, -S (with -b), 
 *           "dirname" 
 */
// -------------------------------- FUNCTIONS 
void parseCommand(char* input){
    const char separator[1] = " ";
    char *tok;
    
    tok = strtok(input, separator);
    
    if(strcmp(tok, "cp") == 0)
    {
        //handle cp
        printf("Handeling command ... \n" );
    }
    else if (strcmp(tok, "mv") == 0)
    {
        //handle mv
        printf("Handeling command ... \n" );
    }
    else if (strcmp(tok, "dirname") == 0)
    {
        //handle dirname
        printf("Handeling command ... \n" );
    }
    else 
    {
        //handle 'offending' command name. error
        printf("Not a handled command \n" );
    }
    
    //tok = strtok(NULL, separator);

}

// -------------------------------- FUNCTIONS 

// -------------------------------- Globals
bool loop = true; 
enum commands{cp, mv, dirname};
// --------------------------------
int main(int argc, char**argv) {
        
    
    char inputCommand[256];
    
    while (loop){
        printf("$:");
        gets( inputCommand );
        
        parseCommand(inputCommand);
    }
    
    return 0;
}
