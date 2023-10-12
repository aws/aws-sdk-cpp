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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t RESOURCE_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceExistsException");
static constexpr uint32_t INVALID_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("InvalidPolicyDocument");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("InvalidTagException");
static constexpr uint32_t UNKNOWN_RESOURCE_HASH = ConstExprHashingUtils::HashString("UnknownResourceException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t INTERNAL_SERVICE_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServiceErrorException");
static constexpr uint32_t RESOURCE_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("ResourceUnavailableException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::CONFLICT), false);
  }
  else if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == INVALID_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_POLICY_DOCUMENT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_TAG), false);
  }
  else if (hashCode == UNKNOWN_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::UNKNOWN_RESOURCE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ResolverErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53ResolverErrorMapper
} // namespace Route53Resolver
} // namespace Aws
