/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resource-explorer-2/ResourceExplorer2Errors.h>
#include <aws/resource-explorer-2/model/ServiceQuotaExceededException.h>
#include <aws/resource-explorer-2/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ResourceExplorer2;
using namespace Aws::ResourceExplorer2::Model;

namespace Aws
{
namespace ResourceExplorer2
{
template<> AWS_RESOURCEEXPLORER2_API ServiceQuotaExceededException ResourceExplorer2Error::GetModeledError()
{
  assert(this->GetErrorType() == ResourceExplorer2Errors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_RESOURCEEXPLORER2_API ValidationException ResourceExplorer2Error::GetModeledError()
{
  assert(this->GetErrorType() == ResourceExplorer2Errors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace ResourceExplorer2ErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceExplorer2Errors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceExplorer2Errors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceExplorer2Errors::INTERNAL_SERVER), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceExplorer2Errors::UNAUTHORIZED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ResourceExplorer2ErrorMapper
} // namespace ResourceExplorer2
} // namespace Aws
