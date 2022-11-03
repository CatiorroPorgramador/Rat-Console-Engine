#include "Includes.h"

int main(int argc, char const *argv[]) {
    rce::video_buffer *vdeo_buffer = new rce::video_buffer();

    // 254 ■

    vdeo_buffer->draw(rce::get_pixel_buffer('#', 255, 15, 8));
    vdeo_buffer->render();

    putchar('\n');
    putchar(219);

    delete vdeo_buffer;

    getch();

    return 0;
}