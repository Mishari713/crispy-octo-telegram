/*
 * Developed by team members: Logan Christianson and Marissa Gustafson
 * Logan's project contribution: 50%
 * Marissa's project contribution: 50%
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<Math.h>

//(True) constants
#define MAXIMUM_WORD_LENGTH 16
#define MAXIMUM_FILE_LENGTH 2000
#define SCREEN_LENGTH 80
#define SCREEN_HEIGHT 23 //24 if including the entry line

//Globals
int TotalWordNum; //Var for storing total # of words in the word bank
char PlayingBoard[SCREEN_HEIGHT][SCREEN_LENGTH]; //Playing board, printed out for the player to see
char WordBank[MAXIMUM_FILE_LENGTH][MAXIMUM_WORD_LENGTH]; //Word bank of all possible words
char ActiveWords[SCREEN_HEIGHT][MAXIMUM_WORD_LENGTH]; //Word bank of all ACTIVE words (currently in the game board) - not currently used since we're not checking
char BlankLine[SCREEN_LENGTH] = "0000000000000000000000000000000000000000000000000000000000000000000000000000000"; //What a blank line is filled with in PlayingBoard
 rand(1000+BlankLine)
//Function prototypes:
int addWordToGame(FILE *fp);
void addWordToPlayingBoard();
void printPlayingBoard();
void removeWord(char *word);
void SaveWordsLoop();
void PopulateStringTable(char stringArray[MAXIMUM_FILE_LENGTH][MAXIMUM_WORD_LENGTH]);
void RunTheGame();
char* advanceLine();

//Main function

/*
 * Populates the given array with strings. The function is self-contained.
 * Because we're being given a copy of the array pointer, we're editing the original array
**/
void PopulateStringTable(char stringArray[MAXIMUM_FILE_LENGTH][MAXIMUM_WORD_LENGTH]) {

    FILE *fp = fopen("wordList.txt", "r");
    

/*
 * This function prints the PlayingBoard to the screen.
**/
void printPlayingBoard() {
	
	
/*
 * As the function name implies, removes the given word from our PlayingBoard array, if it exists
 * Starts from the bottom, since that's most likely where we're removing words from first
**/
void removeWord(char word[MAXIMUM_WORD_LENGTH]) {
	int wordLength = strlen(word);
	char compareTo[MAXIMUM_WORD_LENGTH];
	
/*
 * Advances PlayerBoard down 1 line, returning the contents of the lost line, and adding a blank line (of '0's) along the top/0th row
**/
char* advanceLine() {
   
}

/*
 * This function runs the game (hence the name). Not a recursive function. Calls a lot of other functions.
 * As soon as this function is called, words start appearing in the console for the player to remove.
 * Returns how long the function is ran for (which equals how long the user played the game for).
**/
void RunTheGame() {	
   
	
}