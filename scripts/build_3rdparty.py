﻿#
# Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

import argparse
import os
import platform
import re
import sdk_directories
import shutil
import subprocess

def GetBuildEnvironments():
    return { 'make' : { 'global_build_call' : [ "make" ],
                        'parallel_option' : '-j??' },
             'msbuild' : { 'global_build_call' : [ "msbuild", "ALL_BUILD.vcxproj" ],
                           'parallel_option' : '-m:??' },
             'nmake' : { 'global_build_call' : [ "nmake" ],
                         'parallel_option' : '' } }

def GetPlatformEnvironments():
    return { 'Windows' : { 'default_install_directory' : 'C:\\temp\\AWSNativeSDK' },
             'Linux' : { 'default_install_directory' : '/tmp/AWSNativeSDK' },
             'Darwin' : { 'default_install_directory' : '/tmp/AWSNativeSDK' } }


def GetPlatformBuildTargets():
    return { 'Windows' : { 'buildPlatforms' : [ 'Windows' ],
                           'configs' : { 'DebugDynamic' : { 'directory' : '_build_windows_dynamic_debug', 
                                                            'cmake_params' : "-DSTATIC_LINKING=0",
                                                            'build_params' : [ "-p:Configuration=Debug" ],
                                                            'config' : 'Debug' }, 
                                         'DebugStatic' : { 'directory' : '_build_windows_static_debug', 
                                                           'cmake_params' : "-DSTATIC_LINKING=1",
                                                           'build_params' : [ "-p:Configuration=Debug" ],
                                                           'config' : 'Debug' }, 
                                         'ReleaseDynamic' : { 'directory' : '_build_windows_dynamic_release', 
                                                              'cmake_params' : "-DSTATIC_LINKING=0",
                                                              'build_params' : [ "-p:Configuration=Release" ],
                                                              'config' : 'Release' }, 
                                         'ReleaseStatic' : { 'directory' : '_build_windows_static_release', 
                                                             'cmake_params' : "-DSTATIC_LINKING=1",
                                                             'build_params' : [ "-p:Configuration=Release" ],
                                                             'config' : 'Release' } },
                           'platform_install_qualifier' : "vs2013", 
                           'build_environment' : 'msbuild',
                           'global_cmake_params' : "-G \"Visual Studio 12 Win64\" -DCUSTOM_MEMORY_MANAGEMENT=1 -DGENERATE_VERSION_INFO=0 -DENABLE_RTTI=OFF -DSIMPLE_INSTALL=OFF -DENABLE_UNITY_BUILD=ON -DCMAKE_CONFIGURATION_TYPES=\"Debug;Release;MinSizeRel;RelWithDebInfo\" -DCMAKE_CXX_FLAGS_DEBUGOPT=\"\" -DCMAKE_EXE_LINKER_FLAGS_DEBUGOPT=\"\" -DCMAKE_SHARED_LINKER_FLAGS_DEBUGOPT=\"\"" },
             'Windows2015' : { 'buildPlatforms' : [ 'Windows' ],
                               'configs' : { 'DebugDynamic' : { 'directory' : '_build_windows_2015_dynamic_debug', 
                                                                'cmake_params' : "-DSTATIC_LINKING=0",
                                                                'build_params' : [ "-p:Configuration=Debug" ],
                                                                'config' : 'Debug' }, 
                                             'DebugStatic' : { 'directory' : '_build_windows_2015_static_debug', 
                                                               'cmake_params' : "-DSTATIC_LINKING=1",
                                                               'build_params' : [ "-p:Configuration=Debug" ],
                                                               'config' : 'Debug' }, 
                                             'ReleaseDynamic' : { 'directory' : '_build_windows_2015_dynamic_release', 
                                                                  'cmake_params' : "-DSTATIC_LINKING=0",
                                                                  'build_params' : [ "-p:Configuration=Release" ],
                                                                  'config' : 'Release' }, 
                                             'ReleaseStatic' : { 'directory' : '_build_windows_2015_static_release', 
                                                                 'cmake_params' : "-DSTATIC_LINKING=1",
                                                                 'build_params' : [ "-p:Configuration=Release" ],
                                                                 'config' : 'Release' } },
                               'platform_install_qualifier' : "vs2015",
                               'build_environment' : 'msbuild',
                               'global_cmake_params' : "-G \"Visual Studio 14 2015 Win64\" -DCUSTOM_MEMORY_MANAGEMENT=1 -DGENERATE_VERSION_INFO=0 -DENABLE_RTTI=OFF -DSIMPLE_INSTALL=OFF -DENABLE_UNITY_BUILD=ON -DCMAKE_CONFIGURATION_TYPES=\"Debug;Release;MinSizeRel;RelWithDebInfo\" -DCMAKE_CXX_FLAGS_DEBUGOPT=\"\" -DCMAKE_EXE_LINKER_FLAGS_DEBUGOPT=\"\" -DCMAKE_SHARED_LINKER_FLAGS_DEBUGOPT=\"\"" },
             'Android' : { 'buildPlatforms' : [ 'Linux' ],
                           'configs' : { 'DebugDynamic' : { 'directory' : '_build_android_dynamic_debug', 
                                                            'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Debug",
                                                            'build_params' : [],
                                                            'config' : 'Debug' },
                                         'DebugStatic' : { 'directory' : '_build_android_dynamic_static', 
                                                           'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Debug",
                                                           'build_params' : [],
                                                           'config' : 'Debug' },
                                         'ReleaseDynamic' : { 'directory' : '_build_android_dynamic_release', 
                                                              'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Release",
                                                              'build_params' : [],
                                                              'config' : 'Release' }, 
                                         'ReleaseStatic' : { 'directory' : '_build_android_static_release', 
                                                             'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Release",
                                                             'build_params' : [],
                                                             'config' : 'Release' } },
                           'platform_install_qualifier' : "",
                           'build_environment' : 'make',
                           'global_cmake_params' : "-DSIMPLE_INSTALL=OFF " \
                                                   "-DCUSTOM_MEMORY_MANAGEMENT=1 " \
                                                   "-DGENERATE_VERSION_INFO=0 " \
                                                   "-DENABLE_RTTI=OFF " \
                                                   "-DMINIMIZE_SIZE=ON " \
                                                   "-DANDROID_STL=gnustl " \
                                                   "-DTARGET_ARCH=ANDROID "},
             'AndroidWindows' : { 'buildPlatforms' : [ 'Windows' ],
                                  'configs' : { 'DebugDynamic' : { 'directory' : '_build_android_dynamic_debug', 
                                                                   'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Debug",
                                                                   'build_params' : [],
                                                                   'config' : 'Debug' },
                                                'DebugStatic' : { 'directory' : '_build_android_dynamic_static', 
                                                                  'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Debug",
                                                                  'build_params' : [],
                                                                  'config' : 'Debug' },
                                                'ReleaseDynamic' : { 'directory' : '_build_android_dynamic_release', 
                                                                     'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Release",
                                                                     'build_params' : [],
                                                                     'config' : 'Release' }, 
                                                'ReleaseStatic' : { 'directory' : '_build_android_static_release', 
                                                                    'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Release",
                                                                    'build_params' : [],
                                                                    'config' : 'Release' } },
                                  'platform_install_qualifier' : "",
                                  'build_environment' : 'nmake',
                                  'global_cmake_params' : "-G \"NMake Makefiles\" " \
                                                          "-DSIMPLE_INSTALL=OFF " \
                                                          "-DCUSTOM_MEMORY_MANAGEMENT=1 " \
                                                          "-DGENERATE_VERSION_INFO=0 " \
                                                          "-DENABLE_RTTI=OFF " \
                                                          "-DMINIMIZE_SIZE=ON " \
                                                          "-DANDROID_STL=gnustl " \
                                                          "-DTARGET_ARCH=ANDROID "},
             'Linux' : { 'buildPlatforms' : [ 'Linux' ],
                         'configs' : { 'DebugDynamic' : { 'directory' : '_build_linux_dynamic_debug', 
                                                          'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Debug",
                                                          'build_params' : [],
                                                          'config' : 'Debug' },
                                       'DebugStatic' : { 'directory' : '_build_linux_dynamic_static', 
                                                         'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Debug",
                                                         'build_params' : [],
                                                         'config' : 'Debug' },
                                       'ReleaseDynamic' : { 'directory' : '_build_linux_dynamic_release', 
                                                            'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Release",
                                                            'build_params' : [],
                                                            'config' : 'Release' },
                                       'ReleaseStatic' : { 'directory' : '_build_linux_static_release', 
                                                           'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Release",
                                                           'build_params' : [],
                                                           'config' : 'Release' } },
                         'platform_install_qualifier' : "",
                         'build_environment' : 'make',
                         'global_cmake_params' : "-DSIMPLE_INSTALL=OFF -DCUSTOM_MEMORY_MANAGEMENT=1 -DGENERATE_VERSION_INFO=0 -DENABLE_RTTI=OFF -DENABLE_UNITY_BUILD=ON" },
             'Darwin' : { 'buildPlatforms' : [ 'Darwin' ],
                                      'configs' : { 'DebugDynamic' : { 'directory' : '_build_darwin_dynamic_debug', 
                                                          'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Debug",
                                                          'build_params' : [],
                                                          'config' : 'Debug' },
                                       'DebugStatic' : { 'directory' : '_build_darwin_dynamic_static', 
                                                         'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Debug",
                                                         'build_params' : [],
                                                         'config' : 'Debug' },
                                       'ReleaseDynamic' : { 'directory' : '_build_darwin_dynamic_release', 
                                                            'cmake_params' : "-DSTATIC_LINKING=0 -DCMAKE_BUILD_TYPE=Release",
                                                            'build_params' : [],
                                                            'config' : 'Release' }, 
                                       'ReleaseStatic' : { 'directory' : '_build_darwin_static_release', 
                                                           'cmake_params' : "-DSTATIC_LINKING=1 -DCMAKE_BUILD_TYPE=Release",
                                                           'build_params' : [],
                                                           'config' : 'Release' } },
                         'platform_install_qualifier' : "",
                         'build_environment' : 'make',
                         'global_cmake_params' : "-DSIMPLE_INSTALL=OFF -DCUSTOM_MEMORY_MANAGEMENT=1 -DGENERATE_VERSION_INFO=0 -DENABLE_RTTI=OFF " } }


def ParseArguments(platformEnvironments):
    argMap = {}

    platformName = platform.system()
    platformEnv = platformEnvironments[ platformName ]

    parser = argparse.ArgumentParser(description="AWSNativeSDK 3rdParty Install Script")
    parser.add_argument("--installdir", action="store")
    parser.add_argument("--cmake_params", action="store")
    parser.add_argument("--architecture", action="store")
    parser.add_argument("--configs", action="store")
    parser.add_argument("--parallel", action="store")
    parser.add_argument("--generateClients", action="store")
    parser.add_argument("--sourcedir", action="store")

    args = vars( parser.parse_args() )
    argMap[ "installDir" ] = args[ "installdir" ] or platformEnv['default_install_directory']
    argMap[ "cmakeParams" ] = re.sub(r'^"|"$', '', args[ "cmake_params" ] or "")
    argMap[ "architecture" ] = re.sub(r'^"|"$', '', args[ "architecture" ] or platformName)
    argMap[ "configs" ] = re.sub(r'^"\"$', '', args[ "configs" ] or "DebugStatic DebugDynamic ReleaseDynamic ReleaseStatic").split()
    argMap[ "parallel" ] = args[ "parallel" ] or "2"
    argMap[ "generateClients" ] = args[ "generateClients" ] or "0"
    argMap[ "sourcedir" ] = args[ "sourcedir"] or ".."
    
    return argMap


def CopyPDBs(config, libDir, installDirectoryPrefix, platformInstallQualifier):

    destDirectory = os.path.join(installDirectoryPrefix, libDir, "windows", "intel64", platformInstallQualifier, config)
    
    for rootDir, dirNames, fileNames in os.walk( "." ):
        if rootDir == ".":
            for dirName in dirNames:
                
                sourceFile = os.path.join(rootDir, dirName, config, dirName + ".pdb")
                if os.path.isfile(sourceFile):
                    subprocess.check_call( "copy " + sourceFile + " \"" + destDirectory + "\"", shell = True )
    

def CopyAndroidExternalDependencies(config, installDirectory):
    for dependentLib in [ "zlib", "openssl", "curl" ]:
        uppercaseLib = dependentLib.upper()
        dependentInstallFile = os.path.join( uppercaseLib + "-prefix", "src", uppercaseLib + "-build", "cmake_install.cmake" )
        dependentInstallDirectory = '"' + os.path.join( installDirectory, "external", dependentLib ) + '"'
        dependent_install_call = "cmake -DCMAKE_INSTALL_CONFIG_NAME=" + config + " -DCMAKE_INSTALL_PREFIX=" + dependentInstallDirectory + " -P " + dependentInstallFile + " .."
        print( "dependent install call = " + dependent_install_call )
        subprocess.check_call( dependent_install_call, shell = True )


def RemoveExternalAndroidDirectories():
    for directory in [ "external", "zlib", "openssl", "curl" ]:
        if os.path.exists( directory ):
            shutil.rmtree( directory )


def Main():
    platformBuildTargets = GetPlatformBuildTargets()
    platformEnvironments = GetPlatformEnvironments()
    buildEnvironments = GetBuildEnvironments()

    sourcePlatform = platform.system()
    if not sourcePlatform in platformEnvironments:
        print( "Platform " + sourcePlatform + " not supported as a build platform" )
        return 1

    platformEnv = platformEnvironments[ sourcePlatform ]

    arguments = ParseArguments(platformEnvironments)
    
    customCmakeParams = arguments[ "cmakeParams" ] + " "
    architecture = arguments[ "architecture" ]
    targetConfigs = arguments[ "configs" ]
    installDirectory = arguments[ "installDir" ]
    parallelJobs = arguments[ "parallel" ]
    quotedInstallDirectory = '"' + installDirectory + '"'
    generateClients = arguments[ "generateClients" ]
    sourceDir = arguments["sourcedir" ]

    if os.path.exists( installDirectory ):
        shutil.rmtree( installDirectory )

    if not architecture in platformBuildTargets:
        print( "No definition for target architecture " + architecture )
        return 1

    targetPlatformDef = platformBuildTargets[ architecture ]
    if not sourcePlatform in targetPlatformDef[ 'buildPlatforms' ]:
        print( "Platform " + sourcePlatform + " does not support building for architecture " + architecture )
        return 1

    buildEnvironment = buildEnvironments[ targetPlatformDef[ 'build_environment' ] ]

    if architecture == 'Android':
       RemoveExternalAndroidDirectories()

    archConfigs = targetPlatformDef[ 'configs' ]

    if generateClients != "0":
        sdk_directories.wipeGeneratedCode()
        customCmakeParams += "-DREGENERATE_CLIENTS=1 "

    for targetConfig in targetConfigs:
        if targetConfig in archConfigs:
            archConfig = archConfigs[ targetConfig ]
            buildDirectory = archConfig[ 'directory' ]
            if os.path.exists( buildDirectory ):
                shutil.rmtree( buildDirectory )

            os.mkdir( buildDirectory )
            os.chdir( buildDirectory )

            cmake_call_list = "cmake " + customCmakeParams + " " + archConfig[ 'cmake_params' ] + " " + targetPlatformDef[ 'global_cmake_params' ]
            if targetPlatformDef[ 'platform_install_qualifier' ] != "":
                 cmake_call_list = cmake_call_list + " -DPLATFORM_INSTALL_QUALIFIER=" + targetPlatformDef[ 'platform_install_qualifier' ]
 
            cmake_call_list = cmake_call_list + " " + sourceDir
            print( "cmake call = " + cmake_call_list )
            subprocess.check_call( cmake_call_list, shell = True )

            parallelBuildOption = buildEnvironment[ 'parallel_option' ].replace("??", str(parallelJobs))
            build_call_list = buildEnvironment[ 'global_build_call' ] + [ parallelBuildOption ] + archConfig[ 'build_params' ]
            print( "build call = " + str( build_call_list ) )
            subprocess.check_call( build_call_list )

            install_call = "cmake -DCMAKE_INSTALL_CONFIG_NAME=" + archConfig[ 'config' ] + " -DCMAKE_INSTALL_PREFIX=" + quotedInstallDirectory + " -P cmake_install.cmake " + sourceDir
            print( "install call = " + install_call )
            subprocess.check_call( install_call, shell = True )

            # platform specific stuff
        
            # Copy Windows PDBs
            if architecture.startswith('Windows'):
                 CopyPDBs( archConfig[ 'config' ], "bin", installDirectory, targetPlatformDef[ 'platform_install_qualifier' ] )

            # Install Android auxiliary dependencies (zlib, openssl, curl)
            if architecture == 'Android':
                CopyAndroidExternalDependencies( archConfig[ 'config' ], installDirectory )

            os.chdir( ".." )

        else:
            print("Build target config " + targetConfig + " does not exist for architecture " + architecture)

    print( "Aws SDK for C++  finished 3rd party installation into: " + installDirectory )
    

# On windows: Run from powershell; make sure msbuild is in PATH environment variable  
Main()


