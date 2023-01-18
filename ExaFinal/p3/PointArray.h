#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"

class PointArray
{
    public:
        PointArray();
        PointArray(const Point pts[], const int size);
        PointArray(PointArray &o);
        ~PointArray();

        void print() const;
        int getSize() const;
		
        void clear();
		void push_back(const Point &p);
		void insert(const int, const Point &);
		void remove(const int);

    private:
        int size;
        Point *points;
		void resize(int);
};

PointArray::PointArray()
{
    this->size = 0;
    this->points = new Point[size];
}

PointArray::PointArray(const Point pts[], const int size) {
    this->size = size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = pts[i];
}

PointArray::PointArray(PointArray &o){
    this->size = o.size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = o.points[i];
}

// TODO Implementar la función getSize
// TODO 1 punto
int PointArray::getSize() const {
    return size;
}

/*
* Analice esta función para usarla en las funciones de: 
*       push_back
*       insert y
*       remove
*/
void PointArray::resize(int newSize){
	Point *pts = new Point[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for(int i = 0; i < minsize; i++)
		pts[i] = points[i];
	delete[] points;
	size = newSize;
	points = pts;
}

/*
* Esta función debe hacer que el arreglo no tengo ningun elemento.
*/
void PointArray::clear() {
	resize(0);
}

/*
* Función para insertar un elemento al final del arreglo
* Debe utilizar la función resize
*/
// TODO Implementar la función push_back
// TODO 2 puntos
void PointArray::push_back(const Point& p) {
	resize(size + 1);
    points[size - 1] = p;
}

/*
* Función para insertar un elemento en la posición "pos" del arreglo
*/
void PointArray::insert(const int pos, const Point &p) {
	resize(size + 1);
	for(int i = size - 1; i > pos; i--)
		points[i] = points[i-1];
	points[pos] = p;		
}

/*
* Función para insertar un elemento al final del arreglo
* Debe utilizar la función resize
*/
// TODO Implementar la función remove
// TODO 3 puntos
void PointArray::remove(const int pos) {
	if(pos >= 0 && pos < size) {
        for(int i = pos; i < size - 2; i++) {
            points[i] = points[i + 1];
        }
        resize ( size - 1);
    }
}

/*
* Destructor
*/
// TODO Implementar el destructor
// TODO 1 punto
PointArray::~PointArray()
{
    delete [] points;
}


#endif // POINTARRAY_H