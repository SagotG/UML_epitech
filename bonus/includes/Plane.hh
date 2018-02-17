/*
** IPlane.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:15:42 2017 Guillaume SAGOT
** Last update	Thu Sep 21 23:08:55 2017 Guillaume SAGOT
*/

#ifndef Plane
#define Plane

class Plane {
private:
 int _id;
 int _state;
 Airport _place;
 Airport_dest;

public:
  Plane(Airport airport, Date date, String dest);
  virtual ~Plane ();

  virtual void setId(int) const;
  virtual void setPlace(Airport) const;
  virtual void setState(int) const;
  virtual void setDestination() const;

  virtual int getId();
  virtual int getState();
  virtual Airport getPlace();
  virtual std::string getDestination();

  virtual bool isBoarding();
  virtual bool isNeedFuel();

};

#endif
