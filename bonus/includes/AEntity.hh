/*
** IAEnity.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 19:05:49 2017 Guillaume SAGOT
** Last update	Thu Sep 21 20:22:14 2017 Guillaume SAGOT
*/

#ifndef AENTITY_HH_
#define AENTITY_HH_

#include "Method.hh"
#include "Airport.hh"
#include "Employee.hh"

class AEntity {
private:
  Client         _client;
  PMethod        _method;
  Airport        _airport;
  Employee       _employees;
  Booking        _booking;
  int            _fidelity;
  int            _idClient;
  bool           _transaction;
  double         _price;
  std::string    _plcaeNmb;

public:
  AEntity(Client);
  virtual ~AEntity ();

  virtual void setPrices(int) const;
  virtual void setDestinations(String) const;
  virtual void setRank(String) const;
  virtual void setDate(String) const;
  virtual void setService(int) const;
  virtual void setAirport(String) const;
  virtual void setPayment(Double) const;
  virtual void setEmployees(Int) const;
  virtual void setClient(String) const;
  virtual void setTransaction(Bool) const;

  virtual double getPrices();
  virtual std::string getRank();
  virtual std::string getDate();
  virtual Airport getDestinations();
  virtual Airport getService();
  virtual Airport getAirport();
  virtual Employe getEmployees();
  virtual Client getClient();
  virtual PMethod getTransaction();
  virtual PMethod getPayment();


};

#endif
