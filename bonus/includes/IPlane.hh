/*
** IPlane.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:15:42 2017 Guillaume SAGOT
** Last update	Thu Sep 21 18:29:04 2017 Guillaume SAGOT
*/

#ifndef IPlane
#define IPlane

class IPlane {
private:

public:
  virtual ~IPlane ();

  virtual void IsetId(int) const = 0;
  virtual void IsetPlace(Airport) const = 0;
  virtual void IsetState(int) const = 0;
  virtual void IsetDestination() const = 0;

  virtual int IgetId();
  virtual int IetState();
  virtual Airport IgetPlace();
  virtual std::string IgetDestination();

  virtual bool IisBoarding();
  virtual bool IisNeedFuel();


};

#endif
