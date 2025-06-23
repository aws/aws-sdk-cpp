/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-instances/WorkspacesInstancesErrors.h>
#include <aws/workspaces-instances/model/ConflictException.h>
#include <aws/workspaces-instances/model/ThrottlingException.h>
#include <aws/workspaces-instances/model/ServiceQuotaExceededException.h>
#include <aws/workspaces-instances/model/ResourceNotFoundException.h>
#include <aws/workspaces-instances/model/InternalServerException.h>
#include <aws/workspaces-instances/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkspacesInstances;
using namespace Aws::WorkspacesInstances::Model;

namespace Aws
{
namespace WorkspacesInstances
{
template<> AWS_WORKSPACESINSTANCES_API ConflictException WorkspacesInstancesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkspacesInstancesErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESINSTANCES_API ThrottlingException WorkspacesInstancesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkspacesInstancesErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESINSTANCES_API ServiceQuotaExceededException WorkspacesInstancesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkspacesInstancesErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESINSTANCES_API ResourceNotFoundException WorkspacesInstancesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkspacesInstancesErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESINSTANCES_API InternalServerException WorkspacesInstancesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkspacesInstancesErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESINSTANCES_API ValidationException WorkspacesInstancesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkspacesInstancesErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace WorkspacesInstancesErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkspacesInstancesErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkspacesInstancesErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkspacesInstancesErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkspacesInstancesErrorMapper
} // namespace WorkspacesInstances
} // namespace Aws
