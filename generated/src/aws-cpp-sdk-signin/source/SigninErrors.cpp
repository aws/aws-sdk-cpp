/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/signin/SigninErrors.h>
#include <aws/signin/model/AccessDeniedException.h>
#include <aws/signin/model/ConflictException.h>
#include <aws/signin/model/InternalServerException.h>
#include <aws/signin/model/ResourceNotFoundException.h>
#include <aws/signin/model/ServiceQuotaExceededException.h>
#include <aws/signin/model/TooManyRequestsError.h>
#include <aws/signin/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Signin;
using namespace Aws::Signin::Model;

namespace Aws {
namespace Signin {
template <>
AWS_SIGNIN_API ConflictException SigninError::GetModeledError() {
  assert(this->GetErrorType() == SigninErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNIN_API ServiceQuotaExceededException SigninError::GetModeledError() {
  assert(this->GetErrorType() == SigninErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNIN_API TooManyRequestsError SigninError::GetModeledError() {
  assert(this->GetErrorType() == SigninErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsError(this->GetJsonPayload().View());
}

template <>
AWS_SIGNIN_API InternalServerException SigninError::GetModeledError() {
  assert(this->GetErrorType() == SigninErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNIN_API ResourceNotFoundException SigninError::GetModeledError() {
  assert(this->GetErrorType() == SigninErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNIN_API ValidationException SigninError::GetModeledError() {
  assert(this->GetErrorType() == SigninErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNIN_API AccessDeniedException SigninError::GetModeledError() {
  assert(this->GetErrorType() == SigninErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace SigninErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsError");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SigninErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SigninErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TOO_MANY_REQUESTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SigninErrors::TOO_MANY_REQUESTS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SigninErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SigninErrorMapper
}  // namespace Signin
}  // namespace Aws
