! PWR006: Avoid privatization of read-only variables
! https://www.codee.com/knowledge/pwr006

program foo
  implicit none
  integer :: i
  integer :: sum(19)
  integer :: a(10), b(10)

  !$omp parallel do firstprivate(i, a, b) shared(sum)
  do i = 1,10
    sum(i) = A(i) + B(i);
  end do
end program
