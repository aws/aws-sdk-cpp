/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/PaymentsErrors.h>
#include <aws/payments/model/AccessDeniedException.h>
#include <aws/payments/model/InternalServerException.h>
#include <aws/payments/model/ResourceNotFoundException.h>
#include <aws/payments/model/ThrottlingException.h>
#include <aws/payments/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Payments;
using namespace Aws::Payments::Model;

namespace Aws {
namespace Payments {
template <>
AWS_PAYMENTS_API ThrottlingException PaymentsError::GetModeledError() {
  assert(this->GetErrorType() == PaymentsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_PAYMENTS_API InternalServerException PaymentsError::GetModeledError() {
  assert(this->GetErrorType() == PaymentsErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_PAYMENTS_API ResourceNotFoundException PaymentsError::GetModeledError() {
  assert(this->GetErrorType() == PaymentsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_PAYMENTS_API ValidationException PaymentsError::GetModeledError() {
  assert(this->GetErrorType() == PaymentsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_PAYMENTS_API AccessDeniedException PaymentsError::GetModeledError() {
  assert(this->GetErrorType() == PaymentsErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace PaymentsErrorMapper {

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PaymentsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace PaymentsErrorMapper
}  // namespace Payments
}  // namespace Aws
