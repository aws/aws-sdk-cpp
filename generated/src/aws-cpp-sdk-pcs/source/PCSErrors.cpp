/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/PCSErrors.h>
#include <aws/pcs/model/ConflictException.h>
#include <aws/pcs/model/ServiceQuotaExceededException.h>
#include <aws/pcs/model/ThrottlingException.h>
#include <aws/pcs/model/ResourceNotFoundException.h>
#include <aws/pcs/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PCS;
using namespace Aws::PCS::Model;

namespace Aws
{
namespace PCS
{
template<> AWS_PCS_API ConflictException PCSError::GetModeledError()
{
  assert(this->GetErrorType() == PCSErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PCS_API ServiceQuotaExceededException PCSError::GetModeledError()
{
  assert(this->GetErrorType() == PCSErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_PCS_API ThrottlingException PCSError::GetModeledError()
{
  assert(this->GetErrorType() == PCSErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_PCS_API ResourceNotFoundException PCSError::GetModeledError()
{
  assert(this->GetErrorType() == PCSErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PCS_API ValidationException PCSError::GetModeledError()
{
  assert(this->GetErrorType() == PCSErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PCSErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PCSErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PCSErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PCSErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PCSErrorMapper
} // namespace PCS
} // namespace Aws
