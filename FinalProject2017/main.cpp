  /* Final Project code practice and possible layout for submittion for grade. looking to put in a UML for interface and design. Needs a topic for the total idea:
	IDEAS FOR THE PROJECT SO FAR:
	1) Racing game with money and storage along with the ability to upgrade car
	2) Class type game where the user picks a life story and goes on a journey to collect differnt things and make a mark on the world
	3) Design type of game that allows the user to create some type of fantasy world story that the player( main charter) has to go through life as and the story unfolds depending on the (users choices)
	4) Modified Gradebook storage program that gives points for work and other things the user will need
	4b) A note book style program book that has notes put in and gives the user the notes in a game style format that allows the user to remember the notes and go on to learn more skills ( possible to collect money or some type of reward) unlocks more as you progress
	5) Adventurer modified game that collects loot and then puts that loot up for grabs by random people and to defend the loot you must answer questions that will become more dificult as the time goes on.
	6) Place information in a teasure hunt style game (Battle ship) that the playeer (user) must uncode to find out the meaning of things and become more skilled at the craft of programming
	
	So far the code is nothing more then a buch of small workings that does not hold any real weigth for the end of the class and can be made into mulitiple programs that the user can go into and use to master skills for the trade or just modify themselves to see what is or isnt needed. (possible to run two or link two parts of the program together to run at the same time.
	
	***!!!!!! MYLES IF YOU SEE THIS STUFF ADD YOUR IDEAS TO IT SO THAT THERE CAN BE SOME MORE IDEAS FLOWING THROUGH YOUR HEAD AS THE TIME COMES WHEN WE CAN WORK ON THE PROJECT.
	*/
#include "TestMessage.h"
#include <iostream>

using namespace std;

void DisplayWelcomeMessage();
void DisplayClosingMessage();
void PressEnter();
void SwitchStatementNested();

int main()
{//Program Start
 //Call the constructor to the program and then display the welcome message to the user.
  TestMessage testMessage;
  cout << "The line above this one is the constructor.\n";
  //Press Enter to Continue
  PressEnter();
  
  //Display all of the non important information that the user might need to know before using the program like the code being written on a mac and needing to use Terminal to do things like:
  // -> clear the screen (with out seeing command errors, or go in to the code and change a few coding spots to allow for things to run more smoothly.
  system("read");
  
  //Display Welcome Message to the begining of the main part of the program
  DisplayWelcomeMessage();
  cout << "MENU:\n" << endl;
  cout << "1) NEW GAME\n" << endl;
  cout << "2) CONTINUE\n" << endl;
  cout << "3) DELETE\n" << endl;
  
  cout << "[PLEASE SELECT AN OPTION]\n";
  
  //Begining of switch statment (number) and its declaration
  int number;
  cin >> number;
  switch(number)
  {
		case 1:
		cout << "****** WARNING ******" << endl;
		cout << "You are about to begin a new game." << endl;
		cout << "All previous data will be over written." << endl;
		cout << "Are you sure you want to continue?\n";
		SwitchStatementNested();
		break;
		case 2:
		cout << "This is case 2.\n";
		break;
		case 3:
		cout << "This is case 3.\n";
		break;
		default:
		cout << "INVALID SELECTION.\n";
		
  }
  //end of switch statement (number)
  
  //Display closing Message and call the Destructor for any last parts of the program.
  DisplayClosingMessage();
  
  //Begining of switch statment (choice) and its declararion
  char choice;
  cout << "***** MENU *****\n";
  cout << "Y) CONTINUE PROGRAM.\n";
  cout << "N) EXIT PROGRAM.\n";
  cin >> choice;
  switch(choice)
  {
		case 'n':
		case 'N':
		cout << "YOU HAVE CHOOSEN TO END THE PROGRAM.\n";
		break;
		case 'y':
		case 'Y':
		cout << "YOU HAVE CHOOSEN TO CONTINUE WITH THE PROGRAM.\n";
		break;
		default:
		cout << "INVALID CHOICE PLEASE ENTER IN YES [Y] OR NO [N] TO CONTINUE.\n";
  }
  //End of switch statement (choice)
  
  system("read");
  cout << "The line below this is the destructor.\n";//CLOSING MESSAGE FOR THE DESTRUCTOR TO DISPLAY BEFORE THIS LINE
  return 0;
}//Program End


/*****************************************************************************************/
//    VOID FUCTIONS DECLARED FOR THE PROGRAM TO REDUCE THE CODE FILE AMOUNT BY SOME      //
/****************************************************************************************/
void DisplayWelcomeMessage()
{
  cout << "Welcome to the Final Project.\n";
  cout << "Please select an option from the menu to begin.\n";
}

void DisplayClosingMessage()
{
  cout << "Thank you for using the application.\n";
  cout << "Would you like to do something else?.\n";
}

void PressEnter()
{
  cout << "Press Enter to Continue." << endl;
}

void SwitchStatementNested()
{
  char selection;
  cout << "Y) Yes.\n";
  cout << "N) No.\n";
  cin >> selection;
  switch(selection)
  {
		case 'y':
		case 'Y':
		cout << "The save file will now be over written.\n";
		break;
		case 'n':
		case 'N':
		cout << "Returning to the main menu.\n";
		break;
		default:
		cout << "PLEASE SELECT A VALID OPTION.\n";
		
  }
}
