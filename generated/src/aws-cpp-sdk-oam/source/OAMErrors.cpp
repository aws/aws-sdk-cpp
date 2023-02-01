/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/oam/OAMErrors.h>
#include <aws/oam/model/ConflictException.h>
#include <aws/oam/model/ServiceQuotaExceededException.h>
#include <aws/oam/model/MissingRequiredParameterException.h>
#include <aws/oam/model/ResourceNotFoundException.h>
#include <aws/oam/model/InvalidParameterException.h>
#include <aws/oam/model/InternalServiceFault.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::OAM;
using namespace Aws::OAM::Model;

namespace Aws
{
namespace OAM
{
template<> AWS_OAM_API ConflictException OAMError::GetModeledError()
{
  assert(this->GetErrorType() == OAMErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_OAM_API ServiceQuotaExceededException OAMError::GetModeledError()
{
  assert(this->GetErrorType() == OAMErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_OAM_API MissingRequiredParameterException OAMError::GetModeledError()
{
  assert(this->GetErrorType() == OAMErrors::MISSING_REQUIRED_PARAMETER);
  return MissingRequiredParameterException(this->GetJsonPayload().View());
}

template<> AWS_OAM_API ResourceNotFoundException OAMError::GetModeledError()
{
  assert(this->GetErrorType() == OAMErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_OAM_API InvalidParameterException OAMError::GetModeledError()
{
  assert(this->GetErrorType() == OAMErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_OAM_API InternalServiceFault OAMError::GetModeledError()
{
  assert(this->GetErrorType() == OAMErrors::INTERNAL_SERVICE_FAULT);
  return InternalServiceFault(this->GetJsonPayload().View());
}

namespace OAMErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MissingRequiredParameterException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int INTERNAL_SERVICE_FAULT_HASH = HashingUtils::HashString("InternalServiceFault");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OAMErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OAMErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OAMErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OAMErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INTERNAL_SERVICE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OAMErrors::INTERNAL_SERVICE_FAULT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OAMErrors::TOO_MANY_TAGS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OAMErrorMapper
} // namespace OAM
} // namespace Aws
