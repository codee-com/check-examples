! PWR015: Avoid copying unnecessary array elements to the GPU
! https://www.codee.com/knowledge/pwr015

subroutine example(a, c)
    integer, intent(inout) :: a(100), c(100)
    integer :: i
    !$omp target teams distribute parallel do schedule(auto) shared(A, B) map(to: a(0:100)) map(tofrom: c(0:100))
    do i = 1, 50
        c(i) = c(i) + a(i)
    end do
end subroutine
