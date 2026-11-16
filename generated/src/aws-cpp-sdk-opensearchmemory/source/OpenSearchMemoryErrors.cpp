/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/OpenSearchMemoryErrors.h>
#include <aws/opensearchmemory/model/ConflictException.h>
#include <aws/opensearchmemory/model/ResourceNotFoundException.h>
#include <aws/opensearchmemory/model/ServiceQuotaExceededException.h>
#include <aws/opensearchmemory/model/ThrottlingException.h>
#include <aws/opensearchmemory/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::OpenSearchMemory;
using namespace Aws::OpenSearchMemory::Model;

namespace Aws {
namespace OpenSearchMemory {
template <>
AWS_OPENSEARCHMEMORY_API ConflictException OpenSearchMemoryError::GetModeledError() {
  assert(this->GetErrorType() == OpenSearchMemoryErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_OPENSEARCHMEMORY_API ThrottlingException OpenSearchMemoryError::GetModeledError() {
  assert(this->GetErrorType() == OpenSearchMemoryErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_OPENSEARCHMEMORY_API ServiceQuotaExceededException OpenSearchMemoryError::GetModeledError() {
  assert(this->GetErrorType() == OpenSearchMemoryErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_OPENSEARCHMEMORY_API ResourceNotFoundException OpenSearchMemoryError::GetModeledError() {
  assert(this->GetErrorType() == OpenSearchMemoryErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_OPENSEARCHMEMORY_API ValidationException OpenSearchMemoryError::GetModeledError() {
  assert(this->GetErrorType() == OpenSearchMemoryErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace OpenSearchMemoryErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchMemoryErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchMemoryErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchMemoryErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace OpenSearchMemoryErrorMapper
}  // namespace OpenSearchMemory
}  // namespace Aws
