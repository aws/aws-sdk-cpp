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

static const int LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("LimitExceeded");
static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MissingParameter");
static const int DASHBOARD_INVALID_INPUT_HASH = HashingUtils::HashString("InvalidParameterInput");
static const int DASHBOARD_NOT_FOUND_HASH = HashingUtils::HashString("ResourceNotFound");
static const int INVALID_FORMAT_FAULT_HASH = HashingUtils::HashString("InvalidFormat");
static const int INTERNAL_SERVICE_FAULT_HASH = HashingUtils::HashString("InternalServiceError");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
