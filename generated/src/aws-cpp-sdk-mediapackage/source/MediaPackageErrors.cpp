/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackage/MediaPackageErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MediaPackage;

namespace Aws
{
namespace MediaPackage
{
namespace MediaPackageErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int UNPROCESSABLE_ENTITY_HASH = HashingUtils::HashString("UnprocessableEntityException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == UNPROCESSABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageErrors::UNPROCESSABLE_ENTITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageErrors::INTERNAL_SERVER_ERROR), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaPackageErrorMapper
} // namespace MediaPackage
} // namespace Aws
