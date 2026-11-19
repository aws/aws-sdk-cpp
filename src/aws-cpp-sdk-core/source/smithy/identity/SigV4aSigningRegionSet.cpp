/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <smithy/identity/signer/built-in/SigV4aSigningRegionSet.h>

#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/StringUtils.h>

namespace Aws {
namespace Client {

Aws::Vector<Aws::String> LoadSigV4aSigningRegionSetFromEnvOrProfile(const Aws::String& profileName) {
  static const char AWS_SIGV4A_SIGNING_REGION_SET_ENV_VAR[] = "AWS_SIGV4A_SIGNING_REGION_SET";
  static const char AWS_SIGV4A_SIGNING_REGION_SET_CONFIG_VAR[] = "sigv4a_signing_region_set";

  Aws::Vector<Aws::String> res;
  Aws::String regionSetStr = Aws::Environment::GetEnv(AWS_SIGV4A_SIGNING_REGION_SET_ENV_VAR);
  if (regionSetStr.empty()) {
    regionSetStr = Aws::Config::GetCachedConfigValue(profileName, AWS_SIGV4A_SIGNING_REGION_SET_CONFIG_VAR);
  }
  if (regionSetStr.empty()) {
    return res;
  }
  Aws::Vector<Aws::String> regionsList = Aws::Utils::StringUtils::Split(regionSetStr, ',');
  res.reserve(regionsList.size());
  for (const auto& region : regionsList) {
    Aws::String trimmed = Aws::Utils::StringUtils::Trim(region.c_str());
    if (!trimmed.empty()) {
      res.emplace_back(trimmed);
    }
  }
  return res;
}

}  // namespace Client
}  // namespace Aws
