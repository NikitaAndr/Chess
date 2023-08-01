#include <iostream>

using namespace std;

class Board
/*класс доски, отвечающий за передвижение фигур и консольный вид доски*/
{
private:
    void init_empty_board(){
        board = new int*[8];
        board[0] = new int [8 * 8];
        for (size_t i = 0; i < 8; i++)
        {
            board[i] = board[i - 1] + 8;
        }
    }

    int** board;

public:
    Board(){
        init_empty_board();
    };
    ~Board();

    void print_board(){
        // for (short int i = 0; i < 8; i++)
        // {
        //     for (short int j = 0; j < 8; j++)
        //     {
        //         cout << board[i][j] << '|';
        //     }
        // }
        cout << 123;
    }
};