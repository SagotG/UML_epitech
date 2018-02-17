/*
** ITime.hh for
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:41:47 20T17 Guillaume SAGOT
** Last update	Thu Sep 21 23:16:29 2017 Guillaume SAGOT
*/

#ifndef ITIME_HH_
#define ITIME_HH_

class Time {
private:

public:
  virtual ~Time ();
  virtual void setTime()const;
  virtual void setDepartur(Airport) const;
  virtual void setArrival(Airport) const;
  virtual void setDuration(Airport) const;

  virtual std::time getTime();
  virtual std::time getDepartur();
  virtual std::time getArrival();
  virtual std::time getDuration();

  virtual bool isTakeOf();
  virtual bool iLand();


};

#endif
