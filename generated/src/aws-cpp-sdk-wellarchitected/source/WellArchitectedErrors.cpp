/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/WellArchitectedErrors.h>
#include <aws/wellarchitected/model/ConflictException.h>
#include <aws/wellarchitected/model/ThrottlingException.h>
#include <aws/wellarchitected/model/ServiceQuotaExceededException.h>
#include <aws/wellarchitected/model/ResourceNotFoundException.h>
#include <aws/wellarchitected/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WellArchitected;
using namespace Aws::WellArchitected::Model;

namespace Aws
{
namespace WellArchitected
{
template<> AWS_WELLARCHITECTED_API ConflictException WellArchitectedError::GetModeledError()
{
  assert(this->GetErrorType() == WellArchitectedErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_WELLARCHITECTED_API ThrottlingException WellArchitectedError::GetModeledError()
{
  assert(this->GetErrorType() == WellArchitectedErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_WELLARCHITECTED_API ServiceQuotaExceededException WellArchitectedError::GetModeledError()
{
  assert(this->GetErrorType() == WellArchitectedErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_WELLARCHITECTED_API ResourceNotFoundException WellArchitectedError::GetModeledError()
{
  assert(this->GetErrorType() == WellArchitectedErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_WELLARCHITECTED_API ValidationException WellArchitectedError::GetModeledError()
{
  assert(this->GetErrorType() == WellArchitectedErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace WellArchitectedErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WellArchitectedErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WellArchitectedErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WellArchitectedErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WellArchitectedErrorMapper
} // namespace WellArchitected
} // namespace Aws
