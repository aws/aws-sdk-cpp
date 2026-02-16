#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <memory>

namespace Aws {
namespace Auth {
/**
 * CRT-based credentials provider that sources credentials from config files with full SEP compliance.
 * Supports assume role, credential_source, role chaining, and all SEP scenarios.
 */
class AWS_CORE_API ProfileCredentialsProvider : public AWSCredentialsProvider {
 public:
  /**
   * Initializes with refreshRateMs as the frequency at which the file is reparsed in milliseconds. Defaults to 5 minutes.
   */
  ProfileCredentialsProvider(long refreshRateMs = REFRESH_THRESHOLD);

  /**
   * Initializes with a profile override and
   * refreshRateMs as the frequency at which the file is reparsed in milliseconds. Defaults to 5 minutes.
   */
  ProfileCredentialsProvider(const char* profile, long refreshRateMs = REFRESH_THRESHOLD);

  /**
   * Retrieves the credentials if found, otherwise returns empty credential set.
   */
  AWSCredentials GetAWSCredentials() override;

  /**
   * Returns the fullpath of the calculated credentials profile file
   */
  static Aws::String GetCredentialsProfileFilename();

  /**
   * Returns the directory storing the profile file.
   */
  static Aws::String GetProfileDirectory();

 protected:
  void Reload() override;

 private:
  class ProfileCredentialsProviderImp;
  std::shared_ptr<ProfileCredentialsProviderImp> m_impl;
};
}  // namespace Auth
}  // namespace Aws
