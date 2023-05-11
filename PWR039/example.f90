! PWR039: Consider loop interchange to improve the locality of reference and
! enable vectorization
! https://www.codee.com/knowledge/pwr039

subroutine loop_interchange(aa, LEN_2D)
    integer, intent(in) :: LEN_2D
    real, dimension(1:LEN_2D, 1:LEN_2D), intent(inout) :: aa
    integer :: i, j

    do i = 1, LEN_2D
        do j = 1, LEN_2D
            aa(i, j) = 0
        end do
    end do

end subroutine
