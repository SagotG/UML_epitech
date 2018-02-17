/*
** IPMethod.hh for
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 19:00:08 2017 Guillaume SAGOT
** Last update	Thu Sep 21 19:01:58 2017 Guillaume SAGOT
*/

#ifndef  IPMETHOD_HH_
#define IPMETHOD_HH_

class IPMethod {
private:

public:
  virtual ~IPMethod ();

  virtual void IsetPrices(Method) const = 0;

  virtual double IgetPrices();
  virtual std::string IselectMethod();
  virtual bool IPayment();

};

#endif
