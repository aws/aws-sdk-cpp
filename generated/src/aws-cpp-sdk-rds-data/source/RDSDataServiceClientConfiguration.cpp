/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/RDSDataServiceClientConfiguration.h>

namespace Aws {
namespace RDSDataService {

void RDSDataServiceClientConfiguration::LoadRDSDataServiceSpecificConfig(const Aws::String& inputProfileName) {
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

RDSDataServiceClientConfiguration::RDSDataServiceClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRDSDataServiceSpecificConfig(this->profileName);
}

RDSDataServiceClientConfiguration::RDSDataServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRDSDataServiceSpecificConfig(Aws::String(inputProfileName));
}

RDSDataServiceClientConfiguration::RDSDataServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRDSDataServiceSpecificConfig(this->profileName);
}

RDSDataServiceClientConfiguration::RDSDataServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRDSDataServiceSpecificConfig(this->profileName);
}

}  // namespace RDSDataService
}  // namespace Aws
