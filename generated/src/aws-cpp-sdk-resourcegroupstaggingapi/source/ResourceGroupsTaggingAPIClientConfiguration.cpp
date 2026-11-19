/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClientConfiguration.h>

namespace Aws {
namespace ResourceGroupsTaggingAPI {

void ResourceGroupsTaggingAPIClientConfiguration::LoadResourceGroupsTaggingAPISpecificConfig(const Aws::String& inputProfileName) {
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

ResourceGroupsTaggingAPIClientConfiguration::ResourceGroupsTaggingAPIClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadResourceGroupsTaggingAPISpecificConfig(this->profileName);
}

ResourceGroupsTaggingAPIClientConfiguration::ResourceGroupsTaggingAPIClientConfiguration(const char* inputProfileName,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadResourceGroupsTaggingAPISpecificConfig(Aws::String(inputProfileName));
}

ResourceGroupsTaggingAPIClientConfiguration::ResourceGroupsTaggingAPIClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadResourceGroupsTaggingAPISpecificConfig(this->profileName);
}

ResourceGroupsTaggingAPIClientConfiguration::ResourceGroupsTaggingAPIClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadResourceGroupsTaggingAPISpecificConfig(this->profileName);
}

}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
