/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/ServiceCatalogClientConfiguration.h>

namespace Aws {
namespace ServiceCatalog {

void ServiceCatalogClientConfiguration::LoadServiceCatalogSpecificConfig(const Aws::String& inputProfileName) {
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

ServiceCatalogClientConfiguration::ServiceCatalogClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadServiceCatalogSpecificConfig(this->profileName);
}

ServiceCatalogClientConfiguration::ServiceCatalogClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadServiceCatalogSpecificConfig(Aws::String(inputProfileName));
}

ServiceCatalogClientConfiguration::ServiceCatalogClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadServiceCatalogSpecificConfig(this->profileName);
}

ServiceCatalogClientConfiguration::ServiceCatalogClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadServiceCatalogSpecificConfig(this->profileName);
}

}  // namespace ServiceCatalog
}  // namespace Aws
