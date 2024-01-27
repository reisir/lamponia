[Rainmeter]
DynamicWindowSize=1
AccurateText=1
BackgroundMode=2
SolidColor=0,0,0,1
MouseScrollUpAction=[!SetVariable Scale "([#Scale] + #ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]"][!UpdateMeter *][!Redraw]
MouseScrollDownAction=[!SetVariable Scale "([#Scale] - #ScrollMouseIncrement# < 0.5 ? 0.5 : [#Scale]-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]"][!UpdateMeter *][!Redraw]
ContextTitle=#CURRENTCONFIG#
ContextAction=["#CURRENTPATH#"]
ContextTitle2=-
ContextAction2=
ContextTitle3=#__CenterHorizontal#
ContextAction3=[!SetWindowPosition "50%" "[#CURRENTCONFIGY]" "50%" "0%"]
ContextTitle4=#__CenterVertical#
ContextAction4=[!SetWindowPosition "([#CURRENTCONFIGX] + ([#CURRENTCONFIGWIDTH] / 2))" "50%" "50%" "50%"]
ContextTitle5=-
ContextAction5=
ContextTitle6=#__EditVariables#
ContextAction6=["#CONFIGEDITOR#" "#@#Variables.inc"]
ContextTitle7=#__RefreshMondtholomew#
ContextAction7=[!RefreshGroup Lampo]
ContextTitle8=-
ContextAction8=
ContextTitle9=#__SkinMenu#
ContextAction9=[!SkinMenu]
RightMouseUpAction=[!SkinCustomMenu]
DefaultAlwaysOnTop=-2
Group=Lampo

[\\]
@IncludeVariables=#@#Variables.inc
@IncludeLanguage=#@#Language.inc
@IncludeFa=#@#Fonts\fa.inc
