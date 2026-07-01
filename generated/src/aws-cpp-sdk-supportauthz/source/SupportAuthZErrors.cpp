/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/supportauthz/SupportAuthZErrors.h>
#include <aws/supportauthz/model/ConflictException.h>
#include <aws/supportauthz/model/InternalServerException.h>
#include <aws/supportauthz/model/ResourceNotFoundException.h>
#include <aws/supportauthz/model/ServiceQuotaExceededException.h>
#include <aws/supportauthz/model/ThrottlingException.h>
#include <aws/supportauthz/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SupportAuthZ;
using namespace Aws::SupportAuthZ::Model;

namespace Aws {
namespace SupportAuthZ {
template <>
AWS_SUPPORTAUTHZ_API ConflictException SupportAuthZError::GetModeledError() {
  assert(this->GetErrorType() == SupportAuthZErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_SUPPORTAUTHZ_API ThrottlingException SupportAuthZError::GetModeledError() {
  assert(this->GetErrorType() == SupportAuthZErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_SUPPORTAUTHZ_API ServiceQuotaExceededException SupportAuthZError::GetModeledError() {
  assert(this->GetErrorType() == SupportAuthZErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_SUPPORTAUTHZ_API InternalServerException SupportAuthZError::GetModeledError() {
  assert(this->GetErrorType() == SupportAuthZErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_SUPPORTAUTHZ_API ResourceNotFoundException SupportAuthZError::GetModeledError() {
  assert(this->GetErrorType() == SupportAuthZErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_SUPPORTAUTHZ_API ValidationException SupportAuthZError::GetModeledError() {
  assert(this->GetErrorType() == SupportAuthZErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace SupportAuthZErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportAuthZErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportAuthZErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportAuthZErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SupportAuthZErrorMapper
}  // namespace SupportAuthZ
}  // namespace Aws
