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
		this->title;
	}
	string getDirector(string director)
	{
		this->director = director;
	}
	void setDirector(string director)
	{
		this->director;
	}
	string getGenre(string genre)
	{
		this->genre = genre;
	}
	void setGenre(string genre)
	{
		this->genre;
	}
	int getYear(int year)
	{
		this->year = year;
	}
	void setYear(int year)
	{
		this->year;
	}
	int getRating(int ratingCount)
	{
		this->ratingCount = ratingCount;
	}
	void rate(double rating)
	{
		this->rating = rating;
	}
	void display()
	{
		cout << "Movie: " << this->title << ". Director: " << this->director << ". Genre: " << this->genre << ". Year: " 
			<< this->year << ". Rating: " << this->ratingCount << "out of " << this->rating << "." << endl;
	}
};
#endif
