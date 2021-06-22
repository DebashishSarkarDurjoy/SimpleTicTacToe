#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "TicTacToe.h"


void displayBoard(char* board) {
  char outChar;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      outChar = *board;
      if (j == 2 || j == 1) cout << "|";
      cout << outChar;
      board++;
    }
    cout << endl;
    if (i == 0 || i == 1) cout << "-+-+-" << endl;
  }
}

int main(void) {

  TicTacToe game;
  game.displayBoard();

  // const char PLAYER_O = 'O';
  // const char PLAYER_X = 'X';
  //
  // char lastPlayer = PLAYER_O, currentPlayer = PLAYER_X;
  //
  // char board[][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
  //
  // displayBoard(&board[0][0]);
  // cout << endl << endl;
  //
  // int input;
  // int x, y;
  // char playerTurn = PLAYER_X;
  // for (int turn = 0; turn < 9; turn++) {
  //   cout << playerTurn << " Turn: ";
  //   cin >> input;
  //   input--;
  //   x = (input % 3);
  //   y = (input / 3);
  //
  //   if (board[y][x] == PLAYER_X || board[y][x] == PLAYER_O) {
  //     cout << "Invalid move: position already occupied!" << endl;
  //     turn--;
  //     continue;
  //   }
  //
  //   board[y][x] = playerTurn;
  //   cout << endl;
  //   displayBoard(&board[0][0]);
  //
  //   //checking for winning status
  //   bool win = false;
  //   //check the rows
  //   for (int row = 0; row < 3; row++) {
  //     int count = 0;
  //     for (int col = 0; col < 3; col++) {
  //       if (board[row][col] == playerTurn) count++;
  //     }
  //     if (count == 3) {
  //       win = true;
  //       break;
  //     }
  //   }
  //
  //   //check the columns
  //   for (int col = 0; col < 3; col++) {
  //     int count = 0;
  //     for (int row = 0; row < 3; row++) {
  //       if (board[row][col] == playerTurn) count++;
  //     }
  //     if (count == 3) {
  //       win = true;
  //       break;
  //     }
  //   }
  //
  //   //check the diagonal
  //   int count = 0;
  //   for (int i = 0; i < 3; i++) {
  //     if (board[i][i] == playerTurn) count++;
  //   }
  //   if (count == 3) win = true;
  //   count = 0;
  // 
  //   //check the other diagonal
  //   for (int row = 0, col = 2; row != col; row++, col--) {
  //     if (board[row][col] == playerTurn) count++;
  //   }
  //   if (count == 3) win = true;
  //
  //
  //   if (win) {
  //     cout << playerTurn << " Won the game!" << endl;
  //     break;
  //   }
  //   if (playerTurn == PLAYER_X) playerTurn = PLAYER_O;
  //   else playerTurn = PLAYER_X;
  // }


  return 0;
}
