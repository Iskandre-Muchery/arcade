/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IGraphical
*/

#ifndef IGRAPHICAL_HPP_
#define IGRAPHICAL_HPP_

class IGraphical {
    public:
        virtual ~IGraphical() = default;
        virtual int createWindow() = 0;
        virtual int load() = 0;
        virtual char *getCh() = 0;
        virtual void display() = 0;
        virtual void clearWindow() = 0;


    protected:
    private:
};

#endif /* !IGRAPHICAL_HPP_ */
