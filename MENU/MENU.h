#pragma once
#include <string>
#include <memory>
#include "../MAIN/LEVEL.h"
class MENU :
    public LEVEL
{
public:
    MENU(class MAIN* main) :LEVEL(main) {
    };
    ~MENU() {};
    int create();
    void proc();
    void destroy();
private:
    void LoadIndices();
    void LoadTitleNames();
    //レベルインデックスの位置をマウスで変える
    void ChangeLevelIndices();
    char* LevelIndices; 
    int NumLevelIndices;
    int TileIndexMouseHolding;
    int TileIndexMouseOver;
    //メニュー描画
    void Draw();
    int Rows, Cols;
    float TileH, TileW;
    float OfstX, OfstY;
    float DivHue;
    float SizeText;
    std::string* Titles;
};

