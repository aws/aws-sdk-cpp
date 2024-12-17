/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/testing/Testing_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Testing
{
    AWS_TESTING_API void RedirectHomeToTempIfAppropriate();
    AWS_TESTING_API void SetAwsResourcePrefix(const char* resourcePrefix);
    AWS_TESTING_API const Aws::String GetAwsResourcePrefix();
    AWS_TESTING_API void ParseArgs(int argc, char** argv);
    AWS_TESTING_API void SaveEnvironmentVariable(const char* variableName);
    AWS_TESTING_API void RestoreEnvironmentVariables();
    /*
     * SIGPIPE signal may be received from dependencies (libSSL, curl, other)
     * This signal, when not explicitly handled defaults to abort app run.
     * */
    AWS_TESTING_API void SetDefaultSigPipeHandler();

    /**
     * RAII Class that sets environment variables and resets
     * them when destroyed.
     */
    class AWS_TESTING_API EnvironmentVarContainer {
     public:
      explicit EnvironmentVarContainer(const Aws::Vector<std::pair<Aws::String, Aws::String>>& envVars);

      ~EnvironmentVarContainer();

     private:
      Aws::Vector<std::pair<Aws::String, Aws::String>> m_envVars;
    };
} // namespace Testing
} // namespace Aws
