! PWR040: Consider loop tiling to improve the locality of reference
! https://www.codee.com/knowledge/pwr040

subroutine copy(a, b, LEN_2D)
    integer, intent(in) :: LEN_2D
    real, dimension(1:LEN_2D, 1:LEN_2D), intent(inout) :: a, b
    integer :: i, j

    do i = 1, LEN_2D
        do j = 1, LEN_2D
            a(j, i) = b(i, j)
        end do
    end do

end subroutine
