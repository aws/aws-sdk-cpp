/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securitylake/SecurityLakeErrors.h>
#include <aws/securitylake/model/ConflictException.h>
#include <aws/securitylake/model/ThrottlingException.h>
#include <aws/securitylake/model/ResourceNotFoundException.h>
#include <aws/securitylake/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SecurityLake;
using namespace Aws::SecurityLake::Model;

namespace Aws
{
namespace SecurityLake
{
template<> AWS_SECURITYLAKE_API ConflictException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API ThrottlingException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API ResourceNotFoundException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API AccessDeniedException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace SecurityLakeErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecurityLakeErrorMapper
} // namespace SecurityLake
} // namespace Aws
