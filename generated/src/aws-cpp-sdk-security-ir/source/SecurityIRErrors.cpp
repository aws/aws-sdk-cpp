/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/security-ir/SecurityIRErrors.h>
#include <aws/security-ir/model/ConflictException.h>
#include <aws/security-ir/model/ServiceQuotaExceededException.h>
#include <aws/security-ir/model/ThrottlingException.h>
#include <aws/security-ir/model/InternalServerException.h>
#include <aws/security-ir/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SecurityIR;
using namespace Aws::SecurityIR::Model;

namespace Aws
{
namespace SecurityIR
{
template<> AWS_SECURITYIR_API ConflictException SecurityIRError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityIRErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYIR_API ServiceQuotaExceededException SecurityIRError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityIRErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYIR_API ThrottlingException SecurityIRError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityIRErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYIR_API InternalServerException SecurityIRError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityIRErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYIR_API ValidationException SecurityIRError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityIRErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace SecurityIRErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_TOKEN_HASH = HashingUtils::HashString("InvalidTokenException");
static const int SECURITY_INCIDENT_RESPONSE_NOT_ACTIVE_HASH = HashingUtils::HashString("SecurityIncidentResponseNotActiveException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityIRErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityIRErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityIRErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityIRErrors::INVALID_TOKEN), RetryableType::RETRYABLE);
  }
  else if (hashCode == SECURITY_INCIDENT_RESPONSE_NOT_ACTIVE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityIRErrors::SECURITY_INCIDENT_RESPONSE_NOT_ACTIVE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecurityIRErrorMapper
} // namespace SecurityIR
} // namespace Aws
