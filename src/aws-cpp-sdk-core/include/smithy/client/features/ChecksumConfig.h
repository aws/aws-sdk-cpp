/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Client {

/**
 * Checksum settings for services whose operations support checksums.
 * Used by those services' configurations and by ChecksumInterceptor.
 */
struct ChecksumConfig {
  /**
   * Setting on whether to calculate a checksum for a payload only when it is required.
   * i.e. when setting WHEN_REQUIRED the SDK will NOT calculate a checksum for an endpoint
   * where it is supported but is NOT required.
   */
  RequestChecksumCalculation requestChecksumCalculation = RequestChecksumCalculation::WHEN_SUPPORTED;

  /**
   * Setting on whether to client side response validate a content body that had a checksum
   * associated with it. Response validation right now cannot be modeled as required but rely
   * on an associated model configuration.
   */
  ResponseChecksumValidation responseChecksumValidation = ResponseChecksumValidation::WHEN_SUPPORTED;
};

/**
 * Loads the checksum settings from the environment (AWS_REQUEST_CHECKSUM_CALCULATION,
 * AWS_RESPONSE_CHECKSUM_VALIDATION) or the given profile. Called by the configurations of
 * services whose operations support checksums.
 */
AWS_CORE_API ChecksumConfig LoadChecksumConfigFromEnvOrProfile(const Aws::String& profileName);

}  // namespace Client
}  // namespace Aws
