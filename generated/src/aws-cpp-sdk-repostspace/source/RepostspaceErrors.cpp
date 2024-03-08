/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/repostspace/RepostspaceErrors.h>
#include <aws/repostspace/model/ConflictException.h>
#include <aws/repostspace/model/ServiceQuotaExceededException.h>
#include <aws/repostspace/model/ThrottlingException.h>
#include <aws/repostspace/model/ResourceNotFoundException.h>
#include <aws/repostspace/model/InternalServerException.h>
#include <aws/repostspace/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::repostspace;
using namespace Aws::repostspace::Model;

namespace Aws
{
namespace repostspace
{
template<> AWS_REPOSTSPACE_API ConflictException RepostspaceError::GetModeledError()
{
  assert(this->GetErrorType() == RepostspaceErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_REPOSTSPACE_API ServiceQuotaExceededException RepostspaceError::GetModeledError()
{
  assert(this->GetErrorType() == RepostspaceErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_REPOSTSPACE_API ThrottlingException RepostspaceError::GetModeledError()
{
  assert(this->GetErrorType() == RepostspaceErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_REPOSTSPACE_API ResourceNotFoundException RepostspaceError::GetModeledError()
{
  assert(this->GetErrorType() == RepostspaceErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_REPOSTSPACE_API InternalServerException RepostspaceError::GetModeledError()
{
  assert(this->GetErrorType() == RepostspaceErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_REPOSTSPACE_API ValidationException RepostspaceError::GetModeledError()
{
  assert(this->GetErrorType() == RepostspaceErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace RepostspaceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RepostspaceErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RepostspaceErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RepostspaceErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RepostspaceErrorMapper
} // namespace repostspace
} // namespace Aws
