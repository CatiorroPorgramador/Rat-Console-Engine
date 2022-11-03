#pragma once

#include <vector>

#define VIDEO_WIDTH  16
#define VIDEO_HEIGHT 9

namespace rce // Engine
{
    typedef struct {
        int x, y, w, h; // X axis, Y axis, Width, Height
    } rectangle;

    typedef struct {
    public:
        char ch, color;

        int x, y;
    } pixel_buffer;

    pixel_buffer get_pixel_buffer(char ch, char color, int x, int y) {
        pixel_buffer rk;

        rk.ch = ch;
        rk.color = color;
        rk.x = x;
        rk.y = y;
        
        return rk;
    }

    class video_buffer {
    public:
        // Constructor && Destructor
        video_buffer() {
            for (int h{0}; h < VIDEO_HEIGHT; ++h) {
                for (int w{0}; w < VIDEO_WIDTH; ++w) {
                    this->pix_buf[w][h].ch = 219;
                }
            }
        }

        // Functions
        void render() {
            for (int y{}; y < VIDEO_HEIGHT; ++y) {
                for (int x{}; x < VIDEO_WIDTH; ++x) {
                    putchar(pix_buf[x][y].ch);
                }
                putchar('\n');
            }
        }

        void draw(pixel_buffer pixel) {
            this->pix_buf[pixel.x][pixel.y] = pixel;
        }

    private:
        pixel_buffer pix_buf[VIDEO_WIDTH][VIDEO_HEIGHT];
    };

    // Read
    video_buffer load_video_buffer(const char* filename) {

    }
}
