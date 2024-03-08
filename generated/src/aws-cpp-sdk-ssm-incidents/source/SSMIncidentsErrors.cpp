/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm-incidents/SSMIncidentsErrors.h>
#include <aws/ssm-incidents/model/ConflictException.h>
#include <aws/ssm-incidents/model/ThrottlingException.h>
#include <aws/ssm-incidents/model/ServiceQuotaExceededException.h>
#include <aws/ssm-incidents/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SSMIncidents;
using namespace Aws::SSMIncidents::Model;

namespace Aws
{
namespace SSMIncidents
{
template<> AWS_SSMINCIDENTS_API ConflictException SSMIncidentsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMIncidentsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SSMINCIDENTS_API ThrottlingException SSMIncidentsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMIncidentsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SSMINCIDENTS_API ServiceQuotaExceededException SSMIncidentsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMIncidentsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSMINCIDENTS_API ResourceNotFoundException SSMIncidentsError::GetModeledError()
{
  assert(this->GetErrorType() == SSMIncidentsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace SSMIncidentsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMIncidentsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMIncidentsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMIncidentsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSMIncidentsErrorMapper
} // namespace SSMIncidents
} // namespace Aws
