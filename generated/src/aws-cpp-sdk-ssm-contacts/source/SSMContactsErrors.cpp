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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t DATA_ENCRYPTION_HASH = ConstExprHashingUtils::HashString("DataEncryptionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == DATA_ENCRYPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMContactsErrors::DATA_ENCRYPTION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSMContactsErrorMapper
} // namespace SSMContacts
} // namespace Aws
