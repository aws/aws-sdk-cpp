#
# Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#
import os
import argparse
import os
import shutil
import subprocess

def GetBuildEnvironments():
    return { 'Windows2017' : { 'global_build_call' : 'msbuild ALL_BUILD.vcxproj',
                               'parallel_option' : ' -m:??',
                               'configs': ' -p:Configuration=??',
                               'generator_param' : {
                                   'x86' : ' -G \"Visual Studio 15 2017\"',
                                   'x86_64' : ' -G \"Visual Studio 15 2017 Win64\"'} },
             'Ubuntu' :      { 'global_build_call' : 'make',
                               'parallel_option' : ' -j??',
                               'configs': '',
                               'generator_param' : {
                                   'x86' : ' -DCMAKE_CXX_FLAGS=-m32',
                                   'x86_64' : ''} } }

def ParseArguments():
    argMap = {}

    parser = argparse.ArgumentParser(description="AWSNativeSDK Run all examples from Github aws-doc-sdk-examples repository.")
    parser.add_argument("--platform", action="store")
    parser.add_argument("--cpuArchitecture", action="store")
    parser.add_argument("--configs", action="store")
    parser.add_argument("--parallel", action="store")
    parser.add_argument("--sdkInstallDir", action="store")
    parser.add_argument("--exampleSourceDir", action="store")

    args = vars( parser.parse_args() )
    argMap[ "platform" ] = args[ "platform" ] or "Ubuntu"
    argMap[ "configs" ] = args[ "configs" ] or "Debug"
    argMap[ "cpuArchitecture" ] = args[ "cpuArchitecture"] or "x86_64"
    argMap[ "parallel" ] = args[ "parallel" ] or "8"
    argMap[ "sdkInstallDir" ] = args[ "sdkInstallDir" ] or "./install"
    argMap[ "exampleSourceDir" ] = args[ "exampleSourceDir" ] or os.path.join("aws-doc-sdk-examples", "cpp", "example_code")
    
    return argMap

def BuildExample(platform, cpuArchitecture, buildDir, buildType, sdkInstallDir, sourceDir, parallel):
    buildEnvironment = GetBuildEnvironments()
    
    if os.path.exists(buildDir):
        shutil.rmtree(buildDir)
    os.mkdir(buildDir)
    os.chdir(buildDir)
    
    cmake_call = "cmake" + buildEnvironment[ platform ][ "generator_param" ][ cpuArchitecture ]
    cmake_call = cmake_call + " -DBUILD_SHARED_LIBS=ON"
    cmake_call = cmake_call + " -DCMAKE_BUILD_TYPE=" + buildType
    cmake_call = cmake_call + " -DCMAKE_PREFIX_PATH=" + sdkInstallDir
    cmake_call = cmake_call + " -DAWSSDK_ROOT_DIR=" + sdkInstallDir
    cmake_call = cmake_call + " " + sourceDir
    print("cmake call = " + cmake_call)
    subprocess.check_call(cmake_call, shell = True)
    
    build_call = buildEnvironment[ platform ][ 'global_build_call' ]
    build_call = build_call + buildEnvironment[ platform ][ 'configs' ].replace("??", buildType)
    build_call = build_call + buildEnvironment[ platform ][ 'parallel_option' ].replace("??", parallel)
    print("build call = " + build_call)
    subprocess.check_call(build_call, shell = True)

def Main():
    arguments = ParseArguments()
    currentDirectory = os.getcwd()
    
    quotedSdkInstallDir = '"' + os.path.abspath(arguments[ "sdkInstallDir" ]) + '"'
    exampleSourceDir = os.path.abspath(arguments[ "exampleSourceDir" ])
    
    for serviceName in os.listdir(exampleSourceDir):
        serviceDir = os.path.join(exampleSourceDir, serviceName)
        if not os.path.isdir(serviceDir):
            continue
        else:
            if any(str(file) == "CMakeLists.txt" for file in os.listdir(serviceDir)):
                if serviceName == "redshift":
                    continue
                os.chdir(currentDirectory)
                BuildExample(platform = arguments[ "platform" ],
                             cpuArchitecture = arguments[ "cpuArchitecture" ],
                             buildDir = os.path.join(currentDirectory, serviceName),
                             buildType = arguments[ "configs" ],
                             sdkInstallDir = quotedSdkInstallDir,
                             sourceDir = serviceDir,
                             parallel = arguments[ "parallel" ])

# Run from powershell; make sure msbuild is in PATH environment variable  
Main()
