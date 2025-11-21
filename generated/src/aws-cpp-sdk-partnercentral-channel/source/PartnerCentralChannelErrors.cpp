/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/PartnerCentralChannelErrors.h>
#include <aws/partnercentral-channel/model/AccessDeniedException.h>
#include <aws/partnercentral-channel/model/ConflictException.h>
#include <aws/partnercentral-channel/model/ResourceNotFoundException.h>
#include <aws/partnercentral-channel/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-channel/model/ThrottlingException.h>
#include <aws/partnercentral-channel/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PartnerCentralChannel;
using namespace Aws::PartnerCentralChannel::Model;

namespace Aws {
namespace PartnerCentralChannel {
template <>
AWS_PARTNERCENTRALCHANNEL_API ConflictException PartnerCentralChannelError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralChannelErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALCHANNEL_API ThrottlingException PartnerCentralChannelError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralChannelErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALCHANNEL_API ServiceQuotaExceededException PartnerCentralChannelError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralChannelErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALCHANNEL_API ResourceNotFoundException PartnerCentralChannelError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralChannelErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALCHANNEL_API ValidationException PartnerCentralChannelError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralChannelErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_PARTNERCENTRALCHANNEL_API AccessDeniedException PartnerCentralChannelError::GetModeledError() {
  assert(this->GetErrorType() == PartnerCentralChannelErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace PartnerCentralChannelErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralChannelErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralChannelErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralChannelErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace PartnerCentralChannelErrorMapper
}  // namespace PartnerCentralChannel
}  // namespace Aws
