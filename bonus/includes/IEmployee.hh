/*
** IEmployee.hh for
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:11:42 2017 Guillaume SAGOT
** Last update	Thu Sep 21 18:14:17 2017 Guillaume SAGOT
*/

#ifndef IEmployee
#define IEmployee

class IEmployee {
private:

public:
  virtual ~IEmployee ();
  virtual void IsetEmployee(Airport, Plane) const = 0;
  virtual void IsetEmployeePlane(Plane id) const = 0;
  virtual void IsetEmployeeGround(Airport) const = 0;
  virtual void IsetLocation(Airport, Plane) const = 0;

  virtual int IgetEmployee();
  virtual int IgetEmployeePlane();
  virtual int IgetEmployeeGround();
  virtual std::string IgetLocation();
};

#endif
