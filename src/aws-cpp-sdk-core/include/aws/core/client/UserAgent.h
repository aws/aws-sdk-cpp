/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSSet.h>

namespace Aws {
namespace Client {

enum class UserAgentFeature {
  RETRY_MODE_LEGACY,
  RETRY_MODE_STANDARD,
  RETRY_MODE_ADAPTIVE,
  S3_TRANSFER,
  S3_CRYPTO_V1N,
  S3_CRYPTO_V2,
};

class AWS_CORE_API UserAgent {
 public:
  explicit UserAgent(const ClientConfiguration& clientConfiguration, const Aws::String& retryMode);
  Aws::String SerializeWithFeatures(const Aws::Set<UserAgentFeature>& features) const;
  void SetApiName(const Aws::String& apiName) { m_api = apiName; }
  void AddLegacyFeature(const Aws::String& legacyFeature);

 private:
  Aws::String m_sdkVersion;
  Aws::String m_userAgentVersion;
  Aws::String m_api;
  Aws::String m_crtVersion;
  Aws::String m_osVersion;
  Aws::String m_archName;
  Aws::String m_cppVersion;
  Aws::String m_compilerMetadata;
  Aws::String m_retryMode;
  Aws::String m_execEnv;
  Aws::String m_appId;
  Aws::String m_customizations;
  Aws::Vector<UserAgentFeature> m_features{};
};
}  // namespace Client
}  // namespace Aws
