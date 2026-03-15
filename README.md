# c-plus-minus
A simple C++ header that takes a lot of the features and... removes them.

## Why?
I love the idea of having all the useful little structures in the standard library. And I love the idea of having generic functions - that can lead to some amazing code reuse! 

But I really dislike the idea of pulling the entirety of C++ just for these features. It's tempting to use *just a little more* C++ functionality to solve problems and, before you know it, you're writing complicated modern C++ that's way more difficult to maintain than C.

So I wanted to make something concrete. A header file that allows certain things and disallows other things. That way I can have a more standardized way to say "this is okay, this isn't".

## Use
This isn't really for other people to use. It's for me to use on my personal projects, and then strip away at the end.

But, if you're interested in using this, it's quite simple. 

1. First include everything that you want. You have to do this incase the things that you're including use modern C++ features.

2. Then, include c-plus-minus (`cpm.hpp`). From this point on, you can't use the disallowed C++ features.

See this example from `example.cpp`:

```cpp 
#include <vector>
#include <iostream>

#include "cpm.hpp"

int main() {
    std::vector<int> ints = {8, 4, 5, 9};

    for (int n : ints)
        std::cout << n << std::endl;

    return 0;
}
```

## What is allowed? What is disallowed?
The header file works on **disallowing** features. So anyting not mentioned is allowed.

Look in `cpm.hpp` for a comprehensive and up-to-date list of what isn't allowed, but primarily it's:

`class`, `private`, `protected`, `public`, `virtual`, `this`, `try`, `catch`, `throw`

This isn't bullet proof, you can probably still work around this and end up making the code C++-ified. But, it makes it harder and reminds you to keep your code more data-oriented.

## Changes/updates
I will occasionally update this with more or less rules depending on what features I want to use in my projects. And I heavily recommend people actually go into `cpm.hpp` and edit it for their specific development needs.

Expect the header to change as my personal development journey goes on. 
