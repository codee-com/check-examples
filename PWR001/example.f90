! PWR001: Declare global variables as function parameters
! https://www.appentra.com/knowledge/checks/pwr001

PROGRAM example
    INTEGER :: global = 10
    CALL s
CONTAINS
    SUBROUTINE s
        IMPLICIT NONE
        global = 20    
    END SUBROUTINE
END PROGRAM
