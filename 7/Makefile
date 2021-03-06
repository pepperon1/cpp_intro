OBJ = obj
LIB = ../lib
LIBOBJ = $(LIB)/obj

CXXFLAGS = -g -Wextra -Wall --pedantic-errors -Wno-sign-compare -std=c++98
INCLUDE = -I$(LIB)

ARGS = $(CXXFLAGS) $(INCLUDE)

7_0_words: $(OBJ)/7_0_words.o
	g++ $^ -o $@

7_0_xref: $(OBJ)/7_0_xref.o $(LIBOBJ)/xref.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

7_0_grammar: $(OBJ)/7_0_grammar.o $(LIBOBJ)/strvect_utils.o $(LIBOBJ)/grammar.o \
			$(LIBOBJ)/random.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

7_1: $(OBJ)/7_1.o $(LIBOBJ)/strvect_utils.o
	g++ $^ -o $@

7_2: $(OBJ)/7_2.o $(LIBOBJ)/grade.o $(LIBOBJ)/average.o $(LIBOBJ)/median.o \
	$(LIBOBJ)/Student_info.o
	g++ $^ -o $@

7_3: $(OBJ)/7_3.o $(LIBOBJ)/xref.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

7_4: $(OBJ)/7_4.o $(LIBOBJ)/xref.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

7_5: $(OBJ)/7_5.o $(LIBOBJ)/grammar.o $(LIBOBJ)/random.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

7_6: $(OBJ)/7_6.o $(LIBOBJ)/strvect_utils.o $(LIBOBJ)/grammar.o \
			$(LIBOBJ)/random.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

7_7: $(OBJ)/7_7.o $(LIBOBJ)/xref.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

7_8: $(OBJ)/7_8.o $(LIBOBJ)/xref.o $(LIBOBJ)/string_utils.o
	g++ $^ -o $@

$(OBJ)/%.o: %.cpp
	g++ -c $(ARGS) $^ -o $@

$(LIBOBJ)/%.o: $(LIB)/%.cpp
	g++ -c $(ARGS) $^ -o $@

clean:
	rm -f $(OBJ)/*
	rm -f $(LIBOBJ)/*
	rm -f 7_0_words
	rm -f 7_0_xref
	rm -f 7_0_grammar
	rm -f 7_1
	rm -f 7_2
	rm -f 7_3

.PHONY: clean