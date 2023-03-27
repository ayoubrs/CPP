#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>
#include <sstream>
#include <stack>
#include <cstdlib>
#include <vector>
#include <deque>
#include <ctime>

const int THRESHOLD = 16;

class PmergeMe
{
private:
char** argv;
int argc;
std::vector<long> veq_sequence;
std::deque<long> deq_sequence;
	

public:
	PmergeMe(void);
	PmergeMe(char* argv[], int argc);
	PmergeMe(std::string const &exp);
	PmergeMe(PmergeMe const &copy);
	PmergeMe &operator=(const PmergeMe &rhs);
	~PmergeMe(void);

// void mergeSort(std::vector<int>& array);
// void insertionSort(std::vector<long>& array);
template <typename T> void insertionSort(T& container);
template <typename T> void mergeInsertionSort(T& container);
template<typename T> void printContainer(const T& container, std::string prefixMsg);
// void mergeInsertionSort(std::vector<long>& array);
bool is_integer(const std::string& str);
void PmergeHandler(char* argv[], int argc);
void sortVector();
void sortDequeu();

};

#endif