/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rbin/RecycleBinErrors.h>
#include <aws/rbin/model/ConflictException.h>
#include <aws/rbin/model/ServiceQuotaExceededException.h>
#include <aws/rbin/model/ResourceNotFoundException.h>
#include <aws/rbin/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RecycleBin;
using namespace Aws::RecycleBin::Model;

namespace Aws
{
namespace RecycleBin
{
template<> AWS_RECYCLEBIN_API ConflictException RecycleBinError::GetModeledError()
{
  assert(this->GetErrorType() == RecycleBinErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_RECYCLEBIN_API ServiceQuotaExceededException RecycleBinError::GetModeledError()
{
  assert(this->GetErrorType() == RecycleBinErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_RECYCLEBIN_API ResourceNotFoundException RecycleBinError::GetModeledError()
{
  assert(this->GetErrorType() == RecycleBinErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_RECYCLEBIN_API ValidationException RecycleBinError::GetModeledError()
{
  assert(this->GetErrorType() == RecycleBinErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace RecycleBinErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RecycleBinErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RecycleBinErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RecycleBinErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RecycleBinErrorMapper
} // namespace RecycleBin
} // namespace Aws
