#include "Board.h"

Board board;

char puzzle[][9] = {
  {'*','*','*', '*','*','5', '3','4','7'},
  {'*','5','6', '4','*','1', '2','*','*'},
  {'*','*','*', '7','*','*', '5','6','*'},
  {'*','8','1', '*','4','9', '*','2','6'},
  {'*','*','7', '*','*','*', '9','*','*'},
  {'*','*','*', '*','2','*', '*','*','4'},
  {'*','*','8', '3','5','6', '*','*','2'},
  {'5','4','*', '*','7','*', '*','1','9'},
  {'*','*','2', '*','*','*', '*','5','*'}
};

void setup() {
  // initialize serial:
  Serial.begin(9600);
  
  Serial.println("Puzzle:");
  board.Init(puzzle);
  board.Print();

  Serial.println("Solving...");
  board.Solve();
  
  Serial.println("SOLVED:");
  board.Print();

  Serial.print("Board(1,2)=");
  Serial.println((board.GetCell(1,2)).Val());

  Serial.print("Board(1,3)=");
  Serial.println((board.GetCell(1,3)).Val());
}

void loop() {
}

