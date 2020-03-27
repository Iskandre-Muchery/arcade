/*
** EPITECH PROJECT, 2020
** EPI 2 ème année
** File description:
** ui_elem
*/

#ifndef ui_elem_HPP_
#define ui_elem_HPP_

    #include <string>
    #include <iostream>
    #include <memory>
    #include <vector>
    #include <algorithm>

class ui_elem {
public:
    enum TYPE {
        RECT,
        TXT
    };
    ~ui_elem(){}
    virtual ui_elem::TYPE getType() = 0;
    virtual bool get_fixed() = 0;
};

class Rect : public ui_elem {
public:
	Rect() { }
	~Rect() { }
    ui_elem::TYPE getType() { return _type; }

	void set_pos(std::pair <int, int> tmp)
		{
			this->pos.second = tmp.first;
			this->pos.first = tmp.second;
		}

	void set_bool(bool tmp)
		{
			this->fix = tmp;
			return ;
		}
	void set_path(std::string tmp)
		{
			this->path.assign(tmp);
		}
	void set_color(std::string tmp)
		{
			this->color.assign(tmp);
		}
	bool get_fixed()
		{
			return fix;
		}
	std::pair<int, int> pos;
	std::pair<int, int> dim;
	std::string color;
	std::string path;
	ui_elem::TYPE _type;
	bool fix;
};

class txt : public ui_elem {
public:
	txt(){};
	~txt(){};
	ui_elem::TYPE getType() { return _type; }
	void set_pos(std::pair <int, int> tmp)
		{
			this->pos.first = tmp.first;
			this->pos.second = tmp.second;
		}
	void set_bool(bool tmp)
		{
			this->fix = tmp;
			return ;
		}
	void set_path(int tmp)
		{
			this->font_path = tmp;
		}
	void set_txt(std::string value)
		{
			this->str.assign(value);
		}
	void set_color(std::string tmp)
		{
			this->color.assign(tmp);
		}
	bool get_fixed()
		{
			return fix;
		}
	std::pair<int, int> pos;
	std::pair<int, int> dim;
	std::string font_path;
	std::string color;
	std::string str;
	bool fix;
	ui_elem::TYPE _type;
};

#endif /* !ui_elem_HPP_ */
