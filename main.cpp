#include <iostream>
#include <string>


int main()
{
  
    int array[3][5] = {0};

    for(int row = 0; row<3; ++row)
    {
        // for(int col = 0; col < 5; ++col)
        // {
        
        //     std::cout << array[row][col] << ' '; //<< std::endl;

        // }
        for(auto number : array[row])
        {
            std::cout << number << ' '; //<< std::endl;

        }
        std::cout << std::endl;

    }

    char mystring[] = "string";
    
    // for (auto sym:mystring)
    // {
    //     std::cout << sym;
    // }

    // return 0;
}


