#include<stdio.h>
struct point{
    int x;
    int y;
};
void Point(struct point* ptr){
    printf("X coordinate:%d\n",ptr->x);
    printf("Y coordinate:%d\n",ptr->y);

}
int main(){
    struct point s;
    struct point* ptr;
    s.x=9;
    s.y=6;
    ptr=&s;
    Point(ptr);
    return 0;
}
