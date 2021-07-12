/*
                     USE OF DIFFERENT ESCAPE SEQUENCE
   \n  -- NEWLINE         - MOVES THE CURSOR TO THE BEGINNING OF NEXT LINE.
   \b  -- BACKSPACE       - MOVES THE CURSOR TO THE PREVIOUS POSITION OF THE CURRENT LINE.
   \t  -- HORIZONTAL TAB  - MOVES THE CURSOR TO THE NEXT HORIZONTAL POSITION.
   \a  -- ALERT(BELL)     - Produces the beep sound.
   \r  -- CARRIAGE RETURN - Moves the cursor to the beginning of current line.
   \f  -- FORM FEED       - Moves the cursor to the inital position of the next lgical page.
   \v  -- VERTICAL TAB    - Moves the cursor to the  next vetical position.
   \\  -- BACKSLASH       - Presents the character with backslash(\).
   \0  -- NULL            - Null.
   \"  -- DOUBLE QUOTES   - PRINTS DOUBLE QUOTES(").
   \'  -- SINGLE QUOTES   - PRINTS SINGLE QUOTES(').
   \?  -- QUESTION MARK   - PRINT ?.
 */
void main()
{
 printf("my name is anmol \t Jandiyal ");                   // \t is used.
 getch();                                                   /*
                                                                getch() is used to hold th screen.
                                                                Real meaning of above function is to take the input from user.
                                                            */

 printf("hello");                                            // here 'hello' is printed just after the 'jandiyal'.
 getch();
 printf("\n Im studing c programing");                      // \n is used.
 getch();
 printf("\n");                                               // \n is used.
 getch();
 printf("\a\a\a alert..........\a\a\a  ");                  // \a is used.
 getch();
 printf("\nMY MOTHERS NAME IS: \t Anju Gupta");             // \n and \t is used.
 getch();
 printf("\v");                                              // \v is used.
 getch();
 printf("My fathers name is: \t TILAK RAJ GUPTA ");        // \t is used.
 getch();
 printf("\r");                                              //\r is used.
 getch();
 printf("\\ backslash is used");                            //\\ is used.
 getch();
}

