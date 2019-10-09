#include <conio.h> 
#include <graphics.h> 
#include <iostream> 
#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
  
using namespace std; 
  
// Ellipse drawing function 
void drawEllipse(int xc, int yc, int a, int b, 
                 float alpha, int color) 
{ 
    float t = 3.14 / 180; 
    alpha = 360 - alpha; 
    setcolor(color); 
    int theta; 
  
    // Filling each pixel corresponding 
    // to every angle from 0 to 360 
    for (int i = 0; i < 360; i += 1) { 
        theta = i; 
        int x = a * cos(t * theta) * cos(t * alpha) 
                + b * sin(t * theta) * sin(t * alpha); 
  
        int y = b * sin(t * theta) * cos(t * alpha) 
                - a * cos(t * theta) * sin(t * alpha); 
  
        putpixel(xc + x, yc - y, color); 
    } 
} 
  
// Function to calculate the position 
// of ellipse after each rotation 
void slidePattern(int xc, int yc, int r, int a, int b, 
                  int alpha, float p, int color) 
{ 
    setcolor(color); 
    float t = 3.14 / 180; 
    float t1, t2, d; 
    float angle = (p * alpha); 
  
    // Calculation for center of Ellipse 
    t1 = cos(t * fmod(angle, 360)); 
    t2 = sin(t * fmod(angle, 360)); 
    t1 *= t1; 
    t2 *= t2; 
    t1 = t1 / (a * a); 
    t2 = t2 / (b * b); 
    d = sqrt(t1 + t2); 
    d = 1 / d; 
  
    int draw_x = xc + (r + d) * cos(t * alpha); 
    int draw_y = yc - (r + d) * sin(t * alpha); 
    int draw_ang = angle + alpha; 
  
    drawEllipse(draw_x, draw_y, a, 
                b, draw_ang, color); 
} 
  
// Function to increment the angle 
// of rotation 
void ellipseovercircle(int xc, int yc, 
                       int r, int a, int b) 
{ 
    float theta = 0; 
    double h, p1; 
  
    // Calculating the ratio of 
    // perimeters of Ellipse and Circle 
    h = (a * a) + (b * b); 
    h /= 2; 
    p1 = sqrt(h); 
    p1 /= r; 
    p1 = 1 / (p1); 
  
    // by decreasing theta we can 
    // move Ellipse clockwise 
    for (;; theta -= 1) { 
  
        // Draw Ellipse at new location 
        // using White color 
        slidePattern(xc, yc, r, a, b, 
                     theta, p1, WHITE); 
  
        circle(xc, yc, r); // Drawing Circle 
        delay(25); // Introducing delay 
  
        // Erase the existing Ellipse 
        slidePattern(xc, yc, r, a, b, 
                     theta, p1, BLACK); 
    } 
} 
  
// Driver code 
int main() 
{ 
    // Initialize graphics function 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, ""); 
  
    // maximum X-coordinate for the window 
    int maxx = getmaxx(); 
  
    // maximum Y-coordinate for the window 
    int maxy = getmaxy(); 
  
    // Start drawing from the mid of the screen 
    ellipseovercircle(maxx / 2, maxy / 2, 
                      100, 40, 28); 
  
  
    closegraph(); 
    return 0; 
} 
