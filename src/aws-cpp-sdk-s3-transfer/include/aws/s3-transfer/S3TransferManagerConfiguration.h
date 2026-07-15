/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/crt/Optional.h>
#include <aws/crt/io/TlsOptions.h>
#include <cstdint>

namespace Aws {
namespace S3 {
namespace Transfer {

constexpr uint64_t DEFAULT_PART_SIZE_BYTES = 8ULL * 1024 * 1024;
constexpr uint64_t DEFAULT_MULTIPART_UPLOAD_THRESHOLD_BYTES = 16ULL * 1024 * 1024;

struct AWS_S3_TRANSFER_API S3TransferManagerConfiguration final : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  explicit S3TransferManagerConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});
  explicit S3TransferManagerConfiguration(const char* profileName, bool shouldDisableIMDS = false);
  explicit S3TransferManagerConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);
  explicit S3TransferManagerConfiguration(const Aws::Client::ClientConfiguration& config);

  uint64_t partSize = DEFAULT_PART_SIZE_BYTES;
  // Object size at or above which a multipart transfer is used. Must be >= partSize.
  uint64_t multipartUploadThreshold = DEFAULT_MULTIPART_UPLOAD_THRESHOLD_BYTES;
  // 0 means inherit the CRT's own default.
  double throughputTargetGbps = 0.0;
  Aws::Crt::Optional<Aws::Crt::Io::TlsConnectionOptions> tlsConnectionOptions;

 private:
  void LoadS3TransferManagerSpecificConfig(const Aws::String& profileName);
};
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
