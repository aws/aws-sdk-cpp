/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterErrors.h>
#include <aws/route53-recovery-cluster/model/ConflictException.h>
#include <aws/route53-recovery-cluster/model/ThrottlingException.h>
#include <aws/route53-recovery-cluster/model/InternalServerException.h>
#include <aws/route53-recovery-cluster/model/ResourceNotFoundException.h>
#include <aws/route53-recovery-cluster/model/ValidationException.h>
#include <aws/route53-recovery-cluster/model/ServiceLimitExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Route53RecoveryCluster;
using namespace Aws::Route53RecoveryCluster::Model;

namespace Aws
{
namespace Route53RecoveryCluster
{
template<> AWS_ROUTE53RECOVERYCLUSTER_API ConflictException Route53RecoveryClusterError::GetModeledError()
{
  assert(this->GetErrorType() == Route53RecoveryClusterErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RECOVERYCLUSTER_API ThrottlingException Route53RecoveryClusterError::GetModeledError()
{
  assert(this->GetErrorType() == Route53RecoveryClusterErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RECOVERYCLUSTER_API InternalServerException Route53RecoveryClusterError::GetModeledError()
{
  assert(this->GetErrorType() == Route53RecoveryClusterErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RECOVERYCLUSTER_API ResourceNotFoundException Route53RecoveryClusterError::GetModeledError()
{
  assert(this->GetErrorType() == Route53RecoveryClusterErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RECOVERYCLUSTER_API ValidationException Route53RecoveryClusterError::GetModeledError()
{
  assert(this->GetErrorType() == Route53RecoveryClusterErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RECOVERYCLUSTER_API ServiceLimitExceededException Route53RecoveryClusterError::GetModeledError()
{
  assert(this->GetErrorType() == Route53RecoveryClusterErrors::SERVICE_LIMIT_EXCEEDED);
  return ServiceLimitExceededException(this->GetJsonPayload().View());
}

namespace Route53RecoveryClusterErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int ENDPOINT_TEMPORARILY_UNAVAILABLE_HASH = HashingUtils::HashString("EndpointTemporarilyUnavailableException");
static const int SERVICE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ServiceLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53RecoveryClusterErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53RecoveryClusterErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENDPOINT_TEMPORARILY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53RecoveryClusterErrors::ENDPOINT_TEMPORARILY_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53RecoveryClusterErrors::SERVICE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53RecoveryClusterErrorMapper
} // namespace Route53RecoveryCluster
} // namespace Aws
