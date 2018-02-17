/*
** IBooking.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:04:56 2017 Guillaume SAGOT
** Last update	Thu Sep 21 20:35:53 2017 Guillaume SAGOT
*/

#ifndef BOOKING_HH_
#define BOOKING_HH_

class Booking {
private:
  int _stepDay
  bool _isChanging;

public:
  ~Booking();
  virtual ~Booking ();
  virtual void setBooking(int) const;
  virtual void setReduction(Bool) const;
  virtual int  getBooking();
  virtual int  getReduction();

};

#endif
