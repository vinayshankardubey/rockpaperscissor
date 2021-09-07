#include <iostream>

int main() {

  //variables
  char player1;
  char player2;
 
  //Taking Player 1 input
  std::cout << "Hey Player1 Write Your Option (R/P/S)\n";
  std::cin >> player1;

 //Taking Player 2 input
  std::cout << "Hey Player2 Write Your Option (R/P/S)\n";
  std::cin >> player2;
 
      if(player1 == player2){
      std::cout << "OHH! No!..... This game is Draw.. Play Again";
      }
       else {
            if(player1 == 'R' && player2 == 'S'){
            std::cout << "Great.. Player 1 Wins!!!!\n";
            }
            else if(player1 == 'P' && player2 == 'S'){
             std::cout << "Great.. Player 1 Wins!!!!\n";
            }
            else if(player1 == 'S' && player2 == 'R'){
              std::cout << "Great.. Player 1 Wins!!!!\n";
            }
    else{
    std::cout << "WOW..Player 2 Wins!\n";
     }
    }

  }


  