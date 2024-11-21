/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/notificationscontacts/NotificationsContactsErrors.h>
#include <aws/notificationscontacts/model/ConflictException.h>
#include <aws/notificationscontacts/model/ThrottlingException.h>
#include <aws/notificationscontacts/model/ServiceQuotaExceededException.h>
#include <aws/notificationscontacts/model/ResourceNotFoundException.h>
#include <aws/notificationscontacts/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NotificationsContacts;
using namespace Aws::NotificationsContacts::Model;

namespace Aws
{
namespace NotificationsContacts
{
template<> AWS_NOTIFICATIONSCONTACTS_API ConflictException NotificationsContactsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsContactsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONSCONTACTS_API ThrottlingException NotificationsContactsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsContactsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONSCONTACTS_API ServiceQuotaExceededException NotificationsContactsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsContactsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONSCONTACTS_API ResourceNotFoundException NotificationsContactsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsContactsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NOTIFICATIONSCONTACTS_API ValidationException NotificationsContactsError::GetModeledError()
{
  assert(this->GetErrorType() == NotificationsContactsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace NotificationsContactsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NotificationsContactsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NotificationsContactsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NotificationsContactsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NotificationsContactsErrorMapper
} // namespace NotificationsContacts
} // namespace Aws
