/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingErrors.h>
#include <aws/partnercentral-marketing/model/AccessDeniedException.h>
#include <aws/partnercentral-marketing/model/ConflictException.h>
#include <aws/partnercentral-marketing/model/InternalServerException.h>
#include <aws/partnercentral-marketing/model/ResourceNotFoundException.h>
#include <aws/partnercentral-marketing/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-marketing/model/ThrottlingException.h>
#include <aws/partnercentral-marketing/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PartnerCentralMarketing;
using namespace Aws::PartnerCentralMarketing::Model;

namespace Aws {
namespace PartnerCentralMarketing {
template <>
AWS_PARTNERCENTRALMARKETING_API ConflictException PartnerCentralMarketingError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralMarketingErrors::CONFLICT);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ConflictException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALMARKETING_API ThrottlingException PartnerCentralMarketingError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralMarketingErrors::THROTTLING);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ThrottlingException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALMARKETING_API ServiceQuotaExceededException PartnerCentralMarketingError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralMarketingErrors::SERVICE_QUOTA_EXCEEDED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ServiceQuotaExceededException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALMARKETING_API InternalServerException PartnerCentralMarketingError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralMarketingErrors::INTERNAL_SERVER);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return InternalServerException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALMARKETING_API ResourceNotFoundException PartnerCentralMarketingError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralMarketingErrors::RESOURCE_NOT_FOUND);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ResourceNotFoundException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALMARKETING_API ValidationException PartnerCentralMarketingError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralMarketingErrors::VALIDATION);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ValidationException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALMARKETING_API AccessDeniedException PartnerCentralMarketingError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralMarketingErrors::ACCESS_DENIED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return AccessDeniedException(payload.GetDecoder());
}

namespace PartnerCentralMarketingErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralMarketingErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralMarketingErrors::SERVICE_QUOTA_EXCEEDED),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralMarketingErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace PartnerCentralMarketingErrorMapper
}  // namespace PartnerCentralMarketing
}  // namespace Aws
