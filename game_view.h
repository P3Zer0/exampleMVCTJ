//
// Created by tomex on 21.03.2023.
//

#ifndef UNTITLED_GAME_VIEW_H
#define UNTITLED_GAME_VIEW_H

#include <iostream>
#include <conio.h>
#include "game_model.h"

class game_view {

public:
    explicit game_view(game_model& model1) : model{model1} {}

    void updating(game_model& model);

private:
    game_model& model;
};


#endif //UNTITLED_GAME_VIEW_H
