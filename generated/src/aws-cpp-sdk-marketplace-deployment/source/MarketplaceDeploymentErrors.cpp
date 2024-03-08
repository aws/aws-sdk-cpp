/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentErrors.h>
#include <aws/marketplace-deployment/model/ConflictException.h>
#include <aws/marketplace-deployment/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceDeployment;
using namespace Aws::MarketplaceDeployment::Model;

namespace Aws
{
namespace MarketplaceDeployment
{
template<> AWS_MARKETPLACEDEPLOYMENT_API ConflictException MarketplaceDeploymentError::GetModeledError()
{
  assert(this->GetErrorType() == MarketplaceDeploymentErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_MARKETPLACEDEPLOYMENT_API ValidationException MarketplaceDeploymentError::GetModeledError()
{
  assert(this->GetErrorType() == MarketplaceDeploymentErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace MarketplaceDeploymentErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceDeploymentErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceDeploymentErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceDeploymentErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceDeploymentErrorMapper
} // namespace MarketplaceDeployment
} // namespace Aws
