//
// Created by student on 17.03.2023.
//


#include "game_controller.h"




void game_controller::launch(game_model& model, game_view& view)
{
    //this->updating();
    int key;
    do{
        key = _getch();
        if (key == 13){
            this->model.add_points(1);
            this->view.updating(model); //WYMYSL COS bedzie this gameView.upadte
        }
    }
    while(key != 27);
}
//game_controller::game_controller(game_model& model) : model{model} {}

//Przeniesc update do nowej klasy game_view i ponownie w controllerze referencja do gameview

