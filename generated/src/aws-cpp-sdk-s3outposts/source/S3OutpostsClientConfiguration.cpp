/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/S3OutpostsClientConfiguration.h>

namespace Aws {
namespace S3Outposts {

void S3OutpostsClientConfiguration::LoadS3OutpostsSpecificConfig(const Aws::String& inputProfileName) {
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

S3OutpostsClientConfiguration::S3OutpostsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadS3OutpostsSpecificConfig(this->profileName);
}

S3OutpostsClientConfiguration::S3OutpostsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadS3OutpostsSpecificConfig(Aws::String(inputProfileName));
}

S3OutpostsClientConfiguration::S3OutpostsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadS3OutpostsSpecificConfig(this->profileName);
}

S3OutpostsClientConfiguration::S3OutpostsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadS3OutpostsSpecificConfig(this->profileName);
}

}  // namespace S3Outposts
}  // namespace Aws
