/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53globalresolver/Route53GlobalResolverClientConfiguration.h>

namespace Aws {
namespace Route53GlobalResolver {

void Route53GlobalResolverClientConfiguration::LoadRoute53GlobalResolverSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

Route53GlobalResolverClientConfiguration::Route53GlobalResolverClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRoute53GlobalResolverSpecificConfig(this->profileName);
}

Route53GlobalResolverClientConfiguration::Route53GlobalResolverClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRoute53GlobalResolverSpecificConfig(Aws::String(inputProfileName));
}

Route53GlobalResolverClientConfiguration::Route53GlobalResolverClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRoute53GlobalResolverSpecificConfig(this->profileName);
}

Route53GlobalResolverClientConfiguration::Route53GlobalResolverClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRoute53GlobalResolverSpecificConfig(this->profileName);
}

}  // namespace Route53GlobalResolver
}  // namespace Aws
