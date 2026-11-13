/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/marketplace-agreement/AgreementServiceErrors.h>
#include <aws/marketplace-agreement/model/AccessDeniedException.h>
#include <aws/marketplace-agreement/model/ConflictException.h>
#include <aws/marketplace-agreement/model/InternalServerException.h>
#include <aws/marketplace-agreement/model/ResourceNotFoundException.h>
#include <aws/marketplace-agreement/model/ServiceQuotaExceededException.h>
#include <aws/marketplace-agreement/model/ThrottlingException.h>
#include <aws/marketplace-agreement/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AgreementService;
using namespace Aws::AgreementService::Model;

namespace Aws {
namespace AgreementService {
template <>
AWS_AGREEMENTSERVICE_API ConflictException AgreementServiceError::GetModeledError() {
  assert(this->GetErrorType() == AgreementServiceErrors::CONFLICT);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ConflictException(payload.GetDecoder());
}

template <>
AWS_AGREEMENTSERVICE_API ThrottlingException AgreementServiceError::GetModeledError() {
  assert(this->GetErrorType() == AgreementServiceErrors::THROTTLING);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ThrottlingException(payload.GetDecoder());
}

template <>
AWS_AGREEMENTSERVICE_API ServiceQuotaExceededException AgreementServiceError::GetModeledError() {
  assert(this->GetErrorType() == AgreementServiceErrors::SERVICE_QUOTA_EXCEEDED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ServiceQuotaExceededException(payload.GetDecoder());
}

template <>
AWS_AGREEMENTSERVICE_API ResourceNotFoundException AgreementServiceError::GetModeledError() {
  assert(this->GetErrorType() == AgreementServiceErrors::RESOURCE_NOT_FOUND);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ResourceNotFoundException(payload.GetDecoder());
}

template <>
AWS_AGREEMENTSERVICE_API InternalServerException AgreementServiceError::GetModeledError() {
  assert(this->GetErrorType() == AgreementServiceErrors::INTERNAL_SERVER);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return InternalServerException(payload.GetDecoder());
}

template <>
AWS_AGREEMENTSERVICE_API ValidationException AgreementServiceError::GetModeledError() {
  assert(this->GetErrorType() == AgreementServiceErrors::VALIDATION);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ValidationException(payload.GetDecoder());
}

template <>
AWS_AGREEMENTSERVICE_API AccessDeniedException AgreementServiceError::GetModeledError() {
  assert(this->GetErrorType() == AgreementServiceErrors::ACCESS_DENIED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return AccessDeniedException(payload.GetDecoder());
}

namespace AgreementServiceErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgreementServiceErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgreementServiceErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgreementServiceErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace AgreementServiceErrorMapper
}  // namespace AgreementService
}  // namespace Aws
