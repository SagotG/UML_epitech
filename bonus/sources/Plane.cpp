/*
** Plane.cpp for UML
**
** Made by	Guillaume SAGOT
** Login	guillaume.sagot
**
** Started on	Thu Sep 21 23:08:18 2017 Guillaume SAGOT
** Last update	Thu Sep 21 23:18:37 2017 Guillaume SAGOT
*/

Plane::Plane(Airport airport, Date date, String dest);
{}

~Plane () {}

void Plane::setId(int) const {
}

void Plane::setPlace(Airport) const {
}

void Plane::setState(int) const {
}

void Plane::setDestination() const {
}

int Plane::getId() {
  return (0);
}

int Plane::getState() {
  return (0);
}

Airport Plane::getPlace() {
  return (void);
}

std::string Plane::getDestination() {
  return ("");
}

bool Plane::isBoarding() {
  return (true);
}

bool Plane::isNeedFuel() {
  return (true);
}
