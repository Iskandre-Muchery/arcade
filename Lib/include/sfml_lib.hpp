/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** sfml_lib
*/

#ifndef SFML_LIB_HPP_
#define SFML_LIB_HPP_

    #include <string>
    #include <iostream>
    #include <memory>
    #include <vector>
    #include <algorithm>
    #include <SFML/Config.hpp>
    #include <SFML/Audio.hpp>
    #include <SFML/Main.hpp>
    #include <SFML/Graphics.hpp>
    #include "../../includes/IGraphical.hpp"
    #include "../../includes/ui_elem.hpp"

struct  sf_list {
    sf::Texture _texture;
    sf::RectangleShape rect;
    sf::Sprite _sprite;
    std::pair<int, int> pos;
    bool fixed;
};

    class sfml_lib : public IGraphical
    {
        public:
            sfml_lib() { }
             ~sfml_lib() { }
            bool program_run()override;
            void game_display()override;
            void elemt_trash()override;
            bool WindowClear()override;
            bool destroy_all()override;
            bool destroy_window()override;
            const char *get_Input() const override;
            void loading(std::vector<ui_elem *> disp)override;
            void WindowStart(std::pair<int, int>, std::string const &name) override;
        protected:
        private:

        sf::RenderWindow _window;
        sf::Font _font;
        std::vector<sf::Texture> text;
        std::vector<std::unique_ptr<sf_list>> display_list;


        std::map<std::string, sf::Keyboard::Key> Key_list = {
        {"Up", sf::Keyboard::Up},
        {"Down", sf::Keyboard::Down},
        {"Left", sf::Keyboard::Left},
        {"Right", sf::Keyboard::Right},
        {"Z", sf::Keyboard::Z},
        {"Q", sf::Keyboard::Q},
        {"S", sf::Keyboard::S},
        {"D", sf::Keyboard::D},
        {"A", sf::Keyboard::A},
        {"L", sf::Keyboard::L},
        {"M", sf::Keyboard::M},
        {"F", sf::Keyboard::F},
        {"E", sf::Keyboard::E},
    };
        std::map<std::string, sf::Color>  Diff_Color = {
        {"Black",sf::Color::Black},
        {"White",sf::Color::White},
        {"Blue",sf::Color::Blue},
        {"Green",sf::Color::Green},
        {"Red", sf::Color::Red},
        {"Yellow",sf::Color::Yellow},
        {"Cyan", sf::Color::Cyan},
        {"Magenta", sf::Color::Magenta},
        {"Transparent", sf::Color::Transparent},
    };
};

#endif /* !SFML_LIB_HPP_ */
