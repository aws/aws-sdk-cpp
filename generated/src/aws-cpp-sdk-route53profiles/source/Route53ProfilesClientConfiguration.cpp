/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/Route53ProfilesClientConfiguration.h>

namespace Aws {
namespace Route53Profiles {

void Route53ProfilesClientConfiguration::LoadRoute53ProfilesSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

Route53ProfilesClientConfiguration::Route53ProfilesClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRoute53ProfilesSpecificConfig(this->profileName);
}

Route53ProfilesClientConfiguration::Route53ProfilesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRoute53ProfilesSpecificConfig(Aws::String(inputProfileName));
}

Route53ProfilesClientConfiguration::Route53ProfilesClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRoute53ProfilesSpecificConfig(this->profileName);
}

Route53ProfilesClientConfiguration::Route53ProfilesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRoute53ProfilesSpecificConfig(this->profileName);
}

}  // namespace Route53Profiles
}  // namespace Aws
