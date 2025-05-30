# 🧩 Score-4 Game for 2 Players (C Language)

Welcome to the **Score-4 Game**, a command-line implementation of the classic "Connect Four" game, written entirely in **C** as part of a university assignment. This project simulates a two-player board game with turn-based gameplay, symbol selection, dynamic board display, and win/tie detection.

---

## 📌 Features

- ✅ Fully interactive terminal-based gameplay
- ✅ Input validation (names, ages, moves)
- ✅ Support for identical names & automatic renaming
- ✅ Symbol selection (X or O) based on player's age
- ✅ Win detection (horizontal, vertical, diagonal)
- ✅ Tie/draw detection
- ✅ Extra level: from 7×7 board to 8×8 if draw
- ✅ Modular input reading with `read_text()`

---

## 🎮 How to Play

1. Players enter their **names** and **ages**
2. The player with the **higher age** selects their symbol (`x` or `o`)
3. A 7×7 game board is initialized
4. Players take turns dropping their symbol into one of the 7 columns
5. The game checks after every move for:
   - 4-in-a-row horizontally, vertically, or diagonally
   - Full board (declared tie and move to 8×8 board)

If the game ends in a tie, the players are given a second chance to win on an **8×8 board**.

---

## 🗂️ File Structure

- `main.c`: the full implementation
- `read_text()`: custom input handling to replace `gets()` and avoid overflow
- `mak[7][7]`, `mak1[8][8]`: 2D arrays used for both board sizes

---

## ⚠️ Requirements

- C compiler (GCC or MSVC)
- Terminal/Command prompt environment
- No external libraries required

---

## ✏️ Notes

- The project uses `#pragma warning(disable : 4996)` to suppress `fgets` warnings on MSVC.
- All user inputs are validated.
- Code includes **Greek** comments for readability by the original developer.

---

## 📸 Sample Gameplay (Console Output)
Welcome to Score-4 Game for 2
Player 1: John
Player 2: John
!!!Names are identical setting automatically player2 name to John2

Welcome John, John2

John selects symbol ('x' or 'o'): x
John2 will use o

0 1 2 3 4 5 6
0 - - - - - - -
1 - - - - - - -
...
## 👨‍💻 Author

**Apostolos Katsios**  
🆔 AEM: 24075  
📧 Email: apokatsi@ihu.gr

---

## 📜 License

This project is created for **educational purposes** and is part of a course assignment. All rights reserved by the author.
