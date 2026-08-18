/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrors.h>
#include <aws/marketplace-catalog/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceCatalog;
using namespace Aws::MarketplaceCatalog::Model;

namespace Aws {
namespace MarketplaceCatalog {
template <>
AWS_MARKETPLACECATALOG_API ValidationException MarketplaceCatalogError::GetModeledError() {
  assert(this->GetErrorType() == MarketplaceCatalogErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace MarketplaceCatalogErrorMapper {

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int RESOURCE_NOT_SUPPORTED_HASH = HashingUtils::HashString("ResourceNotSupportedException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceCatalogErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == RESOURCE_NOT_SUPPORTED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceCatalogErrors::RESOURCE_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVICE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceCatalogErrors::INTERNAL_SERVICE), RetryableType::RETRYABLE);
  } else if (hashCode == RESOURCE_IN_USE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceCatalogErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace MarketplaceCatalogErrorMapper
}  // namespace MarketplaceCatalog
}  // namespace Aws
