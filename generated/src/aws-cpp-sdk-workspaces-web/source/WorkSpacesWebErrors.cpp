/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-web/WorkSpacesWebErrors.h>
#include <aws/workspaces-web/model/ConflictException.h>
#include <aws/workspaces-web/model/ThrottlingException.h>
#include <aws/workspaces-web/model/ServiceQuotaExceededException.h>
#include <aws/workspaces-web/model/InternalServerException.h>
#include <aws/workspaces-web/model/ResourceNotFoundException.h>
#include <aws/workspaces-web/model/ValidationException.h>
#include <aws/workspaces-web/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkSpacesWeb;
using namespace Aws::WorkSpacesWeb::Model;

namespace Aws
{
namespace WorkSpacesWeb
{
template<> AWS_WORKSPACESWEB_API ConflictException WorkSpacesWebError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesWebErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESWEB_API ThrottlingException WorkSpacesWebError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesWebErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESWEB_API ServiceQuotaExceededException WorkSpacesWebError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesWebErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESWEB_API InternalServerException WorkSpacesWebError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesWebErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESWEB_API ResourceNotFoundException WorkSpacesWebError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesWebErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESWEB_API ValidationException WorkSpacesWebError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesWebErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACESWEB_API TooManyTagsException WorkSpacesWebError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesWebErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace WorkSpacesWebErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesWebErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesWebErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesWebErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesWebErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkSpacesWebErrorMapper
} // namespace WorkSpacesWeb
} // namespace Aws
