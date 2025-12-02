/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/NovaActErrors.h>
#include <aws/nova-act/model/ConflictException.h>
#include <aws/nova-act/model/InternalServerException.h>
#include <aws/nova-act/model/ResourceNotFoundException.h>
#include <aws/nova-act/model/ServiceQuotaExceededException.h>
#include <aws/nova-act/model/ThrottlingException.h>
#include <aws/nova-act/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NovaAct;
using namespace Aws::NovaAct::Model;

namespace Aws {
namespace NovaAct {
template <>
AWS_NOVAACT_API ConflictException NovaActError::GetModeledError() {
  assert(this->GetErrorType() == NovaActErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_NOVAACT_API ServiceQuotaExceededException NovaActError::GetModeledError() {
  assert(this->GetErrorType() == NovaActErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_NOVAACT_API ThrottlingException NovaActError::GetModeledError() {
  assert(this->GetErrorType() == NovaActErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_NOVAACT_API ResourceNotFoundException NovaActError::GetModeledError() {
  assert(this->GetErrorType() == NovaActErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_NOVAACT_API InternalServerException NovaActError::GetModeledError() {
  assert(this->GetErrorType() == NovaActErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_NOVAACT_API ValidationException NovaActError::GetModeledError() {
  assert(this->GetErrorType() == NovaActErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace NovaActErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NovaActErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NovaActErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NovaActErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace NovaActErrorMapper
}  // namespace NovaAct
}  // namespace Aws
