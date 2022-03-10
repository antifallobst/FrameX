#include "library.h"

#include <iostream>

namespace FrameX {

    void out(std::string str, uint8_t Mode){
        std::cout << std::endl;

        switch (Mode){
            case FRAMEX_TEXT_STD:
                std::cout << str;
                break;

            case FRAMEX_TEXT_HEADER:
                std::cout << ANSI_COLOR_BLUE << "!===== " << ANSI_COLOR_RESET << str << ANSI_COLOR_BLUE << " =====!" << ANSI_COLOR_BLUE;
                break;

            case FRAMEX_TEXT_BOX_1:
                std::cout << ANSI_COLOR_BLUE << "!===="; for(int i = 0; i < str.length(); i++) { std::cout << "="; } std::cout << "====!\n";
                std::cout << "!==  " << ANSI_COLOR_RESET << str << ANSI_COLOR_BLUE << "  ==!\n";
                std::cout << "!===="; for(int i = 0; i < str.length(); i++) { std::cout << "="; } std::cout << "====!" << ANSI_COLOR_BLUE;
                break;

            case FRAMEX_TEXT_BOX_2:
                std::cout << ANSI_COLOR_BLUE <<"+--"; for(int i = 0; i < str.length(); i++) { std::cout << "-"; } std::cout << "--+\n";
                std::cout << "|  " << ANSI_COLOR_RESET << str << ANSI_COLOR_BLUE << "  |\n";
                std::cout << "+--"; for(int i = 0; i < str.length(); i++) { std::cout << "-"; } std::cout << "--+" << ANSI_COLOR_RESET;
                break;

            case FRAMEX_TEXT_WARNING:
                std::cout << ANSI_COLOR_YELLOW << "WARNING" << ANSI_COLOR_RESET <<" > " << str;
                break;

            case FRAMEX_TEXT_INFO:
                std::cout << ANSI_COLOR_MAGENTA << "INFO" << ANSI_COLOR_RESET <<" > " << str;
                break;

            case FRAMEX_TEXT_DEBUG:
                std::cout << ANSI_COLOR_CYAN << "DEBUG" << ANSI_COLOR_RESET <<" > " << str;
                break;

            case FRAMEX_TEXT_ERROR:
                std::cout << ANSI_COLOR_RED << "ERROR" << ANSI_COLOR_RESET <<" > " << str;
                break;

            case FRAMEX_TEXT_SUCCESS:
                std::cout << ANSI_COLOR_GREEN << "SUCCESS" << ANSI_COLOR_RESET <<" > " << str;
                break;

            case FRAMEX_TEXT_BULLET_1:
                std::cout << ANSI_COLOR_BLUE << "  ==> " << ANSI_COLOR_RESET << str;
                break;

            case FRAMEX_TEXT_BULLET_2:
                std::cout << ANSI_COLOR_BLUE << "     -> " << ANSI_COLOR_RESET << str;
                break;


            default:
                std::cout << ANSI_COLOR_RED << "[- UNKNOWN_FRAMEX_OUT_MODE -] "<< ANSI_COLOR_RESET << str;
        }
    }

    std::string in(std::string, uint8_t Mode){
        std::cout << std::endl;

    }
}