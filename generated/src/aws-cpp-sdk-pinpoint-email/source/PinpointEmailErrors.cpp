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

static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t MESSAGE_REJECTED_HASH = ConstExprHashingUtils::HashString("MessageRejected");
static constexpr uint32_t SENDING_PAUSED_HASH = ConstExprHashingUtils::HashString("SendingPausedException");
static constexpr uint32_t MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = ConstExprHashingUtils::HashString("MailFromDomainNotVerifiedException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExistsException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t ACCOUNT_SUSPENDED_HASH = ConstExprHashingUtils::HashString("AccountSuspendedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::NOT_FOUND), false);
  }
  else if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::MESSAGE_REJECTED), false);
  }
  else if (hashCode == SENDING_PAUSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::SENDING_PAUSED), false);
  }
  else if (hashCode == MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::MAIL_FROM_DOMAIN_NOT_VERIFIED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::BAD_REQUEST), false);
  }
  else if (hashCode == ACCOUNT_SUSPENDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::ACCOUNT_SUSPENDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PinpointEmailErrorMapper
} // namespace PinpointEmail
} // namespace Aws
