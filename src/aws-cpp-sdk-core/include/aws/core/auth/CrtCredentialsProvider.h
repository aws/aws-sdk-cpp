/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>

#include <atomic>
#include <memory>

namespace Aws {
namespace Crt {
namespace Auth {
class ICredentialsProvider;
class Credentials;
}  // namespace Auth
}  // namespace Crt
}  // namespace Aws

namespace Aws {
namespace Auth {
class CredentialsCachingProvider;

/**
 * A utility class for wrapping a cached crt credentials provider.
 */
class AWS_CORE_API CrtCredentialsProvider : public AWSCredentialsProvider {
 public:
  explicit CrtCredentialsProvider(const std::function<std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider>()>& credentialsProviderFactory,
                                  std::chrono::milliseconds providerFuturesTimeoutMs, Aws::Client::UserAgentFeature userAgentFeature,
                                  const Aws::String& providerName);
  virtual ~CrtCredentialsProvider();

  /**
   * Retrieves the credentials if found, otherwise returns empty credential set.
   */
  AWSCredentials GetAWSCredentials() override;

  void Invalidate(const Aws::String& accessKeyId) override;

 private:
  enum class STATE {
    INITIALIZED,
    NOT_INITIALIZED,
  };

  static AWSCredentials ExtractCredentialsFromCrt(const Aws::Crt::Auth::Credentials& crtCredentials);

  // Nested so it can call the private ExtractCredentialsFromCrt(); defined in the .cpp.
  class CrtFetchOnlyProvider;

  std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> m_credentialsProvider;
  std::shared_ptr<CredentialsCachingProvider> m_cachingProvider;
  Aws::String m_providerName;
  STATE m_state{STATE::NOT_INITIALIZED};
};
}  // namespace Auth
}  // namespace Aws