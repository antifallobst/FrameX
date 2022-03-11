#ifndef FRAMEX_LIBRARY_H
#define FRAMEX_LIBRARY_H

#include <string>

// region Mode Definitions

#define FRAMEX_TEXT_STD 0x0
/* Lorem ipsum dolor sit amet */

#define FRAMEX_TEXT_HEADER 0x1
/* !===== Lorem ipsum =====! */

#define FRAMEX_TEXT_BOX_1 0x2
/* !==================================!
 * !==  Lorem ipsum dolor sit amet  ==!
 * !==================================! */

#define FRAMEX_TEXT_BOX_2 0x3
/* +------------------------------+
 * |  Lorem ipsum dolor sit amet  |
 * +------------------------------+ */

#define FRAMEX_TEXT_WARNING 0x4
/* WARNING > Lorem ipsum dolor sit amet */

#define FRAMEX_TEXT_INFO 0x5
/* INFO > Lorem ipsum dolor sit amet */

#define FRAMEX_TEXT_DEBUG 0x6
/* DEBUG > Lorem ipsum dolor sit amet */

#define FRAMEX_TEXT_ERROR 0x7
/* ERROR > Lorem ipsum dolor sit amet */

#define FRAMEX_TEXT_SUCCESS 0x8
/* SUCCESS > Lorem ipsum dolor sit amet */

#define FRAMEX_TEXT_BULLET_1 0x9
/*   ==> Lorem ipsum dolor sit amet */

#define FRAMEX_TEXT_BULLET_2 0xA
/*      -> Lorem ipsum dolor sit amet */

// endregion Mode Definitions

// region Color Definitions
#define ANSI_COLOR_RESET      "\x1B[0m"
#define ANSI_COLOR_RED        "\x1B[91m"
#define ANSI_COLOR_CYAN       "\x1B[96m"
#define ANSI_COLOR_YELLOW     "\x1B[93m"
#define ANSI_COLOR_MAGENTA    "\x1B[95m"
#define ANSI_COLOR_GREEN      "\x1B[92m"
#define ANSI_COLOR_BLUE      "\x1B[94m"

// endregion Color Definitions


namespace FrameX {
    void out(std::string str, uint8_t Mode = FRAMEX_TEXT_STD);
    std::string textInput(std::string str);
    bool yesNoInput(std::string str);
}

#endif //FRAMEX_LIBRARY_H
