/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/RetryStrategy.h>
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
  S3_EXPRESS_BUCKET,
  FLEXIBLE_CHECKSUMS_REQ_CRC32,
  FLEXIBLE_CHECKSUMS_REQ_CRC32C,
  FLEXIBLE_CHECKSUMS_REQ_CRC64,
  FLEXIBLE_CHECKSUMS_REQ_SHA1,
  FLEXIBLE_CHECKSUMS_REQ_SHA256,
  FLEXIBLE_CHECKSUMS_REQ_WHEN_SUPPORTED,
  FLEXIBLE_CHECKSUMS_REQ_WHEN_REQUIRED,
  FLEXIBLE_CHECKSUMS_RES_WHEN_SUPPORTED,
  FLEXIBLE_CHECKSUMS_RES_WHEN_REQUIRED,
  ACCOUNT_ID_MODE_PREFERRED,
  ACCOUNT_ID_MODE_DISABLED,
  ACCOUNT_ID_MODE_REQUIRED,
  RESOLVED_ACCOUNT_ID,
  GZIP_REQUEST_COMPRESSION,
};

class AWS_CORE_API UserAgent {
 public:
  explicit UserAgent(const ClientConfiguration& clientConfiguration, const Aws::String& retryStrategyName, const Aws::String& apiName);
  Aws::String SerializeWithFeatures(const Aws::Set<UserAgentFeature>& features) const;
  void SetApiName(const Aws::String& apiName) { m_api = apiName; }
  void AddLegacyFeature(const Aws::String& legacyFeature);

 private:
  const Aws::String m_sdkVersion;
  const Aws::String m_userAgentVersion;
  Aws::String m_api;
  const Aws::String m_crtVersion;
  const Aws::String m_osVersion;
  const Aws::String m_archName;
  const Aws::String m_cppVersion;
  const Aws::String m_compilerMetadata;
  const Aws::String m_retryStrategyName;
  const Aws::String m_execEnv;
  const Aws::String m_appId;
  const Aws::String m_overrideUserAgent;
  const Aws::String m_customizations;
  Aws::Set<UserAgentFeature> m_features;
};
}  // namespace Client
}  // namespace Aws
