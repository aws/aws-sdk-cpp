/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/verifiedpermissions/VerifiedPermissionsErrors.h>
#include <aws/verifiedpermissions/model/ConflictException.h>
#include <aws/verifiedpermissions/model/ThrottlingException.h>
#include <aws/verifiedpermissions/model/ServiceQuotaExceededException.h>
#include <aws/verifiedpermissions/model/ResourceNotFoundException.h>
#include <aws/verifiedpermissions/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::VerifiedPermissions;
using namespace Aws::VerifiedPermissions::Model;

namespace Aws
{
namespace VerifiedPermissions
{
template<> AWS_VERIFIEDPERMISSIONS_API ConflictException VerifiedPermissionsError::GetModeledError()
{
  assert(this->GetErrorType() == VerifiedPermissionsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_VERIFIEDPERMISSIONS_API ThrottlingException VerifiedPermissionsError::GetModeledError()
{
  assert(this->GetErrorType() == VerifiedPermissionsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_VERIFIEDPERMISSIONS_API ServiceQuotaExceededException VerifiedPermissionsError::GetModeledError()
{
  assert(this->GetErrorType() == VerifiedPermissionsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_VERIFIEDPERMISSIONS_API ResourceNotFoundException VerifiedPermissionsError::GetModeledError()
{
  assert(this->GetErrorType() == VerifiedPermissionsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_VERIFIEDPERMISSIONS_API ValidationException VerifiedPermissionsError::GetModeledError()
{
  assert(this->GetErrorType() == VerifiedPermissionsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace VerifiedPermissionsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VerifiedPermissionsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VerifiedPermissionsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VerifiedPermissionsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace VerifiedPermissionsErrorMapper
} // namespace VerifiedPermissions
} // namespace Aws
