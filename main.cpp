



#include <bits/stdc++.h>

using namespace std;

char board[3][3];





void displayboard2(int board2[])
{
    std::cout<<"                "<<board2[0]<<"  |  "<<board2[1]<<"   |  "<<board2[2]<<endl;
    std::cout<<"              __________________"<<endl;

    std::cout<<"                "<<board2[5]<<"  |  "<<board2[4]<<"   |  "<<board2[3]<<endl;
    std::cout<<"              __________________"<<endl;

    std::cout<<"                "<<board2[6]<<"  |  "<<board2[7]<<"   |  "<<board2[8]<<endl;
}


void displayboard()
{
    std::cout<<"                "<<board[0][0]<<"  |  "<<board[0][1]<<"   |  "<<board[0][2]<<endl;
    std::cout<<"              _____________________"<<endl;

    std::cout<<"                "<<board[1][0]<<"  |  "<<board[1][1]<<"   |  "<<board[1][2]<<endl;
    std::cout<<"              _____________________"<<endl;

    std::cout<<"                "<<board[2][0]<<"  |  "<<board[2][1]<<"   |  "<<board[2][2]<<endl;
}

char ans;

bool result()
{
    if(board[0][0] == board[0][1] && board[0][1]==board[0][2] && board[0][0] != ' ')
    {
        if(board[0][0] == 'x')
           ans = 'x';
        else
            ans = 'O';



            return true;
    }
    else if(board[0][0] == board[1][0] && board[1][0]==board[2][0] && board[0][0] != ' ')
    {
        if(board[0][0] == 'x')ans = 'x';
        else
            ans = 'O';


            return true;
    }
    else if(board[0][0] == board[1][1] && board[1][1]==board[2][2] && board[0][0] != ' ')
    {
        if(board[0][0] == 'x')ans = 'x';
        else
            ans = 'O';


            return true;
    }
    else if(board[0][1] == board[1][1] && board[1][1]==board[2][1] && board[0][1] != ' ')
    {
        if(board[0][1] == 'x')ans = 'x';
        else
            ans = 'O';


            return true;
    }
    else if(board[0][2] == board[1][1] && board[1][1]==board[2][0] && board[0][2] != ' ')
    {
        if(board[0][2] == 'x')ans = 'x';
        else
            ans = 'O';


            return true;
    }
    else if(board[1][0] == board[1][1] && board[1][1]==board[1][2] && board[1][0] != ' ')
    {
        if(board[1][0] == 'x')ans = 'x';
        else
            ans = 'O';

            return true;
    }
    else if(board[2][0] == board[2][1] && board[2][1]==board[2][2] && board[2][0] != ' ')
    {
        if(board[2][0] == 'x')ans = 'x';
        else
            ans = 'O';


            return true;
    }
    else if(board[0][2] == board[1][2] && board[1][2]==board[2][2] && board[0][2] != ' ')
    {
        if(board[0][2] == 'x')
            ans = 'x';
        else
            ans = 'O';
        return true;
    }

    return false;
}

void tictac()
{
    jump: displayboard();

    int p1=0,p2=0;
    int turn =0;
    bool flag = true;
    while(flag)
    {
        int cur = -1;
        if(turn%2 == 0)
            {
                cout<<"player 1's turn"<<endl;
                cin>>p1;
                cur = p1;
            }
        else
            {
                cout<<"player 1's turn"<<endl;
                cin>>p2;
                cur = p2;
            }

        if(cur == 0)
        {
            if(board[0][0] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[0][0] = 'x';
                }
                else
                    board[0][0] = 'O';
            }
            else
                continue;
        }
        else if(cur == 1)
        {
            if(board[0][1] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[0][1] = 'x';
                }
                else
                    board[0][1] = 'O';
            }
            else
                continue;

        }
        else if(cur == 2)
        {
            if(board[0][2] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[0][2] = 'x';
                }
                else
                    board[0][2] = 'O';
            }
            else
                continue;

        }else if(cur == 3)
        {
            if(board[1][0] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[1][0] = 'x';
                }
                else
                    board[1][0] = 'O';
            }
            else
                continue;

        }else if(cur == 4)
        {
            if(board[1][1] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[1][1] = 'x';
                }
                else
                    board[1][1] = 'O';
            }
            else
                continue;

        }
        else if(cur == 5)
        {
            if(board[1][2] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[1][2] = 'x';
                }
                else
                    board[1][2] = 'O';
            }
            else
                continue;

        }
        else if(cur == 6)
        {
            if(board[2][0] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[2][0] = 'x';
                }
                else
                    board[2][0] = 'O';
            }
            else
                continue;

        }
        else if(cur == 7)
        {
            if(board[2][1] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[2][1] = 'x';
                }
                else
                    board[2][1] = 'O';
            }
            else
                continue;

        }
        else if(cur == 8)
        {
            if(board[2][2] == ' ')
            {
                if(turn%2 == 0)
                {
                    board[2][2] = 'x';
                }
                else
                    board[2][2] = 'O';
            }
            else
                continue;

        }

        if(result())
        {
            flag = false;
        }
        if(turn == 8)
            break;
        turn++;
        goto jump;

    }
    if(!result())
        std::cout<<"draw"<<endl;
    else if(ans == 'x')
    std::cout<<"player 1 won"<<endl;
    else if(ans  == 'O')
        std::cout<<"player 2 won"<<endl;
}


int main()
{
    int board2[9];
    for(int z=0;z<9;z++)
    board2[z] = z;

    displayboard2(board2);
    std::cout<<endl<<endl<<endl;

int k = 0;
    for(int i=0;i<3;i++)
        for(int j = 0;j<3;j++)
            {
                board[i][j] = ' ';
            }
    tictac();
}





















