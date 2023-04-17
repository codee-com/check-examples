! PWR001: Declare global variables as function parameters
! https://www.codee.com/knowledge/checks/pwr001
MODULE globalsMod
REAL global_a
END MODULE globalsMod

REAL FUNCTION example()
    USE globalsMod
    IMPLICIT NONE
    example = global_a
END FUNCTION
