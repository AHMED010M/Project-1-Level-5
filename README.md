
# Rock, Paper, Scissors Game 🎮✋📰

This is a simple implementation of the classic "Rock, Paper, Scissors" game where you play against the computer. The game allows multiple rounds and tracks the score, showing the results at the end of the game. 🏆

## Game Rules ⚖️

- **Rock** beats **Scissors** ✊ > ✂️
- **Scissors** beats **Paper** ✂️ > 📄
- **Paper** beats **Rock** 📄 > ✊
- If both the player and the computer choose the same option, it's a **draw**.

## Features 🌟

- Play up to 10 rounds at a time 🎲
- Track the number of wins, losses, and draws 🏅
- Display results at the end of the game 🎉
- Color-coded results for easy reading (Green for Player win, Yellow for Draw, Red for PC win) 🟢🟡🔴

## How to Play 🎮

1. When you run the game, you will be prompted to enter the number of rounds you'd like to play (1-10).
2. Each round, you will choose one of the three options: Rock, Paper, or Scissors.
3. The computer will randomly choose one of these options.
4. The game will determine the winner of each round and update the score accordingly.
5. At the end of the game, you will see the final score and the overall winner.

## How to Run 🖥️

1. Clone or download the repository.
2. Make sure you have a C++ compiler installed (e.g., GCC or Visual Studio).
3. Compile the code using your preferred C++ compiler.
4. Run the compiled executable to start playing the game!

```bash
g++ rock_paper_scissors.cpp -o rock_paper_scissors
./rock_paper_scissors
```

## Code Structure 🏗️

- **Game logic**: Handles player input, computer random choice, and determines the round winner.
- **UI**: Displays the choices of the player and computer, as well as the round result.
- **Colors**: Uses the console's color codes to represent the game results (Green for Player's win, Yellow for Draw, Red for PC's win).
- **Results**: After all rounds, the total wins, losses, and draws are displayed, along with the final winner.

## Sample Output 🖨️

```text
Your Choice [1] Stone, [2] Paper, [3] Scissors: 1

_______ Round [1] _______

Player Choice : Stone
PC Choice     : Scissors
Round Winner  : Player
_________________________

Game Round : 3
Player won times : 2
PC won times : 1
Draw times : 0
Final Winner : Player
```

## Contributing 🤝

Feel free to fork this project, submit issues, and send pull requests! 🚀

## License 📜

This project is open-source and available under the [MIT License](LICENSE).

Enjoy the game! 😄✌️
