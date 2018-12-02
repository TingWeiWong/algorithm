//
//  graph.cpp
//  c++_xcode
//
//  Created by Andrew  on 12/2/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "graph.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
struct vertex {
    typedef pair<int, vertex*> ve;
    vector<ve> adj; //cost of edge, destination vertex
    string name;
    vertex(string s) : name(s) {}
};

class graph
{
public:
    typedef map<string, vertex *> vmap;
    vmap work;
    void addvertex(const string&);
    void addedge(const string& from, const string& to, double cost);
};

void graph::addvertex(const string &name)
{
    vmap::iterator itr = work.find(name);
    if (itr == work.end())
    {
        vertex *v;
        v = new vertex(name);
        work[name] = v;
        return;
    }
    cout << "\nVertex already exists!";
}
