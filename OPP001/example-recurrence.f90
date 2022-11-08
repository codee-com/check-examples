! OPP001: Multithreading Opportunity 
! https://www.codee.com/knowledge/opp001/
! Recurrence pattern
! https://www.codee.com/knowledge/patterns/recurrence/

SUBROUTINE example(Y, X, n)
    integer, intent(in) :: n
    double precision, dimension (1:N), intent(in) :: x
    double precision, dimension (1:N), intent(out) :: y
    integer :: i

    y(1) = 0
    DO i=2,n
       y(i) = y(i-1) + x(i-1)
    END DO 
END
