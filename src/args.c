#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


// -------------------------------- Globals
bool loop = true; 
enum commands{cp, mv, dirname};
// --------------------------------


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
    else if (strcmp(tok, "HELP") == 0 || strcmp(tok, "help") == 0)
    {
        //handle help
        printf(" ------------------------------------------------------------------------------------\n");
        printf("Commands available: \n" );
        printf("NAME \t mv [OPTION] ... SOURCE DEST \n");
        printf("DESCRIPTION /t Moves SOURCE to DEST\n");
        printf("OPTIONS  -i /t prompt before overwrite\n");
        printf("\t -t --target-directory=DIRECTORY \tmove all SOURCE arguments into DIRECTORY\n");
        printf("\t -S, --suffix=SUFFIX  override the usual backup suffix \n");
        
        printf(" ------------------------------------------------------------------------------------\n");
        
        printf("NAME \t  cp [OPTION]... SOURCE... DIRECTORY \n");
        printf("DESCRIPTION /t Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n");
        printf("OPTIONS  -i /t prompt before overwrite\n");
        printf("\t -R, -r copy directories recursively\n");
        printf("\t -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY \n");
        printf("\t -v,  explain what is being done\n");
        
        printf(" ------------------------------------------------------------------------------------\n");
        
        printf("NAME \t  dirname NAME \n");
        printf("DESCRIPTION /t  Output each NAME with its last non-slash component and trailing slashes removed; if NAME contains no /'s, output '.' (meaning the current directory).\n");
                
        printf(" ------------------------------------------------------------------------------------\n");
    }
    else if (strcmp(tok, "exit") == 0)
    {
        loop = false;
    }
    else 
    {
        //handle 'offending' command name. error
        printf("Not a handled command \n" );
    }
    
    //tok = strtok(NULL, separator);

}

// -------------------------------- FUNCTIONS 


int main(int argc, char**argv) {
        
    
    char inputCommand[256];
    
    while (loop){
        printf("$:");
        gets( inputCommand );
        
        parseCommand(inputCommand);
    }
    
    return 0;
}
