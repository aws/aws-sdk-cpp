/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/AgreementServiceErrors.h>
#include <aws/marketplace-agreement/model/ThrottlingException.h>
#include <aws/marketplace-agreement/model/ResourceNotFoundException.h>
#include <aws/marketplace-agreement/model/InternalServerException.h>
#include <aws/marketplace-agreement/model/ValidationException.h>
#include <aws/marketplace-agreement/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AgreementService;
using namespace Aws::AgreementService::Model;

namespace Aws
{
namespace AgreementService
{
template<> AWS_AGREEMENTSERVICE_API ThrottlingException AgreementServiceError::GetModeledError()
{
  assert(this->GetErrorType() == AgreementServiceErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_AGREEMENTSERVICE_API ResourceNotFoundException AgreementServiceError::GetModeledError()
{
  assert(this->GetErrorType() == AgreementServiceErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_AGREEMENTSERVICE_API InternalServerException AgreementServiceError::GetModeledError()
{
  assert(this->GetErrorType() == AgreementServiceErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_AGREEMENTSERVICE_API ValidationException AgreementServiceError::GetModeledError()
{
  assert(this->GetErrorType() == AgreementServiceErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_AGREEMENTSERVICE_API AccessDeniedException AgreementServiceError::GetModeledError()
{
  assert(this->GetErrorType() == AgreementServiceErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace AgreementServiceErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgreementServiceErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AgreementServiceErrorMapper
} // namespace AgreementService
} // namespace Aws
