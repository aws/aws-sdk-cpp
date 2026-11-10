/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/ManagedBlockchainQueryClientConfiguration.h>

namespace Aws {
namespace ManagedBlockchainQuery {

void ManagedBlockchainQueryClientConfiguration::LoadManagedBlockchainQuerySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ManagedBlockchainQueryClientConfiguration::ManagedBlockchainQueryClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadManagedBlockchainQuerySpecificConfig(this->profileName);
}

ManagedBlockchainQueryClientConfiguration::ManagedBlockchainQueryClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadManagedBlockchainQuerySpecificConfig(Aws::String(inputProfileName));
}

ManagedBlockchainQueryClientConfiguration::ManagedBlockchainQueryClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadManagedBlockchainQuerySpecificConfig(this->profileName);
}

ManagedBlockchainQueryClientConfiguration::ManagedBlockchainQueryClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadManagedBlockchainQuerySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ManagedBlockchainQueryClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ManagedBlockchainQuery
}  // namespace Aws
