/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/SESV2ClientConfiguration.h>
#include <smithy/identity/signer/built-in/SigV4aSigningRegionSet.h>

namespace Aws {
namespace SESV2 {

void SESV2ClientConfiguration::LoadSESV2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  sigV4aSigningRegionSet = Aws::Client::LoadSigV4aSigningRegionSetFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SESV2ClientConfiguration::SESV2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSESV2SpecificConfig(this->profileName);
}

SESV2ClientConfiguration::SESV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSESV2SpecificConfig(Aws::String(inputProfileName));
}

SESV2ClientConfiguration::SESV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSESV2SpecificConfig(this->profileName);
}

SESV2ClientConfiguration::SESV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSESV2SpecificConfig(this->profileName);
}

}  // namespace SESV2
}  // namespace Aws
