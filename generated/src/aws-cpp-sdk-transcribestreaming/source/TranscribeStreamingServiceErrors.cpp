/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TranscribeStreamingService;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace TranscribeStreamingServiceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeStreamingServiceErrors::CONFLICT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeStreamingServiceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeStreamingServiceErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TranscribeStreamingServiceErrorMapper
} // namespace TranscribeStreamingService
} // namespace Aws
