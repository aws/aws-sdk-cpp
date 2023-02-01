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

static const int UNSUPPORTED_DOCUMENT_HASH = HashingUtils::HashString("UnsupportedDocumentException");
static const int BAD_DOCUMENT_HASH = HashingUtils::HashString("BadDocumentException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_JOB_ID_HASH = HashingUtils::HashString("InvalidJobIdException");
static const int DOCUMENT_TOO_LARGE_HASH = HashingUtils::HashString("DocumentTooLargeException");
static const int INVALID_K_M_S_KEY_HASH = HashingUtils::HashString("InvalidKMSKeyException");
static const int PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ProvisionedThroughputExceededException");
static const int INVALID_S3_OBJECT_HASH = HashingUtils::HashString("InvalidS3ObjectException");
static const int HUMAN_LOOP_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("HumanLoopQuotaExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UNSUPPORTED_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::UNSUPPORTED_DOCUMENT), false);
  }
  else if (hashCode == BAD_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::BAD_DOCUMENT), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_PARAMETER), false);
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
  else if (hashCode == DOCUMENT_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::DOCUMENT_TOO_LARGE), false);
  }
  else if (hashCode == INVALID_K_M_S_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TextractErrors::INVALID_K_M_S_KEY), false);
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
