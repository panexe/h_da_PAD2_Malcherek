#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H

#include <vector>

#include "booking.h"
#include "travel.h"
#include "customer.h"
#include "linkedlist.h"

class TravelAgency
{
    LinkedList<Booking*> allBookings;
    //std::vector<Booking*> allBookings;
    std::vector<Travel*> allTravels;
    std::vector<Customer*> allCustomers;

    int getHighestId();
public:
    TravelAgency();
    ~TravelAgency();
    std::string readFile();
    std::string toFileString();

    Booking* findBooking(long id);
    Travel* findTravel(long id);
    Customer* findCustomer(long id);

    Booking *getBooking(unsigned int index);
    int getBookingsSize();
    Travel* getTravel(unsigned int index);
    int getTravelSize();

    void idsToBookings();


    int createBooking(char type, double price, std::string start, std::string end, long travelID, std::vector<std::string> bookingDetails);
    void printNumerals();

};


#endif // TRAVELAGENCY_H
