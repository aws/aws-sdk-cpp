/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/Route53RecoveryClusterClientConfiguration.h>

namespace Aws {
namespace Route53RecoveryCluster {

void Route53RecoveryClusterClientConfiguration::LoadRoute53RecoveryClusterSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

Route53RecoveryClusterClientConfiguration::Route53RecoveryClusterClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRoute53RecoveryClusterSpecificConfig(this->profileName);
}

Route53RecoveryClusterClientConfiguration::Route53RecoveryClusterClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRoute53RecoveryClusterSpecificConfig(Aws::String(inputProfileName));
}

Route53RecoveryClusterClientConfiguration::Route53RecoveryClusterClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRoute53RecoveryClusterSpecificConfig(this->profileName);
}

Route53RecoveryClusterClientConfiguration::Route53RecoveryClusterClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRoute53RecoveryClusterSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const Route53RecoveryClusterClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace Route53RecoveryCluster
}  // namespace Aws
