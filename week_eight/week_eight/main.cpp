//
//  main.cpp
//  week_eight
//
//  Created by Niklas on 08.11.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <array>
#include <vector>
#include <string>

void generate_letter(bool sex, std::string receptor, std::string subject, std::string date, std::string signoff, std::string author);
std::string split(std::string string);
bool next_token(const std::string &str, int from, int len);

int main(int argc, const char * argv[]) {
    // generate_letter(true, "John", "votre demande de rdv" , "12/12", "best", "ME");
    
    next_token("hello world this is a string", -1, -1);
    return 0;
}

bool next_token(const std::string &str, int from, int len) {
	for (std::size_t i(0); i < str.size(); ++i) {
		if (str[i] == ' ' && from < 0) {
			
		}
	}
	
	return true;
}

std::string split(std::string string) {
	return "hello world";
}

void generate_letter(
                     bool sex,
                     std::string receptor,
                     std::string subject,
                     std::string date,
                     std::string signoff,
                     std::string author)
{
    
    auto dear = [](bool &sex) {return sex ? "cher" : "chère";};
    
    std::cout << "Bonjour " << dear(sex) << " " + receptor << std::endl;
    std::cout << "Je vous écris à propos de " + subject + "." << std::endl;
    std::cout << "Il faudrait que nous nous voyons le " + date + " pour en discuter." << std::endl;
    std::cout << "Donnez-moi vite de vos nouvelles !" << std::endl;
    std::cout << signoff + ", " + author << std::endl;
}
