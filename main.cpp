#include <iostream>
#include <string>
#include "World.h"
#include "Item.h"
#include "Game.h"
using namespace std;

int main() {
  bool isMainLoop = true;
  string input;
  
  // change game_name to whichever files you have uploaded

  string game_name = "jungle";
  char single_input;
  int point_total = 0;
  string player_name;

  cout << "There are two map files available:" << endl <<
        "g: ghostwood" << endl <<
        "j: jungle" << endl <<
        "Select a map: ";
  getline(cin,input);
  if (input.at(0) == 'g') {
    cout << "Loading Ghostwood" << endl << endl;
    game_name = "ghostwood";

  }
  else if (input.at(0) == 'j') {
    cout << "Loading Jungle" << endl << endl;
  }
  else {
    cout << "Invalid input, loading Jungle by default" << endl << endl;
  }

  Game game(game_name);
  game.printStartMessage();
  cout << "\n";
  cout << "Please enter your name: ";
  getline(cin, player_name);

  cout << "Hello, " << player_name << "! Would you like a quick tutorial? (y/n): ";
  getline(cin, input);
  if (input.at(0) == 'y') {
    game.printInstructions();

  }
  else {
    cout << endl;
  }

  game.printDescription();
  

  while (isMainLoop) {
    
    cout << endl << "Next? ";
    getline(cin, input);
    cout << endl;

    while (input.length() == 0) {
      cout << endl << "Next? ";
      getline(cin, input);
      cout << endl;
    }
    single_input = input.at(0);

    if(input.at(0) == '#') {

    }
    else if(input.at(0) == 'q') {
      cout << "Are you sure you want to quit?  ";
      getline(cin, input);

      if (input.at(0) == 'y') {
        isMainLoop = false;
      }
    }
    else if(input.at(0) == 'n') {
      game.moveNorth();
    }
    else if(input.at(0) == 'w') {
      game.moveWest();
    }
    else if(input.at(0) == 'e') {
      game.moveEast();
    }
    else if(input.at(0) == 's') {
      game.moveSouth();
    }
    else if(input.at(0) == 't') {
      cout << "Take what? ";
      getline(cin, input);
      if (input.length() == 0) {
        cout << "Invalid command!\n";
      }
      else {
        single_input = input.at(0);
        game.takeItem(single_input);
      }
      
      
    }
    else if (input.at(0) == 'l') {
      cout << "Leave what? ";
      getline(cin, input);
      if (input.length() == 0) {
        cout << "Invalid command!\n";
      }
      else {
        single_input = input.at(0);
        game.leaveItem(single_input);
      }
    }
    else if (input.at(0) == 'i') {
      game.printInventory();
    }
    else if (input.at(0) == 'r') {
      cout << "Are you sure you want to restart?  ";
      getline(cin, input);

      if (input.at(0) == 'y') {
        game.printScore();
        game.updateScoreTable(player_name);
        cout << endl;
        game.reset();
        game.printDescription();
      }
    }
    else {
      cout << "Invalid command!\n";
    }

    if (game.isOver()) {
      cout << endl << "Would you like to play again?  ";
      getline(cin, input);

      if (input.at(0) == 'y') {
        game.printScore();
        game.updateScoreTable(player_name);
        cout << endl;
        game.reset();
        game.printDescription();
      }
      else {
        isMainLoop = false;
      }
    }
    
  }

  cout << "\n";
  
  game.printScore();
  game.updateScoreTable(player_name);
  game.printEndMessage();
  
  if (!isMainLoop) {
    cout << "\nPress [ENTER] to continue... ";
    string line;
    getline(cin, line);
  }
  
  return 0;
}
