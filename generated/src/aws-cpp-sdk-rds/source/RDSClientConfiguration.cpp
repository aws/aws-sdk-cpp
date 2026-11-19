/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/RDSClientConfiguration.h>

namespace Aws {
namespace RDS {

void RDSClientConfiguration::LoadRDSSpecificConfig(const Aws::String& inputProfileName) {
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

RDSClientConfiguration::RDSClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRDSSpecificConfig(this->profileName);
}

RDSClientConfiguration::RDSClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRDSSpecificConfig(Aws::String(inputProfileName));
}

RDSClientConfiguration::RDSClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRDSSpecificConfig(this->profileName);
}

RDSClientConfiguration::RDSClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadRDSSpecificConfig(this->profileName);
}

}  // namespace RDS
}  // namespace Aws
