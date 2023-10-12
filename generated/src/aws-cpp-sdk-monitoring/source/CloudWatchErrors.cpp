/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/CloudWatchErrors.h>
#include <aws/monitoring/model/ResourceNotFoundException.h>
#include <aws/monitoring/model/DashboardInvalidInputError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatch;
using namespace Aws::CloudWatch::Model;

namespace Aws
{
namespace CloudWatch
{
template<> AWS_CLOUDWATCH_API ResourceNotFoundException CloudWatchError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_CLOUDWATCH_API DashboardInvalidInputError CloudWatchError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchErrors::DASHBOARD_INVALID_INPUT);
  return DashboardInvalidInputError(this->GetXmlPayload().GetRootElement());
}

namespace CloudWatchErrorMapper
{

static constexpr uint32_t LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
static constexpr uint32_t MISSING_REQUIRED_PARAMETER_HASH = ConstExprHashingUtils::HashString("MissingParameter");
static constexpr uint32_t DASHBOARD_INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidParameterInput");
static constexpr uint32_t DASHBOARD_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ResourceNotFound");
static constexpr uint32_t INVALID_FORMAT_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidFormat");
static constexpr uint32_t INTERNAL_SERVICE_FAULT_HASH = ConstExprHashingUtils::HashString("InternalServiceError");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextToken");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::LIMIT_EXCEEDED_FAULT), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == DASHBOARD_INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::DASHBOARD_INVALID_INPUT), false);
  }
  else if (hashCode == DASHBOARD_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::DASHBOARD_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_FORMAT_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INVALID_FORMAT_FAULT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INTERNAL_SERVICE_FAULT), true);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INVALID_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchErrorMapper
} // namespace CloudWatch
} // namespace Aws
