/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/ServiceQuotasClientConfiguration.h>

namespace Aws {
namespace ServiceQuotas {

void ServiceQuotasClientConfiguration::LoadServiceQuotasSpecificConfig(const Aws::String& inputProfileName) {
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

ServiceQuotasClientConfiguration::ServiceQuotasClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadServiceQuotasSpecificConfig(this->profileName);
}

ServiceQuotasClientConfiguration::ServiceQuotasClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadServiceQuotasSpecificConfig(Aws::String(inputProfileName));
}

ServiceQuotasClientConfiguration::ServiceQuotasClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadServiceQuotasSpecificConfig(this->profileName);
}

ServiceQuotasClientConfiguration::ServiceQuotasClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadServiceQuotasSpecificConfig(this->profileName);
}

}  // namespace ServiceQuotas
}  // namespace Aws
