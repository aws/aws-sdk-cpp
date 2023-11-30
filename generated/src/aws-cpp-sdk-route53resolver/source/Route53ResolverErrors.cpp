/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/Route53ResolverErrors.h>
#include <aws/route53resolver/model/ResourceExistsException.h>
#include <aws/route53resolver/model/ResourceNotFoundException.h>
#include <aws/route53resolver/model/LimitExceededException.h>
#include <aws/route53resolver/model/InvalidParameterException.h>
#include <aws/route53resolver/model/ResourceInUseException.h>
#include <aws/route53resolver/model/ResourceUnavailableException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Route53Resolver;
using namespace Aws::Route53Resolver::Model;

namespace Aws
{
namespace Route53Resolver
{
template<> AWS_ROUTE53RESOLVER_API ResourceExistsException Route53ResolverError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ResolverErrors::RESOURCE_EXISTS);
  return ResourceExistsException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RESOLVER_API ResourceNotFoundException Route53ResolverError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ResolverErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RESOLVER_API LimitExceededException Route53ResolverError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ResolverErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RESOLVER_API InvalidParameterException Route53ResolverError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ResolverErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RESOLVER_API ResourceInUseException Route53ResolverError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ResolverErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53RESOLVER_API ResourceUnavailableException Route53ResolverError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ResolverErrors::RESOURCE_UNAVAILABLE);
  return ResourceUnavailableException(this->GetJsonPayload().View());
}

namespace Route53ResolverErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int RESOURCE_EXISTS_HASH = HashingUtils::HashString("ResourceExistsException");
static const int INVALID_POLICY_DOCUMENT_HASH = HashingUtils::HashString("InvalidPolicyDocument");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");
static const int UNKNOWN_RESOURCE_HASH = HashingUtils::HashString("UnknownResourceException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_POLICY_DOCUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_TAG), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNKNOWN_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::UNKNOWN_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INTERNAL_SERVICE_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53ResolverErrorMapper
} // namespace Route53Resolver
} // namespace Aws
