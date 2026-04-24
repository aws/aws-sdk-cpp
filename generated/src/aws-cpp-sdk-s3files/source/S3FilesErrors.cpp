/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3files/S3FilesErrors.h>
#include <aws/s3files/model/ConflictException.h>
#include <aws/s3files/model/InternalServerException.h>
#include <aws/s3files/model/ResourceNotFoundException.h>
#include <aws/s3files/model/ServiceQuotaExceededException.h>
#include <aws/s3files/model/ThrottlingException.h>
#include <aws/s3files/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::S3Files;
using namespace Aws::S3Files::Model;

namespace Aws {
namespace S3Files {
template <>
AWS_S3FILES_API ConflictException S3FilesError::GetModeledError() {
  assert(this->GetErrorType() == S3FilesErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_S3FILES_API ThrottlingException S3FilesError::GetModeledError() {
  assert(this->GetErrorType() == S3FilesErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_S3FILES_API ServiceQuotaExceededException S3FilesError::GetModeledError() {
  assert(this->GetErrorType() == S3FilesErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_S3FILES_API InternalServerException S3FilesError::GetModeledError() {
  assert(this->GetErrorType() == S3FilesErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_S3FILES_API ResourceNotFoundException S3FilesError::GetModeledError() {
  assert(this->GetErrorType() == S3FilesErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_S3FILES_API ValidationException S3FilesError::GetModeledError() {
  assert(this->GetErrorType() == S3FilesErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace S3FilesErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3FilesErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3FilesErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3FilesErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace S3FilesErrorMapper
}  // namespace S3Files
}  // namespace Aws
