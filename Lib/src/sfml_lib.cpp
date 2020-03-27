/*
** EPITECH PROJECT, 2020
** EPI 2 ème année
** File description:
** sfml_lib
*/

#include "../include/sfml_lib.hpp"

extern "C" IGraphical *createObj(void) 
{
    return new sfml_lib();
}

extern "C" void destroyObj(IGraphical *gam) 
{
    delete gam;
}

sf::Color check_Color(std::string Color, std::map<std::string, sf::Color> Diff_Color)
{
    auto i = Diff_Color.find(Color);
    if (i != Diff_Color.end())
        return (i->second);
    return (sf::Color::Cyan);
}

void sfml_lib::WindowStart(std::pair<int, int> dim, std::string const &name)
{
    _window.create(sf::VideoMode(dim.first, dim.second), name);
}

const char *sfml_lib::get_Input() const
{
    for (auto &i : Key_list){
       if (sf::Keyboard::isKeyPressed(i.second))
       return (i.first.c_str());
    }
    return "Def";
}

void sfml_lib::game_display()
{
    WindowClear();
    _window.setFramerateLimit(60);
    for (int i = 0;  i < display_list.size(); i++){
        _window.draw(display_list[i]->_sprite);
    }
   _window.display();
}

void sfml_lib::loading(std::vector<ui_elem *> disp)
{
    int len = 0;
    //elemt_trash();
    if (display_list.empty()) {
        for (int i = 0; i < disp.size(); i++){
            Rect *info  = dynamic_cast<Rect *> (disp[i]);
            this->display_list.push_back(std::make_unique<sf_list>());
            if (display_list.back()->_texture.loadFromFile(info->path)){
                display_list.back()->_sprite.setTexture(display_list.back()->_texture);
                display_list.back()->_sprite.setPosition(info->pos.first * 15, info->pos.second *  15);
                display_list.back()->_sprite.scale(0.5f, 0.5f);
                display_list.back()->fixed = info->fix;
            }
            else {
                display_list.back()->rect = sf::RectangleShape(sf::Vector2f(15.f, 15.f));
                display_list.back()->rect.setFillColor(check_Color(info->color, Diff_Color));
                display_list.back()->pos = std::make_pair(info->pos.first, info->pos.second);
                display_list.back()->fixed = info->fix;
            }
        }
    } else {
         elemt_trash();
        for (int i = 0; i < disp.size(); i++){
            Rect *info  = dynamic_cast<Rect *> (disp[i]);
            if (info->fix == false)
                this->display_list.push_back(std::make_unique<sf_list>());
            if (info->fix == false && display_list.back()->_texture.loadFromFile(info->path)){
                display_list.back()->_sprite.setTexture(display_list.back()->_texture);
                display_list.back()->_sprite.setPosition(info->pos.first * 15, info->pos.second *  15);
                display_list.back()->_sprite.scale(0.5f, 0.5f);
                display_list.back()->fixed = info->fix;
                len++;
            }
            else if (info->fix == false) {
                display_list.back()->rect = sf::RectangleShape(sf::Vector2f(15.f, 15.f));
                display_list.back()->rect.setFillColor(check_Color(info->color, Diff_Color));
                display_list.back()->pos = std::make_pair(info->pos.first, info->pos.second);
                display_list.back()->fixed = info->fix;
                len++;
            }
        }  
    }
    game_display();
}


void sfml_lib::elemt_trash()
{
 display_list.erase(
        std::remove_if(
            display_list.begin(), display_list.end(),
            [](std::unique_ptr<sf_list> const &i){return i->fixed == false;}
        ),
        display_list.end()
    );
}
bool sfml_lib::WindowClear()
{
    this->_window.clear(sf::Color::Black);
    return (true);
}

bool sfml_lib::destroy_all()
{
    display_list.erase(display_list.begin(), display_list.end());
}

bool sfml_lib::destroy_window()
{
    _window.close();
}


bool sfml_lib::program_run()
{
    sf::Event event;

    while (_window.pollEvent(event))
        if (event.type == sf::Event::Closed)
            return (false);
    return (true);
} 