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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t OUTPOST_OFFLINE_HASH = ConstExprHashingUtils::HashString("OutpostOfflineException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3OutpostsErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3OutpostsErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == OUTPOST_OFFLINE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3OutpostsErrors::OUTPOST_OFFLINE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3OutpostsErrorMapper
} // namespace S3Outposts
} // namespace Aws
