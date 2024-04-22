/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53profiles/Route53ProfilesErrors.h>
#include <aws/route53profiles/model/ResourceExistsException.h>
#include <aws/route53profiles/model/ResourceNotFoundException.h>
#include <aws/route53profiles/model/InvalidParameterException.h>
#include <aws/route53profiles/model/LimitExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Route53Profiles;
using namespace Aws::Route53Profiles::Model;

namespace Aws
{
namespace Route53Profiles
{
template<> AWS_ROUTE53PROFILES_API ResourceExistsException Route53ProfilesError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ProfilesErrors::RESOURCE_EXISTS);
  return ResourceExistsException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53PROFILES_API ResourceNotFoundException Route53ProfilesError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ProfilesErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53PROFILES_API InvalidParameterException Route53ProfilesError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ProfilesErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_ROUTE53PROFILES_API LimitExceededException Route53ProfilesError::GetModeledError()
{
  assert(this->GetErrorType() == Route53ProfilesErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

namespace Route53ProfilesErrorMapper
{

static const int RESOURCE_EXISTS_HASH = HashingUtils::HashString("ResourceExistsException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ProfilesErrors::RESOURCE_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ProfilesErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ProfilesErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ProfilesErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ProfilesErrors::INTERNAL_SERVICE_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53ProfilesErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53ProfilesErrorMapper
} // namespace Route53Profiles
} // namespace Aws
