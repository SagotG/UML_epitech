/*
** IBooking.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:04:56 2017 Guillaume SAGOT
** Last update	Thu Sep 21 18:08:38 2017 Guillaume SAGOT
*/

#ifndef IBOOKING_HH_
#define IBOOKING_HH_

class IBooking {
private:
  int _stepDay
  bool _isChanging;

public:
  virtual ~IBooking ();
  virtual void setBooking(int) const = 0;
  virtual void setReduction(Bool) const = 0;
  virtual void getBooking() const = 0;
  virtual void getReduction() const = 0;

};

#endif
