#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLIne, int nCmdShow)
{
    ChangeWindowMode(TRUE);

    if (DxLib_Init() < 0) {
        return 1;
    }

    SetDrawScreen(DX_SCREEN_BACK);

    while (!ProcessMessage()) {
        ClearDrawScreen();

        DrawString(20, 20, "hello, world!", GetColor(255, 255, 255));

        ScreenFlip();
    }

    DxLib_End();

    return 0;
}
