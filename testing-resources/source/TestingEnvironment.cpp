/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/testing/TestingEnvironment.h>

#include <aws/core/platform/FileSystem.h>
#include <aws/core/platform/Environment.h>
#include <aws/testing/platform/PlatformTesting.h>

#ifdef __linux__
#include <signal.h>
#endif

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

static std::vector<std::pair<const char*, std::string>> s_environments;

void SaveEnvironmentVariable(const char* variableName)
{
    s_environments.emplace_back(variableName, Aws::Environment::GetEnv(variableName).c_str());
}

void RestoreEnvironmentVariables()
{
    for(const auto& iter : s_environments)
    {
        if(iter.second.empty())
        {
            Aws::Environment::UnSetEnv(iter.first);
        }
        else
        {
            Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1/*override*/);
        }
    }
}

AWS_TESTING_API void SetDefaultSigPipeHandler()
{
    // Setting SIGPIPE to be ignored in linux
#ifdef __linux__
    signal(SIGPIPE, SIG_IGN);
#endif
}

} // namespace Testing
} // namespace Aws
