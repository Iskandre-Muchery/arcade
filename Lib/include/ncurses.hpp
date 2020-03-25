/*
** EPITECH PROJECT, 2020
** arcade
** File description:
** ncurses
*/

#ifndef NCURSES_HPP_
#define NCURSES_HPP_


#include "../includes/IGraphical.hpp"
#include <termios.h>
#include <curses.h>
#include <sys/ioctl.h>
#include <vector>
#include <iostream>
#include <SFML/Graphics.hpp>

class ncurses : public IGraphical
{
    public:
        ncurses();
        ~ncurses();
        int windowCreation();
        int loading();
        void display();
        char *getCh();
        void delAll();
    protected:
    private:
        std::vector<std::string, int> idKey = {
            {"A", 'a'},
            {"Z", 'z'},
            {"L", 'l'},
            {"Q", 'q'},
            {"S", 's'},
            {"D", 'd'},
            {"F",'f'},
            {"M", 'm'},
            {"E", 'e'},
            {"Left", 0404},
            {"Right", 0405},
            {"Up", 0403},
            {"Down", 0402},
        };
}
#endif /* !NCURSES_HPP_ */
