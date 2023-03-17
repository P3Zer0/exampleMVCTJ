//
// Created by student on 17.03.2023.
//

#ifndef UNTITLED_GAME_CONTROLLER_H
#define UNTITLED_GAME_CONTROLLER_H
#include <iostream>
#include <conio.h>
#include "game_model.h"

class game_controller {

public:
//explicit
    explicit game_controller(game_model& model);
    void launch();
    void updating();

private:
    game_model& model;
};


#endif //UNTITLED_GAME_CONTROLLER_H
