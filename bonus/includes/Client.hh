/*
** Client.hh for
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 18:03:37 2017 Guillaume SAGOT
** Last update	Thu Sep 21 18:04:23 2017 Guillaume SAGOT
*/


#ifndef CLIENT_HH_
# define CLIENT_HH_

class CLient {
private:

public:
  CLient();
  virtual ~CLient ();
  virtual void setPrice(double) ;
  virtual void setSeat(std::string);
  virtual void setAirport(std::string);

  virtual std::string getSeat();
  virtual std::string getAirport();

};


#endif
