/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pricing/PricingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Pricing;

namespace Aws
{
namespace Pricing
{
namespace PricingErrorMapper
{

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalErrorException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int EXPIRED_NEXT_TOKEN_HASH = HashingUtils::HashString("ExpiredNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PricingErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PricingErrors::NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PricingErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PricingErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == EXPIRED_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PricingErrors::EXPIRED_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PricingErrorMapper
} // namespace Pricing
} // namespace Aws
