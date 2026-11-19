/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/SQSClientConfiguration.h>

namespace Aws {
namespace SQS {

void SQSClientConfiguration::LoadSQSSpecificConfig(const Aws::String& inputProfileName) {
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

SQSClientConfiguration::SQSClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSQSSpecificConfig(this->profileName);
}

SQSClientConfiguration::SQSClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSQSSpecificConfig(Aws::String(inputProfileName));
}

SQSClientConfiguration::SQSClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSQSSpecificConfig(this->profileName);
}

SQSClientConfiguration::SQSClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadSQSSpecificConfig(this->profileName);
}

}  // namespace SQS
}  // namespace Aws
