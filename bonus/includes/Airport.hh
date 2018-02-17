/*
** IAirport.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:55:06 2017 Guillaume SAGOT
** Last update	Thu Sep 21 20:30:40 2017 Guillaume SAGOT
*/

#ifndef Airport
#define Airport

class Airport {
private:
  Plane _plane;
  std::string _name;
  double _taxes;

public:
  Airport(std::string);
  virtual ~Airport ();

  virtual void setName(std::string name);
  virtual void setNbPlane(Plane) const;
  virtual void setDeparture(Plane) const;
  virtual void setArrivals(Plane) const;
  virtual void setNameAirport(std::string) const;
  virtual void setTaxes(double) const;

  virtual int getNbPlane();
  virtual int getTaxes();
  virtual std::string getName();
  virtual Plane getDeparture();
  virtual Plane getArrival();
  virtual Plane getDeparture();

};

#endif
