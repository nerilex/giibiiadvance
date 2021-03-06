/*
    GiiBiiAdvance - GBA/GB  emulator
    Copyright (C) 2011-2015 Antonio Ni�o D�az (AntonioND)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __WIN_UTILS_DRAW__
#define __WIN_UTILS_DRAW__

#include "win_utils.h"

#define GUI_BACKGROUND_GREY      (216)
#define GUI_BACKGROUND_GREY_RGBA ((0xFF<<24)|(GUI_BACKGROUND_GREY<<16)|(GUI_BACKGROUND_GREY<<8)|(GUI_BACKGROUND_GREY))

#define GUI_WINDOWBAR_GREY      (232)
#define GUI_WINDOWBAR_GREY_RGBA ((0xFF<<24)|(GUI_WINDOWBAR_GREY<<16)|(GUI_WINDOWBAR_GREY<<8)|(GUI_WINDOWBAR_GREY))

void GUI_Draw_SetDrawingColor(int r, int g, int b);
void GUI_Draw_HorizontalLine(char * buffer, int w, int h, int x1, int x2, int y);
void GUI_Draw_VerticalLine(char * buffer, int w, int h, int x, int y1, int y2);
void GUI_Draw_Rect(char * buffer, int w, int h, int x1, int x2, int y1, int y2);
void GUI_Draw_FillRect(char * buffer, int w, int h, int x1, int x2, int y1, int y2);

void GUI_Draw(_gui * gui, char * buffer, int w, int h, int clean);

#endif // __WIN_UTILS_DRAW__
