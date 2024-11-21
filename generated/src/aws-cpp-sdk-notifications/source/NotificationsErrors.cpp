/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/notifications/NotificationsErrors.h>
#include <aws/notifications/model/ConflictException.h>
#include <aws/notifications/model/ServiceQuotaExceededException.h>
#include <aws/notifications/model/ThrottlingException.h>
#include <aws/notifications/model/ResourceNotFoundException.h>
#include <aws/notifications/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Notifications;
using namespace Aws::Notifications::Model;

namespace Aws
{
namespace Notifications
{
template<> AWS_NOTIFICATIONS_API ConflictException NotificationsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONS_API ServiceQuotaExceededException NotificationsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONS_API ThrottlingException NotificationsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONS_API ResourceNotFoundException NotificationsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONS_API ValidationException NotificationsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace NotificationsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NotificationsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NotificationsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NotificationsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NotificationsErrorMapper
} // namespace Notifications
} // namespace Aws
