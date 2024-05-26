#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{

    // string vector tokens ## stores the tokens 
    std::vector<std::string> tokens;
    // int start, end ## used to delineate the position of the tokens 
    signed int start, end; 
    std::string token;
    // start = csvLine.find_first_not_of(separator)
    start = csvLine.find_first_not_of(separator, 0);
    // do
        do {

    // {
    //     end = next 'separator' after start
                end = csvLine.find_first_of(separator, start);
    //     if start == csvLine.length or start == end ## nothing more to find 
                if (start == csvLine.length() || start == end) break;
    //     break;
    //     if end >= 0 ## we found the separator 
                if(end >= 0) token = csvLine.substr(start, end - start);
    //     token = csvLine.substr(start, end - start) ## start, substring length
    //     else 
                else token = csvLine.substr(start, csvLine.length() - start);
    //     token = csvLine.substr (start, csvLine.length - start) ## end is invalid 
    //     tokens.push_back(token) ##save the token 
                tokens.push_back(token);

    //     start = end + 1 ## move past this token 
                start = end + 1;
    // } while (end > 0 ) ##continue loop condition 
        }while (end != std::string::npos);
    return tokens;
}


int main()
{
    return 0;
}