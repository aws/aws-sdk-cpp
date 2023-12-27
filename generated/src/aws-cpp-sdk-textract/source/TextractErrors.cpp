/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/textract/TextractErrors.h>
#include <aws/textract/model/HumanLoopQuotaExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Textract;
using namespace Aws::Textract::Model;

namespace Aws
{
namespace Textract
{
template<> AWS_TEXTRACT_API HumanLoopQuotaExceededException TextractError::GetModeledError()
{
  assert(this->GetErrorType() == TextractErrors::HUMAN_LOOP_QUOTA_EXCEEDED);
  return HumanLoopQuotaExceededException(this->GetJsonPayload().View());
}

namespace TextractErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int UNSUPPORTED_DOCUMENT_HASH = HashingUtils::HashString("UnsupportedDocumentException");
static const int BAD_DOCUMENT_HASH = HashingUtils::HashString("BadDocumentException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_JOB_ID_HASH = HashingUtils::HashString("InvalidJobIdException");
static const int INVALID_K_M_S_KEY_HASH = HashingUtils::HashString("InvalidKMSKeyException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int DOCUMENT_TOO_LARGE_HASH = HashingUtils::HashString("DocumentTooLargeException");
static const int PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ProvisionedThroughputExceededException");
static const int INVALID_S3_OBJECT_HASH = HashingUtils::HashString("InvalidS3ObjectException");
static const int HUMAN_LOOP_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("HumanLoopQuotaExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::UNSUPPORTED_DOCUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::BAD_DOCUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::IDEMPOTENT_PARAMETER_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_JOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_JOB_ID), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_K_M_S_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_K_M_S_KEY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DOCUMENT_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::DOCUMENT_TOO_LARGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::PROVISIONED_THROUGHPUT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_S3_OBJECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_S3_OBJECT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HUMAN_LOOP_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::HUMAN_LOOP_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TextractErrorMapper
} // namespace Textract
} // namespace Aws
