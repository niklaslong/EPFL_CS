defmodule PageRank do
  @moduledoc """
  Documentation for PageRank.
  """

  @doc """
  Hello world.

  ## Examples

      iex> PageRank.hello
      :world

  """
  @d 0.85

  def new_page(out_links) do
    %{
      out_links: out_links,
      page_rank: 1
    }
  end

  def main() do
    pages = %{
      g: new_page(1)
      w: new_page(2)
      f: new_page(2)
      s: new_page(1)
    }
  end 

  def page_rank() do 
    (1 - @d) + @d * 
  end
end
