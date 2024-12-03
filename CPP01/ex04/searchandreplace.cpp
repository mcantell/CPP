#include "searchandreplace.h"

SandR::SandR( const std::string& filename, const std::string& s1, const std::string& s2 ) : _filename(filename), _s1(s1), _s2(s2) {}

SandR::SandR( const SandR& other )  : _filename(other._filename), _s1(other._s1), _s2(other._s2) {}

SandR& SandR::operator=( const SandR& other )
{
	if (this != &other)
	{
		_filename = other._filename;
		_s1 = other._s1;
		_s2 = other._s2;
	}
	return *this;
}

SandR::~SandR() {}

void	SandR::searchAndReplace() const
{
	std::ifstream inputfile(_filename);

	if (!inputfile)
		std::cerr << " Error: Could not open file" << _filename << std::endl;

	std::ofstream outfile(_filename + ".replace");
	if (!outfile)
		std::cerr << "Error: Could not create file" << _filename + ".replace" << std::endl;

	std::string	line;
	while (std::getline(inputfile, line))
	{
		size_t pos;
		while ((pos = line.find(_s1)) != std::string::npos) {
			line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
		}
		outfile << line << "\n";
	}
	inputfile.close();
	outfile.close();
}
