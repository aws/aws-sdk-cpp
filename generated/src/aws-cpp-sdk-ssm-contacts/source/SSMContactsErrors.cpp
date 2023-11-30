/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm-contacts/SSMContactsErrors.h>
#include <aws/ssm-contacts/model/ConflictException.h>
#include <aws/ssm-contacts/model/ThrottlingException.h>
#include <aws/ssm-contacts/model/ServiceQuotaExceededException.h>
#include <aws/ssm-contacts/model/InternalServerException.h>
#include <aws/ssm-contacts/model/ResourceNotFoundException.h>
#include <aws/ssm-contacts/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SSMContacts;
using namespace Aws::SSMContacts::Model;

namespace Aws
{
namespace SSMContacts
{
template<> AWS_SSMCONTACTS_API ConflictException SSMContactsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMContactsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SSMCONTACTS_API ThrottlingException SSMContactsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMContactsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SSMCONTACTS_API ServiceQuotaExceededException SSMContactsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMContactsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSMCONTACTS_API InternalServerException SSMContactsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMContactsErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_SSMCONTACTS_API ResourceNotFoundException SSMContactsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMContactsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SSMCONTACTS_API ValidationException SSMContactsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMContactsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace SSMContactsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DATA_ENCRYPTION_HASH = HashingUtils::HashString("DataEncryptionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DATA_ENCRYPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::DATA_ENCRYPTION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSMContactsErrorMapper
} // namespace SSMContacts
} // namespace Aws
