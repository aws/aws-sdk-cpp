#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
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
   * Initializes with the default profile. Credentials are refreshed when they expire,
   * and credentials without an expiration are loaded once.
   */
  ProfileCredentialsProvider();

  /**
   * Initializes with the default profile. refreshRateMs is ignored, only kept so existing code compiles, and logs a warning.
   */
  ProfileCredentialsProvider(long refreshRateMs);

  /**
   * Initializes with a profile override. Credentials are refreshed when they expire,
   * and credentials without an expiration are loaded once.
   */
  ProfileCredentialsProvider(const char* profile);

  /**
   * Initializes with a profile override. refreshRateMs is ignored, only kept so existing code compiles, and logs a warning.
   */
  ProfileCredentialsProvider(const char* profile, long refreshRateMs);

  /**
   * Initializes from a CredentialProviderConfiguration so settings such as allowSystemProxy can flow through.
   */
  ProfileCredentialsProvider(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& config);

  /**
   * Initializes from a CredentialProviderConfiguration. refreshRateMs is ignored, only kept so existing code compiles,
   * and logs a warning.
   */
  ProfileCredentialsProvider(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& config, long refreshRateMs);

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
