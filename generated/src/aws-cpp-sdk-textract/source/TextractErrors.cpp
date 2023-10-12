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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t UNSUPPORTED_DOCUMENT_HASH = ConstExprHashingUtils::HashString("UnsupportedDocumentException");
static constexpr uint32_t BAD_DOCUMENT_HASH = ConstExprHashingUtils::HashString("BadDocumentException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_JOB_ID_HASH = ConstExprHashingUtils::HashString("InvalidJobIdException");
static constexpr uint32_t INVALID_K_M_S_KEY_HASH = ConstExprHashingUtils::HashString("InvalidKMSKeyException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t DOCUMENT_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("DocumentTooLargeException");
static constexpr uint32_t PROVISIONED_THROUGHPUT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ProvisionedThroughputExceededException");
static constexpr uint32_t INVALID_S3_OBJECT_HASH = ConstExprHashingUtils::HashString("InvalidS3ObjectException");
static constexpr uint32_t HUMAN_LOOP_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("HumanLoopQuotaExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::CONFLICT), false);
  }
  else if (hashCode == UNSUPPORTED_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::UNSUPPORTED_DOCUMENT), false);
  }
  else if (hashCode == BAD_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::BAD_DOCUMENT), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_JOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_JOB_ID), false);
  }
  else if (hashCode == INVALID_K_M_S_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_K_M_S_KEY), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == DOCUMENT_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::DOCUMENT_TOO_LARGE), false);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::PROVISIONED_THROUGHPUT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_S3_OBJECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_S3_OBJECT), false);
  }
  else if (hashCode == HUMAN_LOOP_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::HUMAN_LOOP_QUOTA_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TextractErrorMapper
} // namespace Textract
} // namespace Aws
