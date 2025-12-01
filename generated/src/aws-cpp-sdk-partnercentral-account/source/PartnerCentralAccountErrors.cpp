/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/PartnerCentralAccountErrors.h>
#include <aws/partnercentral-account/model/AccessDeniedException.h>
#include <aws/partnercentral-account/model/ConflictException.h>
#include <aws/partnercentral-account/model/ResourceNotFoundException.h>
#include <aws/partnercentral-account/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-account/model/ThrottlingException.h>
#include <aws/partnercentral-account/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PartnerCentralAccount;
using namespace Aws::PartnerCentralAccount::Model;

namespace Aws {
namespace PartnerCentralAccount {
template <>
AWS_PARTNERCENTRALACCOUNT_API ConflictException PartnerCentralAccountError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralAccountErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALACCOUNT_API ThrottlingException PartnerCentralAccountError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralAccountErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALACCOUNT_API ServiceQuotaExceededException PartnerCentralAccountError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralAccountErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALACCOUNT_API ResourceNotFoundException PartnerCentralAccountError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralAccountErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALACCOUNT_API ValidationException PartnerCentralAccountError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralAccountErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALACCOUNT_API AccessDeniedException PartnerCentralAccountError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralAccountErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace PartnerCentralAccountErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralAccountErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralAccountErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralAccountErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace PartnerCentralAccountErrorMapper
}  // namespace PartnerCentralAccount
}  // namespace Aws
