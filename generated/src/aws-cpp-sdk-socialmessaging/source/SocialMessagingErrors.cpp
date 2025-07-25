/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/socialmessaging/SocialMessagingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SocialMessaging;

namespace Aws
{
namespace SocialMessaging
{
namespace SocialMessagingErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int DEPENDENCY_HASH = HashingUtils::HashString("DependencyException");
static const int ACCESS_DENIED_BY_META_HASH = HashingUtils::HashString("AccessDeniedByMetaException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int THROTTLED_REQUEST_HASH = HashingUtils::HashString("ThrottledRequestException");
static const int INVALID_PARAMETERS_HASH = HashingUtils::HashString("InvalidParametersException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SocialMessagingErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SocialMessagingErrors::DEPENDENCY), RetryableType::RETRYABLE);
  }
  else if (hashCode == ACCESS_DENIED_BY_META_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SocialMessagingErrors::ACCESS_DENIED_BY_META), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SocialMessagingErrors::INTERNAL_SERVICE), RetryableType::RETRYABLE);
  }
  else if (hashCode == THROTTLED_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SocialMessagingErrors::THROTTLED_REQUEST), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SocialMessagingErrors::INVALID_PARAMETERS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SocialMessagingErrorMapper
} // namespace SocialMessaging
} // namespace Aws
