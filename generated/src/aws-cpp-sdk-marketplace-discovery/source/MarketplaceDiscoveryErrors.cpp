/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryErrors.h>
#include <aws/marketplace-discovery/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceDiscovery;
using namespace Aws::MarketplaceDiscovery::Model;

namespace Aws {
namespace MarketplaceDiscovery {
template <>
AWS_MARKETPLACEDISCOVERY_API ValidationException MarketplaceDiscoveryError::GetModeledError() {
  assert(this->GetErrorType() == MarketplaceDiscoveryErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace MarketplaceDiscoveryErrorMapper {

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceDiscoveryErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace MarketplaceDiscoveryErrorMapper
}  // namespace MarketplaceDiscovery
}  // namespace Aws
