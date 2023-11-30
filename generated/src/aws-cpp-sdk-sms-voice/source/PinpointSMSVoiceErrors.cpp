/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sms-voice/PinpointSMSVoiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PinpointSMSVoice;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace PinpointSMSVoiceErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceErrors::ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceErrors::INTERNAL_SERVICE_ERROR), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PinpointSMSVoiceErrorMapper
} // namespace PinpointSMSVoice
} // namespace Aws
