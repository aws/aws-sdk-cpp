/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mwaa-serverless/MWAAServerlessErrors.h>
#include <aws/mwaa-serverless/model/ConflictException.h>
#include <aws/mwaa-serverless/model/InternalServerException.h>
#include <aws/mwaa-serverless/model/ResourceNotFoundException.h>
#include <aws/mwaa-serverless/model/ServiceQuotaExceededException.h>
#include <aws/mwaa-serverless/model/ThrottlingException.h>
#include <aws/mwaa-serverless/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MWAAServerless;
using namespace Aws::MWAAServerless::Model;

namespace Aws {
namespace MWAAServerless {
template <>
AWS_MWAASERVERLESS_API ConflictException MWAAServerlessError::GetModeledError() {
  assert(this->GetErrorType() == MWAAServerlessErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_MWAASERVERLESS_API ThrottlingException MWAAServerlessError::GetModeledError() {
  assert(this->GetErrorType() == MWAAServerlessErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_MWAASERVERLESS_API ServiceQuotaExceededException MWAAServerlessError::GetModeledError() {
  assert(this->GetErrorType() == MWAAServerlessErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_MWAASERVERLESS_API InternalServerException MWAAServerlessError::GetModeledError() {
  assert(this->GetErrorType() == MWAAServerlessErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_MWAASERVERLESS_API ResourceNotFoundException MWAAServerlessError::GetModeledError() {
  assert(this->GetErrorType() == MWAAServerlessErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_MWAASERVERLESS_API ValidationException MWAAServerlessError::GetModeledError() {
  assert(this->GetErrorType() == MWAAServerlessErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace MWAAServerlessErrorMapper {

static const int OPERATION_TIMEOUT_HASH = HashingUtils::HashString("OperationTimeoutException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_TIMEOUT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MWAAServerlessErrors::OPERATION_TIMEOUT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MWAAServerlessErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MWAAServerlessErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MWAAServerlessErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace MWAAServerlessErrorMapper
}  // namespace MWAAServerless
}  // namespace Aws
