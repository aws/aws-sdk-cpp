/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resource-groups/ResourceGroupsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ResourceGroups;

namespace Aws
{
namespace ResourceGroups
{
namespace ResourceGroupsErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int METHOD_NOT_ALLOWED_HASH = HashingUtils::HashString("MethodNotAllowedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsErrors::INTERNAL_SERVER_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == METHOD_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsErrors::METHOD_NOT_ALLOWED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ResourceGroupsErrorMapper
} // namespace ResourceGroups
} // namespace Aws
