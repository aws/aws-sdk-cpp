/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/S3VectorsClientConfiguration.h>

namespace Aws {
namespace S3Vectors {

void S3VectorsClientConfiguration::LoadS3VectorsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

S3VectorsClientConfiguration::S3VectorsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadS3VectorsSpecificConfig(this->profileName);
}

S3VectorsClientConfiguration::S3VectorsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadS3VectorsSpecificConfig(Aws::String(inputProfileName));
}

S3VectorsClientConfiguration::S3VectorsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadS3VectorsSpecificConfig(this->profileName);
}

S3VectorsClientConfiguration::S3VectorsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadS3VectorsSpecificConfig(this->profileName);
}

}  // namespace S3Vectors
}  // namespace Aws
