#############################################################################
#
# Project Makefile
#
# (c) Wouter van Ooijen (www.voti.nl) 2016
#
# This file is in the public domain.
# 
#############################################################################

# source files in this project (main.cpp is automatically assumed)
SOURCES := rtttl_player.cpp note_player_self.cpp note_player_gpio.cpp

# header files in this project
HEADERS := note.hpp rtttl_player.hpp note_player_self.cpp note_player_gpio.hpp

# other places to look for files for this project
SEARCH  := ../w1-library

main.exe: main.cpp note_player_self.cpp note_player_self.hpp
	gcc main.cpp note_player_self.cpp note_player_self.hpp -o app.exe

# set REATIVE to the next higher directory 
# and defer to the Makefile.due there
RELATIVE := $(RELATIVE)../
include $(RELATIVE)Makefile.due
