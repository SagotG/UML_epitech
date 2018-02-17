/*
** IEmployee.hh for
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:11:42 2017 Guillaume SAGOT
** Last update	Thu Sep 21 23:07:19 2017 Guillaume SAGOT
*/

#ifndef Employee
#define Employee

#include "Airport.hh"

class Employee {
private:
  int   _total;
  int   _plane;
  int   _ground;
  Airport   _location;

public:
  Employee(Airport);
  virtual ~Employee ();
  virtual void setEmployee(Airport, Plane) const;
  virtual void setEmployeePlane(Plane id) const;
  virtual void setEmployeeGround(Airport) const;
  virtual void setLocation(Airport, Plane) const;

  virtual int getEmployee();
  virtual int getEmployeePlane();
  virtual int getEmployeeGround();
  virtual std::string getLocation();
};

#endif
