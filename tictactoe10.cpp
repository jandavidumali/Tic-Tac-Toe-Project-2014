
/*Computer Tic tac toe
Sarte,Nigel
Guino,Jan Jeriel
Umali,Jan David
Villanueva, Jose lorenzo
*/
#include <iostream>
#include <string>
#include <ctime> //use for the srand (time(NULL));
#include <cstdlib> // use for the srand (time(NULL));
#define ROWS 3
#define COLUMNS 3
using namespace std;
void ai(); // this function is the one that randomizes the move of the ai--it's moves will not go to the occupied spots
void showBoard (); //this function shows the board
void player(string Player);
int checker(); 	// this function checks if there is a winner or a draw
char board[ROWS][COLUMNS];
void choice();// function if you want to play again or terminate the program
void player();//checks for invalid input from the player
int rows;
int columns;
int move; 
int main () 
{
system("cls");
//designates the spots on the board
board[0][0] = '0';
board[0][1] = '1';
board[0][2] = '2';
board[1][0] = '3';
board[1][1] = '4';
board[1][2] = '5';
board[2][0] = '6';
board[2][1] = '7';
board[2][2] = '8';
																
srand (time(NULL)); //the function that randomizes
																
string Player;
											
int totalMoves = 0;
int playersTurn = 1; //sets the player as the first one to move										


cout << "Welcome to Tic Tac Toe." << endl;
cout << "Please enter your name: ";
cin >> Player;
    while (checker()==0 && totalMoves < 9) 
	{   											
        showBoard ();
       				
        if (playersTurn==1) 
		{
			
          player(Player); //check for invalid input from the player
          
          
		  if(move==0){
          board[0][0] = 'x';
          }
          else if(move==1){
          board[0][1] = 'x';
          }
          else if(move==2){
          board[0][2] = 'x';
          }
          else if(move==3){
          board[1][0] = 'x';
          }
          else if(move==4){
          board[1][1] = 'x';
          }
          else if(move==5){
          board[1][2] = 'x';
          }
          else if(move==6){
          board[2][0] = 'x';
          }
          else if(move==7){
          board[2][1] = 'x';
          }
          else if(move==8){
          board[2][2] = 'x';
          } 
 	
          
		  playersTurn= 2; //sets the turn for the ai or cpu
    
        } 
		else 
		{ //lines 88-200 ensures that ai will detect imminent threat of winning from player will block the spot that will deny player to win
		  if(board[0][0]=='x' and board[0][1]=='x' and board[0][2] != 'o' and board[0][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<3<< endl;
		  board[0][2] = 'o';
		  }
		  else if(board[0][1]=='x' and board[0][2]=='x' and board[0][0] != 'o' and board[0][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<0<< endl;
		  board[0][0] = 'o';
		  }
		  else if(board[1][0]=='x' and board[1][1]=='x'and board[1][2] != 'o' and board[1][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<5<< endl;
		  board[1][2] = 'o';
		  }
		  else if(board[1][1]=='x' and board[1][2]=='x'and board[1][0] != 'o' and board[1][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<3<< endl;
		  board[1][0] = 'o';
		  }
		  else if(board[2][0]=='x' and board[2][1]=='x'and board[2][2] != 'o' and board[2][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<8<< endl;
		  board[2][2] = 'o';
		  }
		  else if(board[2][1]=='x' and board[2][2]=='x'and board[2][0] != 'o' and board[2][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<6<< endl;
		  board[2][0] = 'o';
		  }
		  else if(board[0][0]=='x' and board[1][0]=='x'and board[2][0] != 'o' and board[2][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<6<< endl;
		  board[2][0] = 'o';
		  }
		  else if(board[1][0]=='x' and board[2][0]=='x' and board[0][0] != 'o' and board[0][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<0<< endl;
		  board[0][0] = 'o';
		  }
		  else if(board[0][1]=='x' and board[1][1]=='x'and board[2][1] != 'o' and board[2][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<7<< endl;
		  board[2][1] = 'o';
		  }
		  else if(board[1][1]=='x' and board[2][1]=='x'and board[0][1] != 'o' and board[0][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<1<< endl;
		  board[0][1] = 'o';
		  }
		  else if(board[0][2]=='x' and board[1][2]=='x'and board[2][2] != 'o' and board[2][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<8<< endl;
		  board[2][2] = 'o';
		  }
		  else if(board[1][2]=='x' and board[2][2]=='x'and board[0][2] != 'o' and board[0][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<2<< endl;
		  board[0][2] = 'o';
		  }
		  else if(board[0][0]=='x' and board[1][1]=='x'and board[2][2] != 'o' and board[2][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<8<< endl;
		  board[2][2] = 'o';
		  }
		  else if(board[1][1]=='x' and board[2][2]=='x' and board[0][0] != 'o' and board[0][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<0<< endl;
		  board[0][0] = 'o';
		  }
		  else if(board[0][2]=='x' and board[1][1]=='x'and board[2][0] != 'o' and board[2][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<6<< endl;
		  board[2][0] = 'o';
		  }
		  else if(board[2][0]=='x' and board[1][1]=='x' and board[0][2] != 'o' and board[0][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<2<< endl;
		  board[0][2] = 'o';
		  }//
		  else if(board[0][0]=='x' and board[0][2]=='x' and board[0][1] != 'o' and board[0][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<1<< endl;
		  board[0][1] = 'o';
		  }else if(board[1][0]=='x' and board[1][2]=='x' and board[1][1] != 'o' and board[1][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<4<< endl;
		  board[1][1] = 'o';
		  }else if(board[2][0]=='x' and board[2][2]=='x' and board[2][1] != 'o' and board[2][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<7<< endl;
		  board[2][1] = 'o';
		  }else if(board[0][0]=='x' and board[2][0]=='x' and board[1][0] != 'o' and board[1][0] != 'x' )
		  {
		  cout << "The Computer's move is: " <<3<< endl;
		  board[1][0] = 'o';
		  }else if(board[0][1]=='x' and board[2][1]=='x' and board[1][1] != 'o' and board[1][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<4<< endl;
		  board[1][1] = 'o';
		  }else if(board[0][2]=='x' and board[2][2]=='x' and board[1][2] != 'o' and board[1][2] != 'x' )
		  {
		  cout << "The Computer's move is: " <<5<< endl;
		  board[1][2] = 'o';
		  }else if(board[0][2]=='x' and board[2][0]=='x' and board[1][1] != 'o' and board[1][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<4<< endl;
		  board[1][1] = 'o';
		  }else if(board[0][0]=='x' and board[2][2]=='x' and board[1][1] != 'o' and board[1][1] != 'x' )
		  {
		  cout << "The Computer's move is: " <<4<< endl;
		  board[1][1] = 'o';
		  }
		  
		  else
		  {
          ai();
		  }
          playersTurn= 1; //sets the turn for the player
		}

    totalMoves++;
	}
    
    showBoard ();
    system("cls");
    if (checker () == 1) 
	{
      													
      showBoard();
      cout << Player<<" has won the game!" << endl;
    } 
    else if (checker () == 2) 
	{
      													
      showBoard();
      cout << " The computer has won the game! " << endl;
    } 
    else if (!checker()) //if the total moves reaches 9 and there is no 3 consecutive "x" or "o" the  game is draw
	{
      														
      showBoard();
      cout << "It is a tie!" << endl;
    }
  choice();	
  return 0;
    }
    
void player(string Player){
	
	cout << Player << ": It's your turn" << endl;
    cout << "Enter the number of the spot where you'd like to move: ";
    cin >>move;
    
    if (move < 0 or move > 8){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    
    else if (move==0 && board[0][0] == 'o' or move==0 &&board[0][0] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==1 && board[0][1] == 'o' or move==1 && board[0][1] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==2 && board[0][2] == 'o' or move==2 && board[0][2] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==3 && board[1][0] == 'o' or move==3 && board[1][0] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==4 && board[1][1] == 'o' or move==4 && board[1][1] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==5 && board[1][2] == 'o' or move==5 && board[1][2] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==6 && board[2][0] == 'o' or move==6 && board[2][0] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==7 && board[2][1] == 'o' or move==7 && board[2][1] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }
    else if (move==8 && board[2][2] == 'o' or move==8 && board[2][2] == 'x'){
    	cout << "\nInvalid Move! Try again." << endl;
    	player(Player);
    }

}														  														
 													

void showBoard () {
  cout << endl;
  cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
  cout << "--+---+--" << endl;
  cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
  cout << "--+---+--" << endl;
  cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2]<< endl;
  cout << endl;
}


int checker () //this function returns 1 if the player is the winner and 2 if the ai or cpu is winner
{
if (board[0][0]== board[0][1] && board[0][1]== board[0][2]) 
{
  if (board[0][0] == 'x') 
  {
    return 1;
  } 
  else 
  {
    return 2;
  }
}
else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) 
{
  if (board[1][0] == 'x') 
  {
    return 1;
  } 
  else 
  {
    return 2;
  }
}
else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) 
{
  if (board[2][0] == 'x') 
  {
    return 1;
  } 
  else 
  {
    return 2;
  }
}
else if (board[0][0]== board[1][0] && board[1][0] == board[2][0]) 
{
  if (board[0][0] == 'x') 
  {
    return 1;
  } 
  else 
  {
    return 2;
  }
}
else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) 
{
  if (board[0][1] == 'x') 
  {
    return 1;
  } 
  else 
  {
    return 2;
  }
}
else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) 
{
  if (board[0][2] == 'x') 
  {
    return 1;
  }
   else 
   {
    return 2;
  }
}
else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
{
  if (board[0][0] == 'x') 
  {
    return 1;
  } 
  else 
  {
    return 2;
  }
}
else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
{
  if (board[0][2] == 'x') 
  {
    return 1;
  } 
  else 
  {
    return 2;
  }
}
return 0;
} 
		
void ai()
{
int move;
move = rand() % 9; //randomizes the move from 0-8
if(move==0 and board[0][0]!='x' and board[0][0]!='o')
	{
	cout << "The Computer's move is: " << move<< endl;
	board[0][0] = 'o';
	}
else if(move==1 and board[0][1]!='x' and board[0][1]!='o')
	{
cout << "The Computer's move is: " << move<< endl;
board[0][1] = 'o';
	}
else if(move==2 and board[0][2]!='x' and board[0][2]!='o')
	{
cout << "The Computer's move is: " << move<< endl;
board[0][2] = 'o';
	}
else if(move==3 and board[1][0]!='x' and board[1][0]!='o')
	{
cout << "The Computer's move is: " << move<< endl;	
board[1][0] = 'o';
	}
else if(move==4 and board[1][1]!='x' and board[1][1]!='o')
	{
cout << "The Computer's move is: " << move<< endl;	
board[1][1] = 'o';
	}
else if(move==5 and board[1][2]!='x' and board[1][2]!='o')
	{
cout << "The Computer's move is: " << move<< endl;
board[1][2] = 'o';
	}
else if(move==6 and board[2][0]!='x' and board[2][0]!='o')
	{
cout << "The Computer's move is: " << move<< endl;
board[2][0] = 'o';
	}
else if(move==7 and board[2][1]!='x' and board[2][1]!='o')
	{
cout << "The Computer's move is: " << move<< endl;
board[2][1] = 'o';
	}
else if(move==8 and board[2][2]!='x' and board[2][2]!='o')
	{
cout << "The Computer's move is: " << move<< endl;
board[2][2] = 'o';
	}
else
	{
	ai(); //this function will repeat if it doesnt satisfy any of the if statements.
	}
}


void choice() //function to retry or terminate the program
	{
	int retry;
	cout<<"\nDo you want to retry [Y/N]? 1 as yes/2 as No?:";
	cin>>retry;
	cout<<endl;
	switch (retry){
		case 1:
			main();
			break;
		case 2:
			cout<<"Program terminated\n";
			break;
		default:
			cout<<"Invalid input";
			choice();
			break;
				}
	
	}
