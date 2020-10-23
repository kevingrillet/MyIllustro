[IncludesLayouts]
@includeLayoutExcel=#@#Includes\Excel\Layouts\Excel.min.inc
@includeLayoutWord=#@#Includes\Word\Layouts\Word.min.inc
@includeLayoutMSSQL=#@#Includes\MSSQL\Layouts\MSSQL.full.inc
@includeLayoutWord=#@#Includes\SSMS\Layouts\SSMS.std.inc
@includeLayoutWord=#@#Includes\Delphi\Layouts\Delphi.full.inc

[Variables]
yExcel=(#yOffsetLine#*2)
yWord=(#yOffsetLine#*3)
yMSSQL=(#yOffsetLine#*4)
ySSMS=(#yOffsetLine#*8)
yDelphi=(#yOffsetLine#*10)