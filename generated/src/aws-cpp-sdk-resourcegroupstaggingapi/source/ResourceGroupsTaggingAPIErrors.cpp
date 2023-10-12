/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ResourceGroupsTaggingAPI;

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace ResourceGroupsTaggingAPIErrorMapper
{

static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t PAGINATION_TOKEN_EXPIRED_HASH = ConstExprHashingUtils::HashString("PaginationTokenExpiredException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t CONSTRAINT_VIOLATION_HASH = ConstExprHashingUtils::HashString("ConstraintViolationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == PAGINATION_TOKEN_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::PAGINATION_TOKEN_EXPIRED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == CONSTRAINT_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::CONSTRAINT_VIOLATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ResourceGroupsTaggingAPIErrorMapper
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
