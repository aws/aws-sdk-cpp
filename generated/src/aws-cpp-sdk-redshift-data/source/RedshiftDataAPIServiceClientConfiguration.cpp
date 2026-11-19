/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/RedshiftDataAPIServiceClientConfiguration.h>

namespace Aws {
namespace RedshiftDataAPIService {

void RedshiftDataAPIServiceClientConfiguration::LoadRedshiftDataAPIServiceSpecificConfig(const Aws::String& inputProfileName) {
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

RedshiftDataAPIServiceClientConfiguration::RedshiftDataAPIServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRedshiftDataAPIServiceSpecificConfig(this->profileName);
}

RedshiftDataAPIServiceClientConfiguration::RedshiftDataAPIServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRedshiftDataAPIServiceSpecificConfig(Aws::String(inputProfileName));
}

RedshiftDataAPIServiceClientConfiguration::RedshiftDataAPIServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRedshiftDataAPIServiceSpecificConfig(this->profileName);
}

RedshiftDataAPIServiceClientConfiguration::RedshiftDataAPIServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRedshiftDataAPIServiceSpecificConfig(this->profileName);
}

}  // namespace RedshiftDataAPIService
}  // namespace Aws
