# escape=`

FROM mcr.microsoft.com/windows/servercore:ltsc2019

ADD https://download.microsoft.com/download/6/A/A/6AA4EDFF-645B-48C5-81CC-ED5963AEAD48/vc_redist.x64.exe /vc_redist.x64.exe
RUN start /wait C:\vc_redist.x64.exe /quiet /norestart

# Install chocolatey
RUN @powershell -NoProfile -ExecutionPolicy unrestricted -Command "$env:chocolateyUseWindowsCompression = 'true'; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.SecurityProtocolType]::Tls12; (iex ((new-object net.webclient).DownloadString('https://chocolatey.org/install.ps1'))) >$null 2>&1"

#Install 7zip
RUN choco install 7zip -y

#Install git
RUN choco install git -y

# Install Java
RUN choco install jdk8 --version=8.0.211 -y

# Install Maven
RUN choco install maven -y

# Install Python3
RUN choco install python --version=3.9.0 -y

# Install boto3
RUN pip3 install boto3 --upgrade

# Install awscli
RUN pip3 install awscli --upgrade

# Install CMake
RUN choco install cmake --version=3.18.5 --installargs 'ADD_CMAKE_TO_PATH=""System""' -y

# Install Visual C++ Build Tools, as per: https://chocolatey.org/packages/visualcpp-build-tools
RUN powershell -NoProfile -InputFormat None -Command `
    choco install visualcpp-build-tools -version 15.0.26228.20170424 -y; `
    Write-Host 'Waiting for Visual C++ Build Tools to finish'; `
    Wait-Process -Name vs_installer

# Add msbuild to PATH
RUN setx /M PATH "%PATH%;C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\MSBuild\15.0\Bin"

# Test msbuild can be accessed without path
RUN msbuild -version

CMD [ "cmd.exe" ]
