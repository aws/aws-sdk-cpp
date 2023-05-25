/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceEntitlementService;

namespace Aws
{
namespace MarketplaceEntitlementService
{
namespace MarketplaceEntitlementServiceErrorMapper
{

static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceEntitlementServiceErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceEntitlementServiceErrors::INTERNAL_SERVICE_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceEntitlementServiceErrorMapper
} // namespace MarketplaceEntitlementService
} // namespace Aws
