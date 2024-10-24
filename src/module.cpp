#include "module.h"
#include <iostream>

using namespace std;

// all external modules like this MUST be in the src directory
// they cannot go any deeper, or the compilation will fail
void module_function() {
  // This is a function that does nothing
  cout << "Module Function!" << endl;
}