
[Rainmeter]
Update=1000
BackgroundMode=2
SolidColor=#BackgroundColor#

[Metadata]
Name=GlobalSettings
Author=TGonZo
Information=Global default values for all meters.
License=Creative Commons BY-NC-SA 3.0
Version=2.3.0


;-----------------------------
;-----------------------------

[Variables]
colorRed=245,80,80,220
colorRedDim=245,50,50,140
colorPurple=220,80,220,220
colorBlue=100,150,250,220
colorBlueDim=100,150,250,140
colorBlueSolid=100,150,250,255
colorBlueLite=180,220,255,220
colorGreen=100,250,100,220
colorGreenDim=100,250,100,140
colorWhite=255,255,255,220
colorWhiteLit=255,255,255,170
colorWhiteDim=255,255,255,150
colorWhiteDimLow=255,255,255,100
colorWhiteDimMin=255,255,255,50
colorYellow=235,170,0,220
colorYellowLiteHi=255,255,180,220
colorYellowLite=255,225,115,220
colorYellowLiteLow=255,200,50,220
colorCyan=55,255,255,220
colorCyanDim=55,255,255,160
colorClear=0,0,0,0
colorBlack=0,0,0,220
colorGray=0,0,0,100
;;;;;;colors = R,G,B,translucent
colorCore0=#colorWhite#
colorCore1=#colorBlueLite#
colorCore2=#colorWhite#
colorCore3=#colorBlueLite#
colorCore4=#colorWhite#
colorCore5=#colorBlueLite#
colorCore6=#colorWhite#
colorCore7=#colorBlueLite#
colorCore8=#colorWhite#
colorCore9=#colorBlueLite#
colorCore10=#colorWhite#
colorCore11=#colorBlueLite#

fontName=Trebuchet MS
textSizeMd=12
textSize=8

All-in-OneSkinLoc=SimplePerfMeters\All-in-One
NetSkinLoc=SimplePerfMeters\Network
NetConfigSkinLoc=SimplePerfMeters\Network\config
WxSkinLoc=SimplePerfMeters\Wx
WxConfigSkinLoc=SimplePerfMeters\wx\config
CPUmemSkinLoc=SimplePerfMeters\CPUmem
PerfConfigSkinLoc=SimplePerfMeters\perfconfig
VolumeSkinLoc=SimplePerfMeters\Volume
DiskConfigSkinLoc=SimplePerfMeters\DiskConfig
;GPUSkinLoc=SimplePerfMeters\GPU
;GPUConfigSkinLoc=SimplePerfMeters\GPU\config

BackgroundColor=0,0,0,75

meterScaleClock=1.0
meterScaleCPU=1
meterScaleNet=1.0
meterScaleDisk=1.0
meterScaleWx=1.0
meterScaleVolume=1
meterScaleGPU=1
meterScaleAll-in-One=1


;GPUcolorFanRpmSelect=245,80,80,220
;GPUcolorFanPerSelect=255,255,255,50
;GPUfanMeasureName=HWiNFOGPU0FanRpm
;GPUfanUOM=rpm
;GPUmemTotalMeasureName=HWiNFOGPU0MemMax
;; HWiNFOGPU0MemMax or HWiNFOGPU0MemMaxAMD
;GPUmemUsedMeasureName=HWiNFOGPU0MemUsed
;; HWiNFOGPU0Mem or HWiNFOGPU0MemUsedAMD
;GPUcolorAMDmemSelect=255,255,255,50
;GPUcolorNVmemSelect=100,250,100,220






;-----------------------------
;-----------------------------

[styleLeftTextMed]
StringAlign=Left
;StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhite#
FontFace=#fontName#
FontSize=#textSizeMd#
AntiAlias=1
ClipString=1

[styleRightTextMed]
StringAlign=Right
;StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhite#
FontFace=#fontName#
FontSize=#textSizeMd#
AntiAlias=1
ClipString=1

[styleCenterTextMed]
StringAlign=Center
StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhite#
FontFace=#fontName#
FontSize=#textSizeMd#
AntiAlias=1
ClipString=1

;-------

[styleLeftText]
StringAlign=Left
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhite#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleLeftTextSmall]
StringAlign=Left
StringCase=None
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhite#
FontFace=Segoe UI
FontSize=7
AntiAlias=1
ClipString=1

;-------

[styleRightText]
StringAlign=Right
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhite#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleRightTextSmall]
StringAlign=Right
StringCase=None
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhite#
FontFace=Segoe UI
FontSize=7
AntiAlias=1
ClipString=1

;-------

[styleBarYellow]
BarColor=#colorYellow#
BarOrientation=HORIZONTAL
SolidColor=#colorWhiteDimMin#

[styleBarRed]
BarColor=#colorRed#
BarOrientation=HORIZONTAL
SolidColor=#colorWhiteDimMin#

[styleBarBlue]
BarColor=#colorBlue#
BarOrientation=HORIZONTAL
SolidColor=#colorWhiteDimMin#

;-----------------------------
;-----------------------------

