/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3outposts/S3OutpostsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::S3Outposts;

namespace Aws
{
namespace S3Outposts
{
namespace S3OutpostsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int OUTPOST_OFFLINE_HASH = HashingUtils::HashString("OutpostOfflineException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3OutpostsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3OutpostsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OUTPOST_OFFLINE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3OutpostsErrors::OUTPOST_OFFLINE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3OutpostsErrorMapper
} // namespace S3Outposts
} // namespace Aws
