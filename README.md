# Encryptix_Task_3
# Tic-Tac-Toe Game - README

## Description
This is a console-based Tic-Tac-Toe game for two players written in C++. Players take turns marking spaces on a 3×3 grid, with one player using 'X' and the other using 'O'. The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins.

## Features
- Clear board display with numbered positions (1-9)
- Two-player turn-based gameplay
- Input validation to prevent invalid moves
- Win condition checking for all possible winning combinations
- Automatic screen clearing between moves (Windows only)
- Simple and intuitive interface

## How to Run
1. Ensure you have a C++ compiler installed (e.g., g++)
2. Compile the program: `g++ task3.cpp -o tictactoe`
3. Run the executable: `./tictactoe` (Linux/Mac) or `tictactoe.exe` (Windows)

## Game Instructions
1. The board positions are numbered from 1 to 9 (left to right, top to bottom)
2. Players alternate turns:
   - Player 1 is 'X'
   - Player 2 is 'O'
3. On your turn, enter the number (1-9) of the position you want to mark
4. The game continues until:
   - A player gets three in a row (win)
   - All spaces are filled without a winner (draw)

## Requirements
- C++ compiler
- Standard Library (iostream)
- Windows.h (for screen clearing functionality - Windows only)

## Notes
- The program uses `system("cls")` to clear the screen between moves (Windows-specific)
- Input validation ensures:
  - Only numbers 1-9 are accepted
  - Players can't mark an already occupied space
- The game automatically detects wins and ends immediately

## Example Gameplay
```
Current Board:
   |   |  
---|---|---
   |   |  
---|---|---
   |   |  

Player 1's Turn:
Enter the number between 1-9
5
[Screen clears...]
Current Board:
   |   |  
---|---|---
   | X |  
---|---|---
   |   |  

Player 2's Turn:
Enter the number between 1-9
1
[Screen clears...]
Current Board:
 O |   |  
---|---|---
   | X |  
---|---|---
   |   |  
```

Enjoy this classic game with a friend! The simple interface makes it easy to play anywhere with a C++ compiler.
