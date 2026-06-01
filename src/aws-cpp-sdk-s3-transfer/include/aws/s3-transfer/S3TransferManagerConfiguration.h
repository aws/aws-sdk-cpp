/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>

namespace Aws {
namespace S3 {
namespace Transfer {
struct AWS_S3_TRANSFER_API S3TransferManagerConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  S3TransferManagerConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  S3TransferManagerConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  S3TransferManagerConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  S3TransferManagerConfiguration(const Aws::Client::ClientConfiguration& config);

 private:
  void LoadS3TransferManagerSpecificConfig(const Aws::String& profileName);
};
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
