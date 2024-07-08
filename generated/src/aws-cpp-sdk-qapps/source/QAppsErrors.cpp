/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qapps/QAppsErrors.h>
#include <aws/qapps/model/ConflictException.h>
#include <aws/qapps/model/ServiceQuotaExceededException.h>
#include <aws/qapps/model/ThrottlingException.h>
#include <aws/qapps/model/ResourceNotFoundException.h>
#include <aws/qapps/model/InternalServerException.h>
#include <aws/qapps/model/ContentTooLargeException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QApps;
using namespace Aws::QApps::Model;

namespace Aws
{
namespace QApps
{
template<> AWS_QAPPS_API ConflictException QAppsError::GetModeledError()
{
  assert(this->GetErrorType() == QAppsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_QAPPS_API ServiceQuotaExceededException QAppsError::GetModeledError()
{
  assert(this->GetErrorType() == QAppsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_QAPPS_API ThrottlingException QAppsError::GetModeledError()
{
  assert(this->GetErrorType() == QAppsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_QAPPS_API ResourceNotFoundException QAppsError::GetModeledError()
{
  assert(this->GetErrorType() == QAppsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_QAPPS_API InternalServerException QAppsError::GetModeledError()
{
  assert(this->GetErrorType() == QAppsErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_QAPPS_API ContentTooLargeException QAppsError::GetModeledError()
{
  assert(this->GetErrorType() == QAppsErrors::CONTENT_TOO_LARGE);
  return ContentTooLargeException(this->GetJsonPayload().View());
}

namespace QAppsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int CONTENT_TOO_LARGE_HASH = HashingUtils::HashString("ContentTooLargeException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QAppsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QAppsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QAppsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QAppsErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONTENT_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QAppsErrors::CONTENT_TOO_LARGE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QAppsErrorMapper
} // namespace QApps
} // namespace Aws
