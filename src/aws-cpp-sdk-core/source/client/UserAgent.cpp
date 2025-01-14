/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Version.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/OSVersionInfo.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/Config.h>

#include <numeric>
#include <utility>

using namespace Aws::Client;

namespace {
const char* LOG_TAG = "UserAgent";

const std::pair<UserAgentFeature, const char*> BUSINESS_METRIC_MAPPING[] = {
    {UserAgentFeature::RETRY_MODE_LEGACY, "D"},
    {UserAgentFeature::RETRY_MODE_STANDARD, "E"},
    {UserAgentFeature::RETRY_MODE_ADAPTIVE, "F"},
    {UserAgentFeature::S3_TRANSFER, "G"},
    {UserAgentFeature::S3_CRYPTO_V1N, "H"},
    {UserAgentFeature::S3_CRYPTO_V2, "I"}
};

Aws::String BusinessMetricForFeature(UserAgentFeature feature) {
  const auto* const metric =
      std::find_if(std::begin(BUSINESS_METRIC_MAPPING), std::end(BUSINESS_METRIC_MAPPING),
                   [feature](const std::pair<UserAgentFeature, const char*>& pair) -> bool { return pair.first == feature; });
  if (metric == std::end(BUSINESS_METRIC_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "business metric mapping not found for feature");
    return {};
  }
  return metric->second;
}

const std::pair<const char*, UserAgentFeature> RETRY_FEATURE_MAPPING[] = {
    {"default", UserAgentFeature::RETRY_MODE_LEGACY},
    {"standard", UserAgentFeature::RETRY_MODE_STANDARD},
    {"adaptive", UserAgentFeature::RETRY_MODE_ADAPTIVE},
};

const char* EXEC_ENV_VAR = "AWS_EXECUTION_ENV";
const char* METADATA = "md";
const char* METADATA_DELIMINATOR = "/";
const char* METADATA_VALUE_DELIMINATOR = "#";
const char* RWS = " ";
const char* SDK_VERSION = "aws-sdk-cpp";
const char* USER_AGENT_VERSION = "2.1";
const char* UA_VERSION = "ua";
const char* API_NAME = "api";
const char* CRT_VERSION = "aws-crt";
const char* OS_VERSION = "os";
const char* ARCH = "arch";
const char* LANG = "lang";
const char* CPP = "c++";
const char* EXEC_ENV = "exec-env";
const char* APP_ID = "app";
const char* BUSINESS_METRICS = "m";
}  // namespace

UserAgent::UserAgent(const ClientConfiguration& clientConfiguration,
  const Aws::String& retryStrategyName,
  const Aws::String& apiName)
    : m_sdkVersion{FilterUserAgentToken(Version::GetVersionString())},
      m_userAgentVersion{USER_AGENT_VERSION},
      m_api(apiName),
      m_crtVersion{FilterUserAgentToken(AWS_CRT_CPP_VERSION)},
      m_osVersion{FilterUserAgentToken(Aws::OSVersionInfo::ComputeOSVersionString().c_str())},
      m_archName{FilterUserAgentToken(Aws::OSVersionInfo::ComputeOSVersionArch().c_str())},
      m_cppVersion{FilterUserAgentToken(Version::GetCPPStandard())},
      m_compilerMetadata{FilterUserAgentToken(Version::GetCompilerVersionString())},
      m_retryStrategyName{retryStrategyName},
      m_execEnv{FilterUserAgentToken(Aws::Environment::GetEnv(EXEC_ENV_VAR).c_str())},
      m_appId{FilterUserAgentToken(clientConfiguration.appId.c_str())}
#if defined(AWS_USER_AGENT_CUSTOMIZATION)
#define XSTR(V) STR(V)
#define STR(V) #V
      , m_customizations{FilterUserAgentToken(XSTR(AWS_USER_AGENT_CUSTOMIZATION))}
#undef STR
#undef XSTR
#endif
{
}

Aws::String UserAgent::SerializeWithFeatures(const Aws::Set<UserAgentFeature>& features) const {
  // Need to be in order
  Aws::StringStream userAgentValue;

  auto SerializeMetadata = [&](const Aws::String& metadataName, const Aws::String& metadataValue) -> void {
    if (!metadataValue.empty()) {
      userAgentValue << metadataName<< METADATA_DELIMINATOR << metadataValue << RWS;
    }
  };

  auto SerializeMetadataWithVersion = [&](const Aws::String& metadataName, const Aws::String& metadataValue, const Aws::String& metadataVersion) -> void {
    if (!metadataValue.empty() && !metadataVersion.empty()) {
      userAgentValue << metadataName<< METADATA_DELIMINATOR << metadataValue << METADATA_VALUE_DELIMINATOR << metadataVersion << RWS;
    }
  };

  SerializeMetadata(SDK_VERSION, m_sdkVersion);
  if (!m_customizations.empty()) {
    userAgentValue << m_customizations << RWS;
  }
  SerializeMetadata(UA_VERSION, m_userAgentVersion);
  if (!m_api.empty()) {
    SerializeMetadata(API_NAME, m_api);
  }
  SerializeMetadata(OS_VERSION, m_osVersion);
  SerializeMetadataWithVersion(LANG, CPP, m_cppVersion);
  SerializeMetadataWithVersion(METADATA, CRT_VERSION, m_crtVersion);
  if (!m_execEnv.empty()) {
    SerializeMetadata(EXEC_ENV, m_execEnv);
  }

  // Does not need to be in order
  if (!m_archName.empty()) {
    SerializeMetadataWithVersion(METADATA, ARCH, m_archName);
  }
  if (!m_appId.empty()) {
    SerializeMetadata(APP_ID, m_appId);
  }
  if (!m_compilerMetadata.empty()) {
    SerializeMetadata(METADATA, m_compilerMetadata);
  }

  // metrics
  Aws::Vector<Aws::String> encodedMetrics{};

  // add retry encoded value
  if (!m_retryStrategyName.empty()) {
    const auto* const retryFeature = std::find_if(
        std::begin(RETRY_FEATURE_MAPPING), std::end(RETRY_FEATURE_MAPPING),
        [this](const std::pair<const char*, UserAgentFeature>& pair) -> bool { return strcmp(pair.first, FilterUserAgentToken(m_retryStrategyName.c_str()).c_str()) == 0; });
    if (retryFeature != std::end(RETRY_FEATURE_MAPPING)) {
      encodedMetrics.emplace_back(BusinessMetricForFeature(retryFeature->second));
    }
  }

  auto EncodeFeatures = [&encodedMetrics](const Aws::Set<UserAgentFeature>& features) -> void {
    for (const auto& feature : features) {
      auto encodedValue = BusinessMetricForFeature(feature);
      if (!encodedValue.empty()) {
        encodedMetrics.emplace_back(std::move(encodedValue));
      }
    }
  };

  // add all features attached to request.
  EncodeFeatures(features);
  EncodeFeatures(m_features);

  // serialize the business metrics string.
  if (!encodedMetrics.empty()) {
    userAgentValue << BUSINESS_METRICS << METADATA_DELIMINATOR
                   << std::accumulate(encodedMetrics.begin(), encodedMetrics.end(), Aws::String{},
                                      [](const Aws::String& acc, const Aws::String& value) -> Aws::String {
                                        return acc.empty() ? value : acc + "," + value;
                                      });
  }

  return userAgentValue.str();
}

namespace {
const std::pair<const char*, UserAgentFeature> LEGACY_FEATURE_MAPPING[] = {
    {"ft/s3-transfer", UserAgentFeature::S3_TRANSFER},
    {"ft/S3CryptoV1n", UserAgentFeature::S3_CRYPTO_V1N},
    {"ft/S3CryptoV2", UserAgentFeature::S3_CRYPTO_V2},
};
}

void UserAgent::AddLegacyFeature(const Aws::String& legacyFeature) {
  const auto value = Aws::Client::FilterUserAgentToken(legacyFeature.c_str());
  const auto* const feature = std::find_if(
      std::begin(LEGACY_FEATURE_MAPPING), std::end(LEGACY_FEATURE_MAPPING),
      [&value](const std::pair<const char*, UserAgentFeature>& pair) -> bool { return strcmp(pair.first, value.c_str()) == 0; });
  if (feature != std::end(LEGACY_FEATURE_MAPPING)) {
    m_features.insert(feature->second);
  } else {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "Failed to add legacy feature " << legacyFeature);
  }
}
