template <class T> 
void matrix_t<T>::DiagonalPrincipal() const {
  assert(get_m() == get_n()); 
  T suma; 
  for (int i = get_m(); i >= 1; --i) {
    suma += v_[pos(get_m() - i + 1, i)]; 
  }
  std::cout << "Suma diagonal principal es: " << suma << std::endl; 
}