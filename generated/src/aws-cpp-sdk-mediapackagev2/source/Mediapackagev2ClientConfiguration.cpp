/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/Mediapackagev2ClientConfiguration.h>

namespace Aws {
namespace mediapackagev2 {

void Mediapackagev2ClientConfiguration::Loadmediapackagev2SpecificConfig(const Aws::String& inputProfileName) {
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

Mediapackagev2ClientConfiguration::Mediapackagev2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  Loadmediapackagev2SpecificConfig(this->profileName);
}

Mediapackagev2ClientConfiguration::Mediapackagev2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  Loadmediapackagev2SpecificConfig(Aws::String(inputProfileName));
}

Mediapackagev2ClientConfiguration::Mediapackagev2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  Loadmediapackagev2SpecificConfig(this->profileName);
}

Mediapackagev2ClientConfiguration::Mediapackagev2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  Loadmediapackagev2SpecificConfig(this->profileName);
}

}  // namespace mediapackagev2
}  // namespace Aws
