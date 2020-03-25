/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

class IGame {
    public:
        virtual ~IGame() = default;
        virtual bool Init() = 0;
        virtual bool Destroy() = 0;


    protected:
    private:
};

#endif /* !IGAME_HPP_ */
