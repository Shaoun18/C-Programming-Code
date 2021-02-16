//========================================================================
// File Name   : SMovieTheater.cpp
// Author      : Michael Diep
// Copyright   : Copyright(C). Michael Diep 2016 
// Brought To You By: code-projects.org
// Description : This program creates a movie theater inventory system.
//				 By making an object class "Movie", we are able to control
//				 the private variables such as movie name, ticket available, and
//				 ticket price for each movie. Our other class "MovieTicketMaster"
//				 is the class that will generate the menu and the search functions 
//				 for the user (the user interface).
//				 
// 
// Date              Version     Student ID    Author          
// 04-19-16          1.0         20163437     Michael Diep   
//=========================================================================

#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
	string movie_name;
	int tickets_available;
	double ticket_price;
public:
	Movie();
	Movie(string my_movie_name, int my_tickets_available, double my_ticket_price);
	~Movie();

	string get_movie_name();
	int get_tickets_available();
	double get_ticket_price();
	void set_movie_name(string new_movie_name);
	void set_tickets_available(int new_tickets_available);
	void set_ticket_price(double new_ticket_price);

	double PurchaseTicket(int new_tickets_available);
	void Display();
};


class MovieTicketMaster
{
private:
	Movie * p_MovieList;
	string theater_name;
	string theater_location;
public:
	MovieTicketMaster();
	MovieTicketMaster(string my_theater_name, string my_theater_location);
	~MovieTicketMaster();
	void Init(Movie * p_my_MovieList, int array_size);
	void Run();
	void DisplayMenu();
	void ViewMovies();
	Movie * SearchMovie();
	Movie * FindMovie(string find_movie_name);
	void PurchaseTicket();
};
