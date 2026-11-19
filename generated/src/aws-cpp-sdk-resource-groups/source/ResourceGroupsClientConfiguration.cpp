/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/ResourceGroupsClientConfiguration.h>

namespace Aws {
namespace ResourceGroups {

void ResourceGroupsClientConfiguration::LoadResourceGroupsSpecificConfig(const Aws::String& inputProfileName) {
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

ResourceGroupsClientConfiguration::ResourceGroupsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadResourceGroupsSpecificConfig(this->profileName);
}

ResourceGroupsClientConfiguration::ResourceGroupsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadResourceGroupsSpecificConfig(Aws::String(inputProfileName));
}

ResourceGroupsClientConfiguration::ResourceGroupsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadResourceGroupsSpecificConfig(this->profileName);
}

ResourceGroupsClientConfiguration::ResourceGroupsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadResourceGroupsSpecificConfig(this->profileName);
}

}  // namespace ResourceGroups
}  // namespace Aws
