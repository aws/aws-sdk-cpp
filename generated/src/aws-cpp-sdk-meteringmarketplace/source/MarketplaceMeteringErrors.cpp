/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceMetering;

namespace Aws
{
namespace MarketplaceMetering
{
namespace MarketplaceMeteringErrorMapper
{

static constexpr uint32_t INVALID_CUSTOMER_IDENTIFIER_HASH = ConstExprHashingUtils::HashString("InvalidCustomerIdentifierException");
static constexpr uint32_t INVALID_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidTokenException");
static constexpr uint32_t INVALID_USAGE_DIMENSION_HASH = ConstExprHashingUtils::HashString("InvalidUsageDimensionException");
static constexpr uint32_t INVALID_USAGE_ALLOCATIONS_HASH = ConstExprHashingUtils::HashString("InvalidUsageAllocationsException");
static constexpr uint32_t EXPIRED_TOKEN_HASH = ConstExprHashingUtils::HashString("ExpiredTokenException");
static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("InvalidTagException");
static constexpr uint32_t DISABLED_API_HASH = ConstExprHashingUtils::HashString("DisabledApiException");
static constexpr uint32_t INVALID_ENDPOINT_REGION_HASH = ConstExprHashingUtils::HashString("InvalidEndpointRegionException");
static constexpr uint32_t PLATFORM_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("PlatformNotSupportedException");
static constexpr uint32_t INVALID_PRODUCT_CODE_HASH = ConstExprHashingUtils::HashString("InvalidProductCodeException");
static constexpr uint32_t DUPLICATE_REQUEST_HASH = ConstExprHashingUtils::HashString("DuplicateRequestException");
static constexpr uint32_t CUSTOMER_NOT_ENTITLED_HASH = ConstExprHashingUtils::HashString("CustomerNotEntitledException");
static constexpr uint32_t INVALID_REGION_HASH = ConstExprHashingUtils::HashString("InvalidRegionException");
static constexpr uint32_t TIMESTAMP_OUT_OF_BOUNDS_HASH = ConstExprHashingUtils::HashString("TimestampOutOfBoundsException");
static constexpr uint32_t INVALID_PUBLIC_KEY_VERSION_HASH = ConstExprHashingUtils::HashString("InvalidPublicKeyVersionException");
static constexpr uint32_t INTERNAL_SERVICE_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServiceErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_CUSTOMER_IDENTIFIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_CUSTOMER_IDENTIFIER), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == INVALID_USAGE_DIMENSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_USAGE_DIMENSION), false);
  }
  else if (hashCode == INVALID_USAGE_ALLOCATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_USAGE_ALLOCATIONS), false);
  }
  else if (hashCode == EXPIRED_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::EXPIRED_TOKEN), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_TAG), false);
  }
  else if (hashCode == DISABLED_API_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::DISABLED_API), false);
  }
  else if (hashCode == INVALID_ENDPOINT_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_ENDPOINT_REGION), false);
  }
  else if (hashCode == PLATFORM_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::PLATFORM_NOT_SUPPORTED), false);
  }
  else if (hashCode == INVALID_PRODUCT_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_PRODUCT_CODE), false);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::DUPLICATE_REQUEST), false);
  }
  else if (hashCode == CUSTOMER_NOT_ENTITLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::CUSTOMER_NOT_ENTITLED), false);
  }
  else if (hashCode == INVALID_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_REGION), false);
  }
  else if (hashCode == TIMESTAMP_OUT_OF_BOUNDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::TIMESTAMP_OUT_OF_BOUNDS), false);
  }
  else if (hashCode == INVALID_PUBLIC_KEY_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_PUBLIC_KEY_VERSION), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INTERNAL_SERVICE_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceMeteringErrorMapper
} // namespace MarketplaceMetering
} // namespace Aws
