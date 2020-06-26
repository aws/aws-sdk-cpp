/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/testing/TestingEnvironment.h>

#include <aws/core/platform/FileSystem.h>
#include <aws/testing/platform/PlatformTesting.h>

#include <sstream>

namespace Aws
{
namespace Testing
{

void RedirectHomeToTempIfAppropriate()
{
    #if !defined(DISABLE_HOME_DIR_REDIRECT) 
        //Set $HOME to tmp on unix systems
        std::stringstream tempDir; //( P_tmpdir );
        tempDir << P_tmpdir;
        std::string dir = tempDir.str().c_str();
        if (dir.size() > 0 && *(dir.c_str() + dir.size() - 1) != Aws::FileSystem::PATH_DELIM)
        {
            tempDir << Aws::FileSystem::PATH_DELIM;
        }
        Aws::Environment::SetEnv("HOME", tempDir.str().c_str(), 1);
    #endif // !defined(DISABLE_HOME_DIR_REDIRECT)
}

static std::string s_resourcePrefix("");

void SetAwsResourcePrefix(const char* resourcePrefix)
{
    if(resourcePrefix)
    {
        s_resourcePrefix = resourcePrefix;
    }
    else
    {
        s_resourcePrefix = "";
    }
}

const Aws::String GetAwsResourcePrefix()
{
    return Aws::String(s_resourcePrefix.c_str());
}

void ParseArgs(int argc, char** argv)
{
    // std::string rather than Aws::String since this happens before the memory manager is initialized
    const std::string resourcePrefixOption = "--aws_resource_prefix=";
    // list other options here
    for(int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if(arg.find(resourcePrefixOption) == 0)
        {
            arg = arg.substr(resourcePrefixOption.length()); // get whatever value after the '='
            Aws::Testing::SetAwsResourcePrefix(arg.c_str());
        }
    }
}

} // namespace Testing
} // namespace Aws
