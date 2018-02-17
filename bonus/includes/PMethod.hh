/*
** IPMethod.hh for
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 19:00:08 2017 Guillaume SAGOT
** Last update	Thu Sep 21 19:03:52 2017 Guillaume SAGOT
*/

#ifndef PMETHOD_HH_
#define PMETHOD_HH_

class PMethod {
private:
  Method _value;

public:
  virtual ~PMethod ();

  virtual void setPrices(Method) const;

  virtual double getPrices();
  virtual std::string selectMethod();
  virtual bool Payment();

  enum Method {
    CARD,
    LIQUID,
    PAYCHECK
    };

};

#endif
