//
// Created by student on 17.03.2023.
//

#ifndef UNTITLED_GAME_CONTROLLER_H
#define UNTITLED_GAME_CONTROLLER_H
#include "game_view.h"
#include <conio.h>


class game_controller {

public:
//explicit
    game_controller(game_model& model1, game_view& view1) : model{model1}, view{view1} {}
    void launch(game_model& model, game_view& view);
    //void updating();

private:
    game_model& model;
    game_view& view;
};


#endif //UNTITLED_GAME_CONTROLLER_H
