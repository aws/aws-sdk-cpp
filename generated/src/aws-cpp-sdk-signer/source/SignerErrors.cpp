/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/signer/SignerErrors.h>
#include <aws/signer/model/ConflictException.h>
#include <aws/signer/model/ThrottlingException.h>
#include <aws/signer/model/NotFoundException.h>
#include <aws/signer/model/ResourceNotFoundException.h>
#include <aws/signer/model/ValidationException.h>
#include <aws/signer/model/AccessDeniedException.h>
#include <aws/signer/model/TooManyRequestsException.h>
#include <aws/signer/model/ServiceLimitExceededException.h>
#include <aws/signer/model/InternalServiceErrorException.h>
#include <aws/signer/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::signer;
using namespace Aws::signer::Model;

namespace Aws
{
namespace signer
{
template<> AWS_SIGNER_API ConflictException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API ThrottlingException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API NotFoundException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API ResourceNotFoundException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API ValidationException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API AccessDeniedException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API TooManyRequestsException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API ServiceLimitExceededException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::SERVICE_LIMIT_EXCEEDED);
  return ServiceLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API InternalServiceErrorException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::INTERNAL_SERVICE_ERROR);
  return InternalServiceErrorException(this->GetJsonPayload().View());
}

template<> AWS_SIGNER_API BadRequestException SignerError::GetModeledError()
{
  assert(this->GetErrorType() == SignerErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace SignerErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t SERVICE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceLimitExceededException");
static constexpr uint32_t INTERNAL_SERVICE_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServiceErrorException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerErrors::NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerErrors::SERVICE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerErrors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SignerErrorMapper
} // namespace signer
} // namespace Aws
