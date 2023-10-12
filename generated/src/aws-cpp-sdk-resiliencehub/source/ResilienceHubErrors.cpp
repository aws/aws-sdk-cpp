/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehub/ResilienceHubErrors.h>
#include <aws/resiliencehub/model/ConflictException.h>
#include <aws/resiliencehub/model/ThrottlingException.h>
#include <aws/resiliencehub/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ResilienceHub;
using namespace Aws::ResilienceHub::Model;

namespace Aws
{
namespace ResilienceHub
{
template<> AWS_RESILIENCEHUB_API ConflictException ResilienceHubError::GetModeledError()
{
  assert(this->GetErrorType() == ResilienceHubErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_RESILIENCEHUB_API ThrottlingException ResilienceHubError::GetModeledError()
{
  assert(this->GetErrorType() == ResilienceHubErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_RESILIENCEHUB_API ResourceNotFoundException ResilienceHubError::GetModeledError()
{
  assert(this->GetErrorType() == ResilienceHubErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace ResilienceHubErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResilienceHubErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResilienceHubErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResilienceHubErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ResilienceHubErrorMapper
} // namespace ResilienceHub
} // namespace Aws
