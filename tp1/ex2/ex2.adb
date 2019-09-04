with Ada.Text_IO;
with Interfaces.C;

procedure ex2 is
  package C renames Interfaces.C;
  function GenereInt_C(A: C.int) return Integer;
  pragma Import (Convention => C,
                Entity => GenereInt_C,
                External_Name => "genereInt");
  A : C.int := 42;
  R : Integer;
begin
  Ada.Text_IO.Put_Line("Hello World");
  R := GenereInt_C(A);
  Ada.Text_IO.Put(Integer'Image(R));
end ex2;

