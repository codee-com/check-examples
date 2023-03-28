! OPP001: Multithreading Opportunity 
! https://www.codee.com/knowledge/opp001/
! Scalar reduction pattern
! https://www.codee.com/knowledge/patterns/scalar-reduction/

SUBROUTINE example(A, n, sum)
    integer, intent(in) :: n
    double precision, dimension (1:n), intent(in) :: A
    double precision, intent(out) :: sum
    integer :: i

    sum = 0
    DO i=1,n
       sum = sum + A(i)
    END DO 
    PRINT *, sum
END