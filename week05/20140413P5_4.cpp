#include<iostream>

class Color{
    int red, green, blue;

public:
    Color();
    Color(int red, int green, int blue);
    void SetColor(int red, int green, int blue);
    void ShowColor();
};

Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
}

Color::Color(int red, int green, int blue){
    this->red = red;
    this->green = green;
    this-> blue = blue;
}

void Color::SetColor(int red, int green, int blue){
    this->red = red;
    this->green = green;
    this-> blue = blue;
}

void Color::ShowColor() {
    std::cout << red << ' ' << green << ' ' << blue << std::endl;
}

int main() {
    Color screenColor( 255, 0 , 0 );
    Color *p;
    p = &screenColor;
    
    p->ShowColor();

    Color colors[3];
    p = colors;

    p[0].SetColor(255, 0, 0);
    p[1].SetColor(0, 255, 0);
    p[2].SetColor(0, 0, 255);

    for(int i = 0; i < 3; i++){
        p[i].ShowColor();
    }

    system("PAUSE");
    return 0;
}