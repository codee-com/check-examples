! OPP003: Offloading Opportunity 
! https://www.codee.com/knowledge/opp003/
! Sparse reduction pattern
! https://www.codee.com/knowledge/patterns/sparse-reduction/

SUBROUTINE example(A, nodes1, nodes2, nodes3, n)
    integer, intent(in) :: n
    integer, dimension (1:n), intent(in) :: nodes1, nodes2, nodes3
    double precision, dimension (1:n), intent(out) :: A
    integer :: nel

    DO nel=1,n
       A(nodes1(nel)) = A(nodes1(nel)) + (nel * 1)
    END DO 
END
