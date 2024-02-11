/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-email/PinpointEmailErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PinpointEmail;

namespace Aws
{
namespace PinpointEmail
{
namespace PinpointEmailErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int MESSAGE_REJECTED_HASH = HashingUtils::HashString("MessageRejected");
static const int SENDING_PAUSED_HASH = HashingUtils::HashString("SendingPausedException");
static const int MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = HashingUtils::HashString("MailFromDomainNotVerifiedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int ACCOUNT_SUSPENDED_HASH = HashingUtils::HashString("AccountSuspendedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::MESSAGE_REJECTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SENDING_PAUSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::SENDING_PAUSED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::MAIL_FROM_DOMAIN_NOT_VERIFIED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ACCOUNT_SUSPENDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::ACCOUNT_SUSPENDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PinpointEmailErrorMapper
} // namespace PinpointEmail
} // namespace Aws
