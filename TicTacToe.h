#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe {
  char **board;

public:
  TicTacToe() {
    char nums[] = {'1','2','3', '4','5','6', '7','8','9'};

    board = new char*[3];
    for (int i = 0; i < 3; i++) {
      board[i] = new char[3];
    }

    for (int i = 0, index = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++, index++) {
        board[i][j] = nums[index];
      }
    }
  }

  void displayBoard() {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (j == 2 || j == 1) cout << "|";
        cout << board[i][j];
      }
      cout << endl;
      if (i == 0 || i == 1) cout << "-+-+-" << endl;
    }
  }

};

#endif
