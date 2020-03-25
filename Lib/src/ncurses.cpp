/*
** EPITECH PROJECT, 2020
** arcade
** File description:
** ncurses
*/

#include "../include/ncurses.hpp"

char* ncurses::getCh()
{
    for (auto &key : idKey) {
        if (key.second == getch()) {
            return (key.first.c_str());
        }
    }
    return "nok";
}

int ncurses::windowCreation()
{
    initscr();
    keypad(stdscr, TRUE);
    curs_set(FALSE);

    return(0);
}

int ncurses::loading(std::vector<ui_elem*> vui)
{
    Rect *r;

    for (auto &x : vui) {
        Rect *v = <Rect *>(x);
        if (v->color == "Red")
            mvprintw(v->pos.second, v->pos.first * 2, "R");
        if (v->color == "Blue")
            mvprintw(v->pos.second, v->pos.first * 2, "b");
        if (v->color == "Green")
            mvprintw(v->pos.second, v->pos.first * 2, "G");
        if (v->color == "Yellow")
            mvprintw(v->pos.second, v->pos.first * 2, "Y");
        if (v->color == "Black")
            mvprintw(v->pos.second, v->pos.first * 2, "B");
    }
    return (0);
} 