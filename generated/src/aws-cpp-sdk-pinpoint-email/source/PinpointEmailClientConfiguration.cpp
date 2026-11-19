/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/PinpointEmailClientConfiguration.h>

namespace Aws {
namespace PinpointEmail {

void PinpointEmailClientConfiguration::LoadPinpointEmailSpecificConfig(const Aws::String& inputProfileName) {
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

PinpointEmailClientConfiguration::PinpointEmailClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPinpointEmailSpecificConfig(this->profileName);
}

PinpointEmailClientConfiguration::PinpointEmailClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPinpointEmailSpecificConfig(Aws::String(inputProfileName));
}

PinpointEmailClientConfiguration::PinpointEmailClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPinpointEmailSpecificConfig(this->profileName);
}

PinpointEmailClientConfiguration::PinpointEmailClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPinpointEmailSpecificConfig(this->profileName);
}

}  // namespace PinpointEmail
}  // namespace Aws
