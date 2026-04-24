/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wickr/WickrErrors.h>
#include <aws/wickr/model/ValidationError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Wickr;
using namespace Aws::Wickr::Model;

namespace Aws {
namespace Wickr {
template <>
AWS_WICKR_API ValidationError WickrError::GetModeledError() {
  assert(this->GetErrorType() == WickrErrors::VALIDATION);
  return ValidationError(this->GetJsonPayload().View());
}

namespace WickrErrorMapper {

static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("ResourceNotFoundError");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenError");
static const int RATE_LIMIT_HASH = HashingUtils::HashString("RateLimitError");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedError");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WickrErrors::RESOURCE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == FORBIDDEN_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WickrErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == RATE_LIMIT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WickrErrors::RATE_LIMIT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNAUTHORIZED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WickrErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == BAD_REQUEST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WickrErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace WickrErrorMapper
}  // namespace Wickr
}  // namespace Aws
