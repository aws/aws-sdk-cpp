/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/ResourceExplorer2ClientConfiguration.h>

namespace Aws {
namespace ResourceExplorer2 {

void ResourceExplorer2ClientConfiguration::LoadResourceExplorer2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ResourceExplorer2ClientConfiguration::ResourceExplorer2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadResourceExplorer2SpecificConfig(this->profileName);
}

ResourceExplorer2ClientConfiguration::ResourceExplorer2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadResourceExplorer2SpecificConfig(Aws::String(inputProfileName));
}

ResourceExplorer2ClientConfiguration::ResourceExplorer2ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadResourceExplorer2SpecificConfig(this->profileName);
}

ResourceExplorer2ClientConfiguration::ResourceExplorer2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadResourceExplorer2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ResourceExplorer2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ResourceExplorer2
}  // namespace Aws
