#include "library.h"

int main() {
    FrameX::out("Standard Text", FRAMEX_TEXT_STD);
    FrameX::out("Header", FRAMEX_TEXT_HEADER);
    FrameX::out("Box Type 1", FRAMEX_TEXT_BOX_1);
    FrameX::out("Box Type 2", FRAMEX_TEXT_BOX_2);
    FrameX::out("Warning", FRAMEX_TEXT_WARNING);
    FrameX::out("Information", FRAMEX_TEXT_INFO);
    FrameX::out("Good luck debugging", FRAMEX_TEXT_DEBUG);
    FrameX::out("A critical Error occured", FRAMEX_TEXT_ERROR);
    FrameX::out("Everything's Fine", FRAMEX_TEXT_SUCCESS);
    FrameX::out("Bullet Type 1", FRAMEX_TEXT_BULLET_1);
    FrameX::out("Bullet Type 2", FRAMEX_TEXT_BULLET_2);
    FrameX::out("Is there a typo?", 0x161);
}