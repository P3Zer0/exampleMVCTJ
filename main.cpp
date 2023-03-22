#include "game_controller.h"
#include "game_model.h"
#include "game_view.h"
int main() {
    game_model model;
    game_view view{model};
    game_controller controller(model,view);
    controller.launch(model, view);
    return 0;
}
