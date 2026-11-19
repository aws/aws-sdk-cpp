/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/StorageGatewayClientConfiguration.h>

namespace Aws {
namespace StorageGateway {

void StorageGatewayClientConfiguration::LoadStorageGatewaySpecificConfig(const Aws::String& inputProfileName) {
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

StorageGatewayClientConfiguration::StorageGatewayClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadStorageGatewaySpecificConfig(this->profileName);
}

StorageGatewayClientConfiguration::StorageGatewayClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadStorageGatewaySpecificConfig(Aws::String(inputProfileName));
}

StorageGatewayClientConfiguration::StorageGatewayClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadStorageGatewaySpecificConfig(this->profileName);
}

StorageGatewayClientConfiguration::StorageGatewayClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadStorageGatewaySpecificConfig(this->profileName);
}

}  // namespace StorageGateway
}  // namespace Aws
