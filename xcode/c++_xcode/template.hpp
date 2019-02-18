//
//  template.hpp
//  c++_xcode
//
//  Created by Andrew on 2/17/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#ifndef template_hpp
#define template_hpp

#include <stdio.h>
template <typename T> class ArrayList{
public:
    ArrayList();
    ~ArrayList();
    int size() const;
    T get(int Index) const;
private:
    T* elements;
};
#endif /* template_hpp */
