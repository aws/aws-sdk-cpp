/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsErrors.h>
#include <aws/partnercentral-benefits/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-benefits/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PartnerCentralBenefits;
using namespace Aws::PartnerCentralBenefits::Model;

namespace Aws {
namespace PartnerCentralBenefits {
template <>
AWS_PARTNERCENTRALBENEFITS_API ServiceQuotaExceededException PartnerCentralBenefitsError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralBenefitsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALBENEFITS_API ValidationException PartnerCentralBenefitsError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralBenefitsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PartnerCentralBenefitsErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralBenefitsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralBenefitsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralBenefitsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace PartnerCentralBenefitsErrorMapper
}  // namespace PartnerCentralBenefits
}  // namespace Aws
