/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/testing/Testing_EXPORTS.h>
#include <aws/core/Aws.h>
#include <aws/core/platform/Environment.h>

namespace Aws
{
namespace Environment
{

    /**
    * shim for setenv
    */
    AWS_TESTING_API int SetEnv(const char* name, const char* value, int overwrite);

    /**
    * shim for unsetenv
    */
    AWS_TESTING_API int UnSetEnv(const char* name);

    /**
     * RAII helper to set environment variables and automatically free them
     */
    class EnvironmentRAII {
    public:
      explicit EnvironmentRAII(Aws::Vector<std::pair<Aws::String, Aws::String>>&& values) {
        for (auto& value : values) {
          m_previousValues.emplace_back(value.first, GetEnv(value.first.c_str()));
          if(value.second.empty()) {
            UnSetEnv(value.first.c_str());
          } else {
            SetEnv(value.first.c_str(), value.second.c_str(), 1);
          }
        }
      }

      ~EnvironmentRAII() {
        for (auto& value : m_previousValues) {
          if(value.second.empty()) {
            UnSetEnv(value.first.c_str());
          } else {
            SetEnv(value.first.c_str(), value.second.c_str(), 1);
          }
        }
      }

      EnvironmentRAII(const EnvironmentRAII&) = delete;
      EnvironmentRAII& operator=(const EnvironmentRAII&) = delete;
      EnvironmentRAII(EnvironmentRAII&&) noexcept = delete;
      EnvironmentRAII& operator=(EnvironmentRAII&&) noexcept= delete;
    private:
      Aws::Vector<std::pair<Aws::String, Aws::String>> m_previousValues;
    };

} // namespace Environment
namespace Testing
{
    AWS_TESTING_API void InitPlatformTest(Aws::SDKOptions& sdkOptions);
    AWS_TESTING_API void ShutdownPlatformTest(Aws::SDKOptions& sdkOptions);
    AWS_TESTING_API const char* GetDefaultWriteFolder();
} // namespace Testing
} // namespace Aws
