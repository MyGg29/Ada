with Ada.Text_IO;
with Interfaces.C;

procedure ex1 is
  type Student is 
    record
      Name : String(1..100);
      Average : Float;
      Age : Integer;
    end record;
  package C renames Interfaces.C;
  function SortStu return Integer;
  pragma Import (Convention => C,
                Entity => SortStu,
                External_Name => "sortStudent");

  R : Integer;

begin
  Ada.Text_IO.Put_Line("Sending Students to the C program");
  R := SortStu;
end ex1;

