/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mobile/MobileErrors.h>
#include <aws/mobile/model/ServiceUnavailableException.h>
#include <aws/mobile/model/LimitExceededException.h>
#include <aws/mobile/model/TooManyRequestsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Mobile;
using namespace Aws::Mobile::Model;

namespace Aws
{
namespace Mobile
{
template<> AWS_MOBILE_API ServiceUnavailableException MobileError::GetModeledError()
{
  assert(this->GetErrorType() == MobileErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_MOBILE_API LimitExceededException MobileError::GetModeledError()
{
  assert(this->GetErrorType() == MobileErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_MOBILE_API TooManyRequestsException MobileError::GetModeledError()
{
  assert(this->GetErrorType() == MobileErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

namespace MobileErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int ACCOUNT_ACTION_REQUIRED_HASH = HashingUtils::HashString("AccountActionRequiredException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MobileErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MobileErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MobileErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MobileErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == ACCOUNT_ACTION_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MobileErrors::ACCOUNT_ACTION_REQUIRED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MobileErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MobileErrorMapper
} // namespace Mobile
} // namespace Aws
