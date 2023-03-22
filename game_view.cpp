//
// Created by tomex on 21.03.2023.
//

#include "game_view.h"



void game_view::updating(game_model& model) {
    system("cls");
    std::cout<<"=CONSOLE CLICKER="<<std::endl;
    std::cout <<"POINTS: "<< this->model.get_points() << std::endl;

}


