defmodule NumSearch do
  def find(n) do
    case n < 2 do
      true -> 1
      false -> half(n)
    end
  end

  def half(n) do
    if n 
  end
end