/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientErrors.h>
#include <aws/workspaces-thin-client/model/ConflictException.h>
#include <aws/workspaces-thin-client/model/ServiceQuotaExceededException.h>
#include <aws/workspaces-thin-client/model/ThrottlingException.h>
#include <aws/workspaces-thin-client/model/ResourceNotFoundException.h>
#include <aws/workspaces-thin-client/model/InternalServerException.h>
#include <aws/workspaces-thin-client/model/ValidationException.h>
#include <aws/workspaces-thin-client/model/InternalServiceException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkSpacesThinClient;
using namespace Aws::WorkSpacesThinClient::Model;

namespace Aws
{
namespace WorkSpacesThinClient
{
template<> AWS_WORKSPACESTHINCLIENT_API ConflictException WorkSpacesThinClientError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesThinClientErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESTHINCLIENT_API ServiceQuotaExceededException WorkSpacesThinClientError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesThinClientErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESTHINCLIENT_API ThrottlingException WorkSpacesThinClientError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesThinClientErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESTHINCLIENT_API ResourceNotFoundException WorkSpacesThinClientError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesThinClientErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESTHINCLIENT_API InternalServerException WorkSpacesThinClientError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesThinClientErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESTHINCLIENT_API ValidationException WorkSpacesThinClientError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesThinClientErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESTHINCLIENT_API InternalServiceException WorkSpacesThinClientError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesThinClientErrors::INTERNAL_SERVICE);
  return InternalServiceException(this->GetJsonPayload().View());
}

namespace WorkSpacesThinClientErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesThinClientErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesThinClientErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesThinClientErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesThinClientErrors::INTERNAL_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkSpacesThinClientErrorMapper
} // namespace WorkSpacesThinClient
} // namespace Aws
