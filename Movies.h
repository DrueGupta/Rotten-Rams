#ifndef MOVIEREVIEW_H
#define MOVIEREVIEW_H
#include <iostream>
using namespace std;

class Movies
{
private:
	string title;
	string director;
	string genre;
	int year;
	int ratingCount;
	double rating;
public:
	string getTitle(string title)
	{
			this->title = title;
	}
	void setTitle(string title)
	{

	}
};
#endif
