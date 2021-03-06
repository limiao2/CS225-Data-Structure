/**
 * @file dsets.h
 * @author Li Miao
 * @date Fall 2015
 */

#ifndef DSETS_H
#define DSETS_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class DisjointSets
{
public:
    //Creates n unconnected root nodes at the end of the vector.
    void addelements(int num);
    
    //This function should compress paths and works as described in lecture.
    int find(int elem);
    
    //This function should be implemented as union-by-size.
    void setunion(int a, int b);
    
private:
    vector<int> s;
};

#endif /* DSETS_H */
