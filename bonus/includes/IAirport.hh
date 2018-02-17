/*
** IAirport.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:55:06 2017 Guillaume SAGOT
** Last update	Thu Sep 21 18:57:41 2017 Guillaume SAGOT
*/

#ifndef IAirport
#define IAirport

class IAirport {
private:

public:
  virtual ~IAirport ();

  virtual void IsetNbPlane(Plane) const = 0;
  virtual void IsetDeparture(Plane) const = 0;
  virtual void IsetArrivals(Plane) const = 0;
  virtual void IsetNameAirport(String) const = 0;
  virtual void IsetTaxes(double) const = 0;

  virtual int IgetNbPlane();
  virtual int IgetTaxes();
  virtual Plane IgetDeparture();
  virtual Plane IgetArrival();
  virtual Plane IgetDeparture();

};

#endif
