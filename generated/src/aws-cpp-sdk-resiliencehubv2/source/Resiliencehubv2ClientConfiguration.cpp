/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehubv2/Resiliencehubv2ClientConfiguration.h>

namespace Aws {
namespace resiliencehubv2 {

void Resiliencehubv2ClientConfiguration::Loadresiliencehubv2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

Resiliencehubv2ClientConfiguration::Resiliencehubv2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  Loadresiliencehubv2SpecificConfig(this->profileName);
}

Resiliencehubv2ClientConfiguration::Resiliencehubv2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  Loadresiliencehubv2SpecificConfig(Aws::String(inputProfileName));
}

Resiliencehubv2ClientConfiguration::Resiliencehubv2ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  Loadresiliencehubv2SpecificConfig(this->profileName);
}

Resiliencehubv2ClientConfiguration::Resiliencehubv2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  Loadresiliencehubv2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const Resiliencehubv2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace resiliencehubv2
}  // namespace Aws
