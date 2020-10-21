##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Pratica1
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/ivo/Desktop/unir/ed2
ProjectPath            :=C:/Users/ivo/Desktop/unir/ed2/Pratica1
IntermediateDirectory  :=../build-$(ConfigurationName)/Pratica1
OutDir                 :=../build-$(ConfigurationName)/Pratica1
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ivo
Date                   :=21/10/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Pratica1/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pratica1/grafo.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pratica1/busca.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pratica1/arvore.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pratica1/caminho.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Pratica1/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Pratica1" mkdir "..\build-$(ConfigurationName)\Pratica1"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Pratica1" mkdir "..\build-$(ConfigurationName)\Pratica1"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Pratica1/.d:
	@if not exist "..\build-$(ConfigurationName)\Pratica1" mkdir "..\build-$(ConfigurationName)\Pratica1"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Pratica1/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Pratica1/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ivo/Desktop/unir/ed2/Pratica1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pratica1/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pratica1/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pratica1/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Pratica1/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pratica1/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Pratica1/grafo.cpp$(ObjectSuffix): grafo.cpp ../build-$(ConfigurationName)/Pratica1/grafo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ivo/Desktop/unir/ed2/Pratica1/grafo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/grafo.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pratica1/grafo.cpp$(DependSuffix): grafo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pratica1/grafo.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pratica1/grafo.cpp$(DependSuffix) -MM grafo.cpp

../build-$(ConfigurationName)/Pratica1/grafo.cpp$(PreprocessSuffix): grafo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pratica1/grafo.cpp$(PreprocessSuffix) grafo.cpp

../build-$(ConfigurationName)/Pratica1/busca.cpp$(ObjectSuffix): busca.cpp ../build-$(ConfigurationName)/Pratica1/busca.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ivo/Desktop/unir/ed2/Pratica1/busca.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/busca.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pratica1/busca.cpp$(DependSuffix): busca.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pratica1/busca.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pratica1/busca.cpp$(DependSuffix) -MM busca.cpp

../build-$(ConfigurationName)/Pratica1/busca.cpp$(PreprocessSuffix): busca.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pratica1/busca.cpp$(PreprocessSuffix) busca.cpp

../build-$(ConfigurationName)/Pratica1/arvore.cpp$(ObjectSuffix): arvore.cpp ../build-$(ConfigurationName)/Pratica1/arvore.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ivo/Desktop/unir/ed2/Pratica1/arvore.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/arvore.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pratica1/arvore.cpp$(DependSuffix): arvore.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pratica1/arvore.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pratica1/arvore.cpp$(DependSuffix) -MM arvore.cpp

../build-$(ConfigurationName)/Pratica1/arvore.cpp$(PreprocessSuffix): arvore.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pratica1/arvore.cpp$(PreprocessSuffix) arvore.cpp

../build-$(ConfigurationName)/Pratica1/caminho.cpp$(ObjectSuffix): caminho.cpp ../build-$(ConfigurationName)/Pratica1/caminho.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ivo/Desktop/unir/ed2/Pratica1/caminho.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/caminho.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pratica1/caminho.cpp$(DependSuffix): caminho.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pratica1/caminho.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pratica1/caminho.cpp$(DependSuffix) -MM caminho.cpp

../build-$(ConfigurationName)/Pratica1/caminho.cpp$(PreprocessSuffix): caminho.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pratica1/caminho.cpp$(PreprocessSuffix) caminho.cpp


-include ../build-$(ConfigurationName)/Pratica1//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


