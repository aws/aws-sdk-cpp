/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/ObservabilityAdminErrors.h>
#include <aws/observabilityadmin/model/ServiceQuotaExceededException.h>
#include <aws/observabilityadmin/model/InternalServerException.h>
#include <aws/observabilityadmin/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ObservabilityAdmin;
using namespace Aws::ObservabilityAdmin::Model;

namespace Aws
{
namespace ObservabilityAdmin
{
template<> AWS_OBSERVABILITYADMIN_API ServiceQuotaExceededException ObservabilityAdminError::GetModeledError()
{
  assert(this->GetErrorType() == ObservabilityAdminErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_OBSERVABILITYADMIN_API InternalServerException ObservabilityAdminError::GetModeledError()
{
  assert(this->GetErrorType() == ObservabilityAdminErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_OBSERVABILITYADMIN_API AccessDeniedException ObservabilityAdminError::GetModeledError()
{
  assert(this->GetErrorType() == ObservabilityAdminErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace ObservabilityAdminErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ObservabilityAdminErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ObservabilityAdminErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ObservabilityAdminErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ObservabilityAdminErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ObservabilityAdminErrorMapper
} // namespace ObservabilityAdmin
} // namespace Aws
