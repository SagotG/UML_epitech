##
## Makefile for UML
##
## Made by	Guillaume SAGOT
## Login	guillaume.sagot
##
## Started on	Sun Sep 24 23:20:49 2017 Guillaume SAGOT
## Last update	Sun Sep 24 23:20:49 2017 Guillaume SAGOT
##

COMP = g++

CXXFlAGS 	+= -Werror -Wall
CXXFlAGS	+= -Iincludes

NAME 	=		airline
SRC 	=		AEntity.cpp  \
					Airport.cpp  \
					Booking.cpp  \
					Client.cpp  \
					Employee.cpp  \
					Plane.cpp  \
					PMethod.cpp  \
					Time.cpp

OBJ		=		$(SRC:.c++=.o)

all 	: 	$(OBJ)
					$(NAME) $(OBJ) -o $(NAME) $(CXXFlAGS)

clean	:
					rm -f $(OBJ)

fclean: clean
				rm -f $(NAME)

re		:	 fclean all

.PHONY : all clean fclean all
