#include <iostream>
#include <vector>
using namespace std;

void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (int i = 0; i < row.size(); ++i) {
            cout << row[i];
            if (i < row.size() - 1) cout << " | ";
        }
        cout << "\n---------\n";
    }
}

bool checkWinner(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool isDraw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') return false;
        }
    }
    return true;
}

void ticTacToe() {
    cout << "Welcome to Tic-Tac-Toe!\n";

    while (true) {
        vector<vector<char>> board(3, vector<char>(3, ' '));
        vector<char> players = {'X', 'O'};
        int currentPlayer = 0;

        while (true) {
            printBoard(board);
            cout << "Player " << players[currentPlayer] << "'s turn.\n";

            int move;
            cout << "Enter your move (1-9, where 1 is top-left and 9 is bottom-right): ";
            cin >> move;

            if (move < 1 || move > 9) {
                cout << "Invalid input. Please enter a number between 1 and 9.\n";
                continue;
            }

            int row = (move - 1) / 3;
            int col = (move - 1) % 3;

            if (board[row][col] != ' ') {
                cout << "Cell is already taken. Choose another.\n";
                continue;
            }

            board[row][col] = players[currentPlayer];

            if (checkWinner(board, players[currentPlayer])) {
                printBoard(board);
                cout << "Player " << players[currentPlayer] << " wins!\n";
                break;
            }

            if (isDraw(board)) {
                printBoard(board);
                cout << "It's a draw!\n";
                break;
            }

            currentPlayer = 1 - currentPlayer;
        }

        string playAgain;
        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
        if (playAgain != "yes") {
            cout << "Thanks for playing!\n";
            break;
        }
    }
}

int main() {
    ticTacToe();
    return 0;
}
