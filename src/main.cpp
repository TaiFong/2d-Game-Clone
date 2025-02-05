

// ################
// Platform Globals 
// ################
static bool running = true;

// ##################
// Platform Functions 
// ##################
bool platform_create_window(int width, int height, char* title);


// ################
// Windows Platform 
// ################

int main(){

platform_create_window(1200, 720, "Fong");

    while(running){
        // Update
    }

    return 0;
}