/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-transfer/S3TransferManagerConfiguration.h>

namespace Aws {
namespace S3 {
namespace Transfer {

void S3TransferManagerConfiguration::LoadS3TransferManagerSpecificConfig(const Aws::String& inputProfileName) {
  (void)inputProfileName;
}

S3TransferManagerConfiguration::S3TransferManagerConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadS3TransferManagerSpecificConfig(this->profileName);
}

S3TransferManagerConfiguration::S3TransferManagerConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadS3TransferManagerSpecificConfig(Aws::String(inputProfileName));
}

S3TransferManagerConfiguration::S3TransferManagerConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadS3TransferManagerSpecificConfig(this->profileName);
}

S3TransferManagerConfiguration::S3TransferManagerConfiguration(const Aws::Client::ClientConfiguration& config)
    : BaseClientConfigClass(config) {
  LoadS3TransferManagerSpecificConfig(this->profileName);
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
