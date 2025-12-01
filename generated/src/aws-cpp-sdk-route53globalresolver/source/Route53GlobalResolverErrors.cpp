/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/Route53GlobalResolverErrors.h>
#include <aws/route53globalresolver/model/ConflictException.h>
#include <aws/route53globalresolver/model/InternalServerException.h>
#include <aws/route53globalresolver/model/ResourceNotFoundException.h>
#include <aws/route53globalresolver/model/ServiceQuotaExceededException.h>
#include <aws/route53globalresolver/model/ThrottlingException.h>
#include <aws/route53globalresolver/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Route53GlobalResolver;
using namespace Aws::Route53GlobalResolver::Model;

namespace Aws {
namespace Route53GlobalResolver {
template <>
AWS_ROUTE53GLOBALRESOLVER_API ConflictException Route53GlobalResolverError::GetModeledError() {
  assert(this->GetErrorType() == Route53GlobalResolverErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_ROUTE53GLOBALRESOLVER_API ServiceQuotaExceededException Route53GlobalResolverError::GetModeledError() {
  assert(this->GetErrorType() == Route53GlobalResolverErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_ROUTE53GLOBALRESOLVER_API ThrottlingException Route53GlobalResolverError::GetModeledError() {
  assert(this->GetErrorType() == Route53GlobalResolverErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_ROUTE53GLOBALRESOLVER_API InternalServerException Route53GlobalResolverError::GetModeledError() {
  assert(this->GetErrorType() == Route53GlobalResolverErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_ROUTE53GLOBALRESOLVER_API ResourceNotFoundException Route53GlobalResolverError::GetModeledError() {
  assert(this->GetErrorType() == Route53GlobalResolverErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_ROUTE53GLOBALRESOLVER_API ValidationException Route53GlobalResolverError::GetModeledError() {
  assert(this->GetErrorType() == Route53GlobalResolverErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace Route53GlobalResolverErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53GlobalResolverErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53GlobalResolverErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53GlobalResolverErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace Route53GlobalResolverErrorMapper
}  // namespace Route53GlobalResolver
}  // namespace Aws
