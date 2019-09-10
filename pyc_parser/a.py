def fun(a, b):
  def g(c):
    def good():
      return a+b+c
    return good
  return g
