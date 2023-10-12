/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rekognition/RekognitionErrors.h>
#include <aws/rekognition/model/HumanLoopQuotaExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Rekognition;
using namespace Aws::Rekognition::Model;

namespace Aws
{
namespace Rekognition
{
template<> AWS_REKOGNITION_API HumanLoopQuotaExceededException RekognitionError::GetModeledError()
{
  assert(this->GetErrorType() == RekognitionErrors::HUMAN_LOOP_QUOTA_EXCEEDED);
  return HumanLoopQuotaExceededException(this->GetJsonPayload().View());
}

namespace RekognitionErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t IMAGE_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("ImageTooLargeException");
static constexpr uint32_t RESOURCE_NOT_READY_HASH = ConstExprHashingUtils::HashString("ResourceNotReadyException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_POLICY_REVISION_ID_HASH = ConstExprHashingUtils::HashString("InvalidPolicyRevisionIdException");
static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidPaginationTokenException");
static constexpr uint32_t SESSION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("SessionNotFoundException");
static constexpr uint32_t MALFORMED_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("MalformedPolicyDocumentException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t PROVISIONED_THROUGHPUT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ProvisionedThroughputExceededException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t VIDEO_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("VideoTooLargeException");
static constexpr uint32_t INVALID_S3_OBJECT_HASH = ConstExprHashingUtils::HashString("InvalidS3ObjectException");
static constexpr uint32_t INVALID_IMAGE_FORMAT_HASH = ConstExprHashingUtils::HashString("InvalidImageFormatException");
static constexpr uint32_t HUMAN_LOOP_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("HumanLoopQuotaExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::CONFLICT), false);
  }
  else if (hashCode == IMAGE_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::IMAGE_TOO_LARGE), false);
  }
  else if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::RESOURCE_NOT_READY), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_POLICY_REVISION_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_POLICY_REVISION_ID), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == SESSION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::SESSION_NOT_FOUND), false);
  }
  else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::PROVISIONED_THROUGHPUT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == VIDEO_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::VIDEO_TOO_LARGE), false);
  }
  else if (hashCode == INVALID_S3_OBJECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_S3_OBJECT), false);
  }
  else if (hashCode == INVALID_IMAGE_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_IMAGE_FORMAT), false);
  }
  else if (hashCode == HUMAN_LOOP_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::HUMAN_LOOP_QUOTA_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RekognitionErrorMapper
} // namespace Rekognition
} // namespace Aws
