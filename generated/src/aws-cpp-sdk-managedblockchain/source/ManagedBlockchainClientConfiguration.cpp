/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/ManagedBlockchainClientConfiguration.h>

namespace Aws {
namespace ManagedBlockchain {

void ManagedBlockchainClientConfiguration::LoadManagedBlockchainSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadManagedBlockchainSpecificConfig(this->profileName);
}

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadManagedBlockchainSpecificConfig(Aws::String(inputProfileName));
}

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadManagedBlockchainSpecificConfig(this->profileName);
}

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadManagedBlockchainSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ManagedBlockchainClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ManagedBlockchain
}  // namespace Aws
