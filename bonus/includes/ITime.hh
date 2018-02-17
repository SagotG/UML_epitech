/*
** ITime.hh for
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:41:47 20T17 Guillaume SAGOT
** Last update	Thu Sep 21 18:46:46 2017 Guillaume SAGOT
*/

#ifndef ITIME_HH_
#define ITIME_HH_

class ITime {
private:

public:
  virtual ~ITime ();
  virtual void IsetTime()const = 0;
  virtual void IsetDepartur(Airport)const = 0;
  virtual void IsetArrival(Airport)const = 0;
  virtual void IsetDuration(Airport)const = 0;

  virtual std::time IgetTime();
  virtual std::time IgetDepartur();
  virtual std::time IgetArrival();
  virtual std::time IgetDuration();

  virtual bool IisTakeOf();
  virtual bool IiLand();


};

#endif
