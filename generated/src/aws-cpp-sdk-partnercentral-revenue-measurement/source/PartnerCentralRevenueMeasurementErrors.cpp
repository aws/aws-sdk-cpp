/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementErrors.h>
#include <aws/partnercentral-revenue-measurement/model/AccessDeniedException.h>
#include <aws/partnercentral-revenue-measurement/model/ConflictException.h>
#include <aws/partnercentral-revenue-measurement/model/ResourceNotFoundException.h>
#include <aws/partnercentral-revenue-measurement/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-revenue-measurement/model/ThrottlingException.h>
#include <aws/partnercentral-revenue-measurement/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PartnerCentralRevenueMeasurement;
using namespace Aws::PartnerCentralRevenueMeasurement::Model;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
template <>
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ConflictException PartnerCentralRevenueMeasurementError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralRevenueMeasurementErrors::CONFLICT);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ConflictException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ServiceQuotaExceededException PartnerCentralRevenueMeasurementError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralRevenueMeasurementErrors::SERVICE_QUOTA_EXCEEDED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ServiceQuotaExceededException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ThrottlingException PartnerCentralRevenueMeasurementError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralRevenueMeasurementErrors::THROTTLING);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ThrottlingException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ResourceNotFoundException PartnerCentralRevenueMeasurementError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralRevenueMeasurementErrors::RESOURCE_NOT_FOUND);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ResourceNotFoundException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ValidationException PartnerCentralRevenueMeasurementError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralRevenueMeasurementErrors::VALIDATION);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ValidationException(payload.GetDecoder());
}

template <>
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API AccessDeniedException PartnerCentralRevenueMeasurementError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralRevenueMeasurementErrors::ACCESS_DENIED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return AccessDeniedException(payload.GetDecoder());
}

namespace PartnerCentralRevenueMeasurementErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralRevenueMeasurementErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralRevenueMeasurementErrors::SERVICE_QUOTA_EXCEEDED),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralRevenueMeasurementErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace PartnerCentralRevenueMeasurementErrorMapper
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
