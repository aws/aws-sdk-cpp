/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3vectors/S3VectorsErrors.h>
#include <aws/s3vectors/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::S3Vectors;
using namespace Aws::S3Vectors::Model;

namespace Aws
{
namespace S3Vectors
{
template<> AWS_S3VECTORS_API ValidationException S3VectorsError::GetModeledError()
{
  assert(this->GetErrorType() == S3VectorsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace S3VectorsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int KMS_INVALID_STATE_HASH = HashingUtils::HashString("KmsInvalidStateException");
static const int KMS_INVALID_KEY_USAGE_HASH = HashingUtils::HashString("KmsInvalidKeyUsageException");
static const int KMS_NOT_FOUND_HASH = HashingUtils::HashString("KmsNotFoundException");
static const int KMS_DISABLED_HASH = HashingUtils::HashString("KmsDisabledException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE_THROTTLING);
  }
  else if (hashCode == KMS_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::KMS_INVALID_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_INVALID_KEY_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::KMS_INVALID_KEY_USAGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::KMS_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3VectorsErrors::KMS_DISABLED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3VectorsErrorMapper
} // namespace S3Vectors
} // namespace Aws
