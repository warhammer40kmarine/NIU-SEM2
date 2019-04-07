#include <iostream>

using namespace std;

class Image
{
private:
    int image_type;
    int image_color;
    int save_image; //8*6 bits= 48 bits/8= 6 bytes
    // dynamic memory setup
    int image() // Image():產生 BW image(全白)
    {
        return 0; // temporary // two colors use binary to represent those color EX:0000
    }
    int image(int k) //產生 256 color ， 每BYTE均為k
    {
        return 0;
    }
    int image(int b1,int b2) //產生 64K image，每一點顏色第1個BYTE均為b1，第2個BYTE均為b2
    {
        return 0;
    }
    int image(int r,int g,int b)
    {
        return 0;
    }
    void show() // 影像種類:黑白 256 color 64M color 16M colors
                // 顏色數:2,256,64K,16M
                // 影像:存放 8*6bits 之真實資料

    {
        return;
    }
};
int main()
{
    cout << "Hello There! WELCOME TO THE BASIC IMAGE GENERATOR" << endl;
    cout << "Initial test image (1)proceed (2)skip"
    cin >> // call function from class Image & function image()
    cout << "(1)BLACK IMAGE (2)WHITE IMAGE" << endl;
    cin <<
    cout << "How many colors you want in your image?"<< endl;
    cin << // call function from image(int k)
    cout << "Create an image with 256 colors" << endl;
    cout << " Create an image with 64K colors"<< endl;
    //


    return 0;
}
