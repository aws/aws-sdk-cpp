/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3files/S3FilesClientConfiguration.h>

namespace Aws {
namespace S3Files {

void S3FilesClientConfiguration::LoadS3FilesSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

S3FilesClientConfiguration::S3FilesClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadS3FilesSpecificConfig(this->profileName);
}

S3FilesClientConfiguration::S3FilesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadS3FilesSpecificConfig(Aws::String(inputProfileName));
}

S3FilesClientConfiguration::S3FilesClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadS3FilesSpecificConfig(this->profileName);
}

S3FilesClientConfiguration::S3FilesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadS3FilesSpecificConfig(this->profileName);
}

}  // namespace S3Files
}  // namespace Aws
