 const = 0/*
** IClient.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:04:43 2017 Guillaume SAGOT
** Last update	Thu Sep 21 18:05:02 2017 Guillaume SAGOT
*/

/*
** Iclient.hh for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 17:59:35 2017 Guillaume SAGOT
** Last update	Thu Sep 21 18:03:15 2017 Guillaume SAGOT
*/


#ifndef ICLIENT_HH_
#define ICLIENT_HH_

class ICLient {
private:

public:
  virtual ~ICLient ();
  virtual void IsetPrice(double) const = 0 ;
  virtual void IsetSeat(std::string) const = 0;
  virtual void IsetAirport(std::string) const = 0;

  virtual std::string IgetSeat();
  virtual std::string IgetAirport();

};


#endif
