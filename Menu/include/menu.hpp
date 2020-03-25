/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** menu
*/

#ifndef MENU_HPP_
#define MENU_HPP_

    #include <string>
    #include <iostream>
    #include <memory>
    #include <vector>
    #include <SFML/Audio.hpp>
    #include <SFML/Config.hpp>
    #include <SFML/Graphics.hpp>
    #include <SFML/Main.hpp>

    using namespace sf;

    class Engine_Menu {
        private:

            void destroyComponents();
            void mouseMoved(int x, int y);
            void mouseClicked(int x, int y);
        public:
            Engine_Menu();
            ~Engine_Menu(void);
            void loadComponents();

            RenderWindow window;
            Texture background;
            Texture background_start;
            Texture background_game1;
            Texture background_game2;
            Texture background_gl;
            Texture background_sfml;
            Texture background_ncurses;
            Texture background_exit;
            Texture background_level;
            Texture sound_off;
            Texture sound_on;
            Sprite backgroundImage;
            Sprite sound;
            Font font;
            Text game;
            Text library;
            Text level;

            bool music;
            int state;
            bool runGame;
            bool run;
            bool error;

            void manageEvents(Event);
            void loopMenu(void);
            void draw(void);
    };

#endif /* !MENU_HPP_ */
