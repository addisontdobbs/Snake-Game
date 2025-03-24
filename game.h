#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game();
    void Run();

private:
    void Draw();
    void Input();
    void Logic();
    void Setup();

    bool gameOver;
    const int width = 20;
    const int height = 20;
    int x, y, fruitX, fruitY, score;
    int tailX[100], tailY[100];
    int nTail;
    enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
    eDirection dir;
};

#endif
