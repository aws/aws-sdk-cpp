/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/ObservabilityAdminErrors.h>
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

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ObservabilityAdminErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ObservabilityAdminErrorMapper
} // namespace ObservabilityAdmin
} // namespace Aws
