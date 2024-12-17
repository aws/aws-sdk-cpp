/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <iterator>
#include <numeric>

using namespace Aws::Client;

const char* LOG_TAG = "UserAgent";

static const std::pair<UserAgentFeature, const char*> BUSINESS_METRIC_MAPPING[] = {
  {UserAgentFeature::RETRY_MODE_LEGACY, "D"},
  {UserAgentFeature::RETRY_MODE_STANDARD, "E"},
  {UserAgentFeature::RETRY_MODE_ADAPTIVE, "F"},
  {UserAgentFeature::S3_TRANSFER, "G"},
  {UserAgentFeature::S3_CRYPTO_V1N, "H"},
  {UserAgentFeature::S3_CRYPTO_V2, "I"},
};

Aws::String BusinessMetricForFeature(UserAgentFeature feature) {
  const auto metric = std::find_if(std::begin(BUSINESS_METRIC_MAPPING), std::end(BUSINESS_METRIC_MAPPING),
                                   [feature](const std::pair<UserAgentFeature, const char*>& pair) { return pair.first == feature; });
  if (metric == std::end(BUSINESS_METRIC_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "business metric mapping not found for feature");
    return {};
  }
  return metric->second;
}

static const std::pair<const char*, UserAgentFeature> RETRY_FEATURE_MAPPING[] = {
    {"default", UserAgentFeature::RETRY_MODE_LEGACY},
    {"standard", UserAgentFeature::RETRY_MODE_STANDARD},
    {"adaptive", UserAgentFeature::RETRY_MODE_ADAPTIVE},
};

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

UserAgent::UserAgent(const ClientConfiguration& clientConfiguration, const Aws::String& retryMode)
    : m_sdkVersion{FilterUserAgentToken(Version::GetVersionString())},
      m_userAgentVersion{USER_AGENT_VERSION},
      m_api{},
      m_crtVersion{FilterUserAgentToken(AWS_CRT_CPP_VERSION)},
      m_osVersion{FilterUserAgentToken(Aws::OSVersionInfo::ComputeOSVersionString().c_str())},
      m_archName{FilterUserAgentToken(Aws::OSVersionInfo::ComputeOSVersionArch().c_str())},
      m_cppVersion{FilterUserAgentToken(Version::GetCPPStandard())},
      m_compilerMetadata{FilterUserAgentToken(Version::GetCompilerVersionString())},
      m_retryMode{FilterUserAgentToken(retryMode.c_str())},
      m_execEnv{FilterUserAgentToken(Aws::Environment::GetEnv(AWS_EXECUTION_ENV).c_str())},
      m_appId{FilterUserAgentToken(clientConfiguration.appId.c_str())},
#if defined(AWS_USER_AGENT_CUSTOMIZATION)
#define XSTR(V) STR(V)
#define STR(V) #V
      m_customizations{FilterUserAgentToken(XSTR(AWS_USER_AGENT_CUSTOMIZATION))}
#undef STR
#undef XSTR
#else
      m_customizations{}
#endif
{
}

Aws::String UserAgent::SerializeWithFeatures(const Aws::Set<UserAgentFeature>& features) const {
  // Need to be in order
  Aws::StringStream userAgentValue;
  userAgentValue << SDK_VERSION << METADATA_DELIMINATOR << m_sdkVersion << RWS;
  if (!m_customizations.empty()) {
    userAgentValue << m_customizations << RWS;
  }
  userAgentValue << UA_VERSION << METADATA_DELIMINATOR << m_userAgentVersion << RWS;
  if (!m_api.empty()) {
    userAgentValue << API_NAME << METADATA_DELIMINATOR << m_api << RWS;
  }
  userAgentValue << OS_VERSION << METADATA_DELIMINATOR << m_osVersion << RWS;
  userAgentValue << LANG << METADATA_DELIMINATOR << CPP << METADATA_VALUE_DELIMINATOR << m_cppVersion << RWS;
  userAgentValue << METADATA << METADATA_DELIMINATOR << CRT_VERSION << METADATA_VALUE_DELIMINATOR << m_crtVersion << RWS;
  if (!m_execEnv.empty()) {
    userAgentValue << EXEC_ENV << METADATA_DELIMINATOR << m_execEnv << RWS;
  }

  // Does not need to be in order
  if (!m_archName.empty()) {
    userAgentValue << METADATA << METADATA_DELIMINATOR << ARCH << METADATA_VALUE_DELIMINATOR << m_archName << RWS;
  }
  if (!m_appId.empty()) {
    userAgentValue << APP_ID << METADATA_DELIMINATOR << m_appId << RWS;
  }
  if (!m_compilerMetadata.empty()) {
    userAgentValue << METADATA << METADATA_DELIMINATOR << m_compilerMetadata << RWS;
  }

  // metrics
  Aws::Vector<Aws::String> encodedMetrics{};

  // add retry encoded value
  if (!m_retryMode.empty()) {
    const auto retryFeature =
        std::find_if(std::begin(RETRY_FEATURE_MAPPING), std::end(RETRY_FEATURE_MAPPING),
                     [this](const std::pair<const char*, UserAgentFeature>& pair) { return strcmp(pair.first, m_retryMode.c_str()) == 0; });
    if (retryFeature != std::end(RETRY_FEATURE_MAPPING)) {
      encodedMetrics.emplace_back(BusinessMetricForFeature(retryFeature->second));
    }
  }

  // add all features attached to request.
  for (const auto& feature : features) {
    auto encodedValue = BusinessMetricForFeature(feature);
    if (!encodedValue.empty()) {
      encodedMetrics.emplace_back(std::move(encodedValue));
    }
  }

  for (const auto& feature : m_features) {
    encodedMetrics.emplace_back(BusinessMetricForFeature(feature));
  }

  // serialize the business metrics string.
  if (!encodedMetrics.empty()) {
    userAgentValue << BUSINESS_METRICS << METADATA_DELIMINATOR
                   << std::accumulate(encodedMetrics.begin(), encodedMetrics.end(), Aws::String{},
                                      [](Aws::String& acc, const Aws::String& value) -> Aws::String {
                                        return acc.empty() ? value : acc + "," + value;
                                      });
  }

  return userAgentValue.str();
}

static const std::pair<const char*, UserAgentFeature> LEGACY_FEATURE_MAPPING[] = {
    {"ft/s3-transfer", UserAgentFeature::S3_TRANSFER},
    {"ft/S3CryptoV1n", UserAgentFeature::S3_CRYPTO_V1N},
    {"ft/S3CryptoV2", UserAgentFeature::S3_CRYPTO_V2},
};

void UserAgent::AddLegacyFeature(const Aws::String& legacyFeature) {
  const auto value = Aws::Client::FilterUserAgentToken(legacyFeature.c_str());
  const auto feature = std::find_if(std::begin(LEGACY_FEATURE_MAPPING), std::end(LEGACY_FEATURE_MAPPING),
                                    [&legacyFeature](const std::pair<const char*, UserAgentFeature>& pair) -> bool {
                                      return strcmp(pair.first, legacyFeature.c_str()) == 0;
                                    });
  if (feature != std::end(LEGACY_FEATURE_MAPPING)) {
    m_features.emplace_back(feature->second);
  } else {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "Failed to add legacy feature " << legacyFeature);
  }
}
