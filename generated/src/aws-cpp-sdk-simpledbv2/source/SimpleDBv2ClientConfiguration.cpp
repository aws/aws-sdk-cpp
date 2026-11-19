/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simpledbv2/SimpleDBv2ClientConfiguration.h>

namespace Aws {
namespace SimpleDBv2 {

void SimpleDBv2ClientConfiguration::LoadSimpleDBv2SpecificConfig(const Aws::String& inputProfileName) {
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

SimpleDBv2ClientConfiguration::SimpleDBv2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSimpleDBv2SpecificConfig(this->profileName);
}

SimpleDBv2ClientConfiguration::SimpleDBv2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSimpleDBv2SpecificConfig(Aws::String(inputProfileName));
}

SimpleDBv2ClientConfiguration::SimpleDBv2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSimpleDBv2SpecificConfig(this->profileName);
}

SimpleDBv2ClientConfiguration::SimpleDBv2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSimpleDBv2SpecificConfig(this->profileName);
}

}  // namespace SimpleDBv2
}  // namespace Aws
