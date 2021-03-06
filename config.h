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

#ifndef __CONFIG__
#define __CONFIG__

typedef struct {
    int debug_msg_enable;
    int screen_size;
    int load_from_boot_rom; //gba always tries to load the bios, but this skips initial logo
    int frameskip; // -1 = auto, 0-9 = fixed frameskip
    int oglfilter;
    int auto_close_debugger;
    unsigned int webcam_select; // 0 = CV_CAP_ANY

    //Sound
    //-----
    int volume;
    int chn_flags;
    int snd_mute;

    //GameBoy
    //-------
    int hardware_type;
    int serial_device;
    int enableblur;
    int realcolors;
    unsigned int gbcam_exposure_reference;

    //gb palette is not stored here, it is stored in gb_main.c

    //key configuration in input_utils.c

} t_config;

extern t_config EmulatorConfig;

void Config_Save(void);
void Config_Load(void);

#endif //__CONFIG__
