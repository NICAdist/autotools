int main (void)
{
  gettext ("1abc\x00ghi");
  gettext ("2abc\x00ghi" "jkl\x00rst");
  gettext ("3abc\x00ghi");
  gettext ("4abc\000ghi" "jkl\000rst");
  gettext ("5abc ghi");
  gettext ("6abc ghi" "jkl rst");
  gettext ("7abc\ ");
  gettext ("8abc\x "); // invalid C
  gettext ("9abc\xA ");
  gettext ("10abc\u "); // invalid C
  gettext ("11abc\U "); // invalid C
  gettext ("12abc\u3 "); // invalid C
  gettext ("13abc\u45 "); // invalid C
  gettext ("14abc\u567 "); // invalid C
}
   

