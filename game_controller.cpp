//
// Created by student on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model) : model(model) {
}

void game_controller::launch()
{
    this->updating();
    int key;
    do{
        key = _getch();
        if (key == 13){
            this->model.add_points(1);
            this->updating(); //WYMYSL COS bedzie this view.upadte
        }
    }
    while(key != 27);
}


//Przeniesc update do nowej klasy game_view i ponownie w controllerze referencja do gameview
void game_controller::updating() {
    system("cls");
    std::cout<<"=CONSOLE CLICKER="<<std::endl;
    std::cout <<"POINTS: "<< this->model.get_points() << std::endl;

}
