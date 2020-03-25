##
## EPITECH PROJECT, 2020
## OOP_arcade_2019
## File description:
## Makefile
##

SOURCES_SFML		=	

SOURCES_QT			=	

SOURCES_NCURSES		=	

CPPFLAGS		=	-fPIC -g	-std=c++14

LDFLAGS			=	-shared

OBJECTS_SFML		=	$(SOURCES_SFML:.cpp=.o)

OBJECTS_QT			=	$(SOURCES_QT:.cpp=.o)

OBJECTS_NCURSES		=	$(SOURCES_NCURSES:.cpp=.o)

FIKSENGINE_LIBDIR	=	./

FIKSENGINE_INCDIR	=	../include

TARGET_SFML		=	$(FIKSENGINE_LIBDIR)/lib_arcade_sfml.so

TARGET_QT		=	$(FIKSENGINE_LIBDIR)/lib_arcade_qt.so

TARGET_NCURSES	=	$(FIKSENGINE_LIBDIR)/lib_arcade_ncurses.so

RM = rm -rf

all: $(TARGET_SFML) $(TARGET_QT) $(TARGET_NCURSES)

$(TARGET_SFML) : $(OBJECTS_SFML)
	$(CC) $(CFLAGS) $(OBJECTS_SFML) -o $@ $(LDFLAGS)

$(TARGET_QT) : $(OBJECTS_QT)
	$(CC) $(CFLAGS) $(OBJECTS_QT) -o $@ $(LDFLAGS)

$(TARGET_NCURSES) : $(OBJECTS_NCURSES)
	$(CC) $(CFLAGS) $(OBJECTS_NCURSES) -o $@ $(LDFLAGS)

clean:
	$(RM) $(OBJECTS_SFML) $(TARGET_SFML)
	$(RM) $(OBJECTS_QT) $(TARGET_QT)
	$(RM) $(OBJECTS_NCURSES) $(TARGET_NCURSES)

fclean:	clean
	$(RM) $(TARGET_SFML)
	$(RM) $(TARGET_QT)
	$(RM) $(TARGET_NCURSES)

re:	fclean all

.PHONY: all clean fclean re