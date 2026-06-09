/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/Resiliencehubv2Errors.h>
#include <aws/resiliencehubv2/model/ResourceNotFoundException.h>
#include <aws/resiliencehubv2/model/ThrottlingException.h>
#include <aws/resiliencehubv2/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::resiliencehubv2;
using namespace Aws::resiliencehubv2::Model;

namespace Aws {
namespace resiliencehubv2 {
template <>
AWS_RESILIENCEHUBV2_API ThrottlingException Resiliencehubv2Error::GetModeledError() {
  assert(this->GetErrorType() == Resiliencehubv2Errors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_RESILIENCEHUBV2_API ResourceNotFoundException Resiliencehubv2Error::GetModeledError() {
  assert(this->GetErrorType() == Resiliencehubv2Errors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_RESILIENCEHUBV2_API ValidationException Resiliencehubv2Error::GetModeledError() {
  assert(this->GetErrorType() == Resiliencehubv2Errors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace Resiliencehubv2ErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Resiliencehubv2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Resiliencehubv2Errors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Resiliencehubv2Errors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace Resiliencehubv2ErrorMapper
}  // namespace resiliencehubv2
}  // namespace Aws
