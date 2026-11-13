/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/ServerlessApplicationRepositoryClientConfiguration.h>

namespace Aws {
namespace ServerlessApplicationRepository {

void ServerlessApplicationRepositoryClientConfiguration::LoadServerlessApplicationRepositorySpecificConfig(
    const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadServerlessApplicationRepositorySpecificConfig(this->profileName);
}

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(const char* inputProfileName,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadServerlessApplicationRepositorySpecificConfig(Aws::String(inputProfileName));
}

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(bool useSmartDefaults,
                                                                                                       const char* defaultMode,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadServerlessApplicationRepositorySpecificConfig(this->profileName);
}

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadServerlessApplicationRepositorySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ServerlessApplicationRepositoryClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ServerlessApplicationRepository
}  // namespace Aws
