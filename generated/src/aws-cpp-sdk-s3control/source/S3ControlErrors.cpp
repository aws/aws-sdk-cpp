/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3control/S3ControlErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::S3Control;

namespace Aws
{
namespace S3Control
{
namespace S3ControlErrorMapper
{

static constexpr uint32_t IDEMPOTENCY_HASH = ConstExprHashingUtils::HashString("IdempotencyException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t BUCKET_ALREADY_OWNED_BY_YOU_HASH = ConstExprHashingUtils::HashString("BucketAlreadyOwnedByYou");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("NoSuchPublicAccessBlockConfiguration");
static constexpr uint32_t JOB_STATUS_HASH = ConstExprHashingUtils::HashString("JobStatusException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t BUCKET_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("BucketAlreadyExists");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IDEMPOTENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::IDEMPOTENCY), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::NOT_FOUND), false);
  }
  else if (hashCode == BUCKET_ALREADY_OWNED_BY_YOU_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::BUCKET_ALREADY_OWNED_BY_YOU), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::BAD_REQUEST), false);
  }
  else if (hashCode == NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION), false);
  }
  else if (hashCode == JOB_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::JOB_STATUS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == BUCKET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::BUCKET_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3ControlErrorMapper
} // namespace S3Control
} // namespace Aws
