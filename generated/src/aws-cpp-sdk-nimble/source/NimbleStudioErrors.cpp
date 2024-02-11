/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nimble/NimbleStudioErrors.h>
#include <aws/nimble/model/ConflictException.h>
#include <aws/nimble/model/ThrottlingException.h>
#include <aws/nimble/model/ServiceQuotaExceededException.h>
#include <aws/nimble/model/ResourceNotFoundException.h>
#include <aws/nimble/model/ValidationException.h>
#include <aws/nimble/model/AccessDeniedException.h>
#include <aws/nimble/model/InternalServerErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NimbleStudio;
using namespace Aws::NimbleStudio::Model;

namespace Aws
{
namespace NimbleStudio
{
template<> AWS_NIMBLESTUDIO_API ConflictException NimbleStudioError::GetModeledError()
{
  assert(this->GetErrorType() == NimbleStudioErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_NIMBLESTUDIO_API ThrottlingException NimbleStudioError::GetModeledError()
{
  assert(this->GetErrorType() == NimbleStudioErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_NIMBLESTUDIO_API ServiceQuotaExceededException NimbleStudioError::GetModeledError()
{
  assert(this->GetErrorType() == NimbleStudioErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_NIMBLESTUDIO_API ResourceNotFoundException NimbleStudioError::GetModeledError()
{
  assert(this->GetErrorType() == NimbleStudioErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NIMBLESTUDIO_API ValidationException NimbleStudioError::GetModeledError()
{
  assert(this->GetErrorType() == NimbleStudioErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_NIMBLESTUDIO_API AccessDeniedException NimbleStudioError::GetModeledError()
{
  assert(this->GetErrorType() == NimbleStudioErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_NIMBLESTUDIO_API InternalServerErrorException NimbleStudioError::GetModeledError()
{
  assert(this->GetErrorType() == NimbleStudioErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

namespace NimbleStudioErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NimbleStudioErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NimbleStudioErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NimbleStudioErrors::INTERNAL_SERVER_ERROR), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NimbleStudioErrorMapper
} // namespace NimbleStudio
} // namespace Aws
