/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/CrtCredentialsProvider.h>

namespace Aws {
namespace Auth {
/**
 * To support retrieving credentials of STS AssumeRole with web identity.
 * Note that STS accepts request with protocol of queryxml. Calling GetAWSCredentials() will trigger (if expired)
 * a query request using AWSHttpResourceClient under the hood.
 */
class AWS_CORE_API LoginCredentialsProvider : public CrtCredentialsProvider {
 public:
  LoginCredentialsProvider(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& config);
  ~LoginCredentialsProvider() override;
};
}  // namespace Auth
}  // namespace Aws
