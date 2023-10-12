/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribe/TranscribeServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TranscribeService;

namespace Aws
{
namespace TranscribeService
{
namespace TranscribeServiceErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeServiceErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeServiceErrors::NOT_FOUND), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeServiceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeServiceErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TranscribeServiceErrorMapper
} // namespace TranscribeService
} // namespace Aws
