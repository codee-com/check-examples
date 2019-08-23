! PWR001: Declare global variables as function parameters

PROGRAM example
    INTEGER :: global = 10
    CALL s
CONTAINS
    SUBROUTINE s
        IMPLICIT NONE
        global = 20    
    END SUBROUTINE
END PROGRAM
