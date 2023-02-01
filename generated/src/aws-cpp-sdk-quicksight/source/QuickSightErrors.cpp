/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/QuickSightErrors.h>
#include <aws/quicksight/model/ResourceExistsException.h>
#include <aws/quicksight/model/ConflictException.h>
#include <aws/quicksight/model/ResourceNotFoundException.h>
#include <aws/quicksight/model/LimitExceededException.h>
#include <aws/quicksight/model/QuickSightUserNotFoundException.h>
#include <aws/quicksight/model/IdentityTypeNotSupportedException.h>
#include <aws/quicksight/model/InvalidParameterValueException.h>
#include <aws/quicksight/model/InvalidNextTokenException.h>
#include <aws/quicksight/model/InternalFailureException.h>
#include <aws/quicksight/model/UnsupportedPricingPlanException.h>
#include <aws/quicksight/model/DomainNotWhitelistedException.h>
#include <aws/quicksight/model/ThrottlingException.h>
#include <aws/quicksight/model/UnsupportedUserEditionException.h>
#include <aws/quicksight/model/SessionLifetimeInMinutesInvalidException.h>
#include <aws/quicksight/model/AccessDeniedException.h>
#include <aws/quicksight/model/PreconditionNotMetException.h>
#include <aws/quicksight/model/ResourceUnavailableException.h>
#include <aws/quicksight/model/ConcurrentUpdatingException.h>
#include <aws/quicksight/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QuickSight;
using namespace Aws::QuickSight::Model;

namespace Aws
{
namespace QuickSight
{
template<> AWS_QUICKSIGHT_API ResourceExistsException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::RESOURCE_EXISTS);
  return ResourceExistsException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API ConflictException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API ResourceNotFoundException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API LimitExceededException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API QuickSightUserNotFoundException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::QUICK_SIGHT_USER_NOT_FOUND);
  return QuickSightUserNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API IdentityTypeNotSupportedException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::IDENTITY_TYPE_NOT_SUPPORTED);
  return IdentityTypeNotSupportedException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API InvalidParameterValueException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::INVALID_PARAMETER_VALUE);
  return InvalidParameterValueException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API InvalidNextTokenException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::INVALID_NEXT_TOKEN);
  return InvalidNextTokenException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API InternalFailureException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::INTERNAL_FAILURE);
  return InternalFailureException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API UnsupportedPricingPlanException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::UNSUPPORTED_PRICING_PLAN);
  return UnsupportedPricingPlanException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API DomainNotWhitelistedException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::DOMAIN_NOT_WHITELISTED);
  return DomainNotWhitelistedException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API ThrottlingException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API UnsupportedUserEditionException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::UNSUPPORTED_USER_EDITION);
  return UnsupportedUserEditionException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API SessionLifetimeInMinutesInvalidException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::SESSION_LIFETIME_IN_MINUTES_INVALID);
  return SessionLifetimeInMinutesInvalidException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API AccessDeniedException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API PreconditionNotMetException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::PRECONDITION_NOT_MET);
  return PreconditionNotMetException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API ResourceUnavailableException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::RESOURCE_UNAVAILABLE);
  return ResourceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API ConcurrentUpdatingException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::CONCURRENT_UPDATING);
  return ConcurrentUpdatingException(this->GetJsonPayload().View());
}

template<> AWS_QUICKSIGHT_API InvalidRequestException QuickSightError::GetModeledError()
{
  assert(this->GetErrorType() == QuickSightErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace QuickSightErrorMapper
{

static const int RESOURCE_EXISTS_HASH = HashingUtils::HashString("ResourceExistsException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int QUICK_SIGHT_USER_NOT_FOUND_HASH = HashingUtils::HashString("QuickSightUserNotFoundException");
static const int IDENTITY_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("IdentityTypeNotSupportedException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int UNSUPPORTED_PRICING_PLAN_HASH = HashingUtils::HashString("UnsupportedPricingPlanException");
static const int DOMAIN_NOT_WHITELISTED_HASH = HashingUtils::HashString("DomainNotWhitelistedException");
static const int UNSUPPORTED_USER_EDITION_HASH = HashingUtils::HashString("UnsupportedUserEditionException");
static const int SESSION_LIFETIME_IN_MINUTES_INVALID_HASH = HashingUtils::HashString("SessionLifetimeInMinutesInvalidException");
static const int PRECONDITION_NOT_MET_HASH = HashingUtils::HashString("PreconditionNotMetException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int CONCURRENT_UPDATING_HASH = HashingUtils::HashString("ConcurrentUpdatingException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::CONFLICT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == QUICK_SIGHT_USER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::QUICK_SIGHT_USER_NOT_FOUND), false);
  }
  else if (hashCode == IDENTITY_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::IDENTITY_TYPE_NOT_SUPPORTED), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == UNSUPPORTED_PRICING_PLAN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::UNSUPPORTED_PRICING_PLAN), false);
  }
  else if (hashCode == DOMAIN_NOT_WHITELISTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::DOMAIN_NOT_WHITELISTED), false);
  }
  else if (hashCode == UNSUPPORTED_USER_EDITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::UNSUPPORTED_USER_EDITION), false);
  }
  else if (hashCode == SESSION_LIFETIME_IN_MINUTES_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::SESSION_LIFETIME_IN_MINUTES_INVALID), false);
  }
  else if (hashCode == PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::PRECONDITION_NOT_MET), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == CONCURRENT_UPDATING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::CONCURRENT_UPDATING), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QuickSightErrorMapper
} // namespace QuickSight
} // namespace Aws
