! PWR013: Avoid copying unused variables to the GPU
! https://www.codee.com/catalog/pwr013

subroutine example(a, b, c)
    integer, intent(inout) :: a(100), b(100), c(100)
    integer :: i
    !$omp target teams distribute parallel do schedule(auto) shared(A, B) map(to: a(1:100), b(1:100)) map(tofrom: c(1:100))
    do i = 1, 100
        c(i) = c(i) + a(i)
    end do
end subroutine
