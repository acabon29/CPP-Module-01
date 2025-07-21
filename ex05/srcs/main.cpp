
#include <iostream>
#include <string>
#include <fstream>

// ofstream: Stream class to write on files
// ifstream: Stream class to read from files
// fstream: Stream class to both read and write from/to files.

bool getContentFile(std::string &contentFile, const char *fileName) {
	std::string line;
	std::ifstream infile;

	infile.open(fileName);
	
	if (!infile.is_open()) {
		std::cout << "Error, invalid file" << std::endl;
		return ( false );
	}

	while ( std::getline (infile,line) )
		contentFile = contentFile + line; 

	infile.close();
	return ( true );
}

std::string strReplaceFirst(std::string src, std::string s1, std::string s2) {
	std::string newStr = src;
	size_t pos;
	size_t i;
	size_t j;

	pos = src.find(s1);
	if (pos == std::string::npos)
		return ( src );

	newStr.resize(src.length() + s2.length() - s1.length());
	for (i = 0; i < s2.length(); i++)
		newStr[pos + i] = s2[i];
	for (j = pos + s1.length(); j < src.length(); j++)
		newStr[i + j - s1.length()] = src[j];

	return ( newStr );
}

std::string strReplaceAll(std::string src, std::string s1, std::string s2) {
	std::string newStr = src;
	size_t pos;

	while ((pos = newStr.find(s1)) != std::string::npos)
		newStr = strReplaceFirst(newStr, s1, s2);
	return ( newStr );
} 

int main(int argc, char const *argv[])
{
	std::string contentFile = "";
	std::ofstream outfile;
	std::string newStr;

	if (argc != 4) {
		std::cout << "You need 3 parameters : filename s1 s2" << std::endl;
		return ( 0 );
	}

	if (!getContentFile(contentFile, argv[1]))
		return ( 1 );
	
	newStr = strReplaceAll(contentFile, argv[2], argv[3]);

	outfile.open(argv[1], std::ios::out | std::ios::trunc);
	if (!outfile.is_open()) {
		std::cout << "Error, invalid file" << std::endl;
		return ( 0 );
	}

  	outfile << newStr;
	outfile.close();
	return ( 0 );
}
