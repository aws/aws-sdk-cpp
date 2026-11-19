/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/Route53ResolverClientConfiguration.h>

namespace Aws {
namespace Route53Resolver {

void Route53ResolverClientConfiguration::LoadRoute53ResolverSpecificConfig(const Aws::String& inputProfileName) {
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

Route53ResolverClientConfiguration::Route53ResolverClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRoute53ResolverSpecificConfig(this->profileName);
}

Route53ResolverClientConfiguration::Route53ResolverClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRoute53ResolverSpecificConfig(Aws::String(inputProfileName));
}

Route53ResolverClientConfiguration::Route53ResolverClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRoute53ResolverSpecificConfig(this->profileName);
}

Route53ResolverClientConfiguration::Route53ResolverClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRoute53ResolverSpecificConfig(this->profileName);
}

}  // namespace Route53Resolver
}  // namespace Aws
