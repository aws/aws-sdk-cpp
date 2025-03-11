/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-reporting/MarketplaceReportingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceReporting;

namespace Aws
{
namespace MarketplaceReporting
{
namespace MarketplaceReportingErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceReportingErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceReportingErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceReportingErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceReportingErrorMapper
} // namespace MarketplaceReporting
} // namespace Aws
