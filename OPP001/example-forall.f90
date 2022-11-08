! OPP001: Multithreading Opportunity 
! https://www.codee.com/knowledge/opp001/
! Forall pattern
! https://www.codee.com/knowledge/patterns/forall/

SUBROUTINE example(D, X, Y, n, a)
    integer, intent(in) :: n
    double precision, intent(in) :: a
    double precision, dimension (1:n), intent(in) :: X, Y
    double precision, dimension (1:n), intent(out) :: D
    integer :: i

    DO i=1,n
       D(i) = a * X(i) + Y(i)
    END DO 
END
