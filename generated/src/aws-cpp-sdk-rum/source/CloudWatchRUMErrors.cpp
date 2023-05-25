/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rum/CloudWatchRUMErrors.h>
#include <aws/rum/model/ConflictException.h>
#include <aws/rum/model/ThrottlingException.h>
#include <aws/rum/model/ResourceNotFoundException.h>
#include <aws/rum/model/InternalServerException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatchRUM;
using namespace Aws::CloudWatchRUM::Model;

namespace Aws
{
namespace CloudWatchRUM
{
template<> AWS_CLOUDWATCHRUM_API ConflictException CloudWatchRUMError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchRUMErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHRUM_API ThrottlingException CloudWatchRUMError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchRUMErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHRUM_API ResourceNotFoundException CloudWatchRUMError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchRUMErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHRUM_API InternalServerException CloudWatchRUMError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchRUMErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

namespace CloudWatchRUMErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchRUMErrorMapper
} // namespace CloudWatchRUM
} // namespace Aws
