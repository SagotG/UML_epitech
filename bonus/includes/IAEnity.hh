/*
** IAEnity.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 19:05:49 2017 Guillaume SAGOT
** Last update	Thu Sep 21 19:08:55 2017 Guillaume SAGOT
*/

#ifndef IAENTITY_HH_
#define IAENTITY_HH_

class IAEntity {
private:

public:
  virtual ~IAEntity ();

  virtual void IsetPrices(int) const = 0;
  virtual void IsetDestinations(String) const = 0;
  virtual void IsetRank(String) const = 0;
  virtual void IsetDate(String) const = 0;
  virtual void IsetService(int) const = 0;
  virtual void IsetAirport(String) const = 0;
  virtual void IsetPayment(Double) const = 0;
  virtual void IsetEmployees(Int) const = 0;
  virtual void IsetClient(String) const = 0;
  virtual void IsetTransaction(Bool) const = 0;

  virtual double IgetPrices();
  virtual std::string IgetRank();
  virtual std::string IgetDate();
  virtual Airport IgetDestinations();
  virtual Airport IgetService();
  virtual Airport IgetAirport();
  virtual Employe IgetEmployees();
  virtual Client IgetClient();
  virtual Method IgetTransaction();
  virtual Method IgetPayment();


};

#endif
