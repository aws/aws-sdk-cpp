/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Errors.h>
#include <aws/pinpoint-sms-voice-v2/model/ConflictException.h>
#include <aws/pinpoint-sms-voice-v2/model/ServiceQuotaExceededException.h>
#include <aws/pinpoint-sms-voice-v2/model/ResourceNotFoundException.h>
#include <aws/pinpoint-sms-voice-v2/model/InternalServerException.h>
#include <aws/pinpoint-sms-voice-v2/model/ValidationException.h>
#include <aws/pinpoint-sms-voice-v2/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PinpointSMSVoiceV2;
using namespace Aws::PinpointSMSVoiceV2::Model;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
template<> AWS_PINPOINTSMSVOICEV2_API ConflictException PinpointSMSVoiceV2Error::GetModeledError()
{
  assert(this->GetErrorType() == PinpointSMSVoiceV2Errors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINTSMSVOICEV2_API ServiceQuotaExceededException PinpointSMSVoiceV2Error::GetModeledError()
{
  assert(this->GetErrorType() == PinpointSMSVoiceV2Errors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINTSMSVOICEV2_API ResourceNotFoundException PinpointSMSVoiceV2Error::GetModeledError()
{
  assert(this->GetErrorType() == PinpointSMSVoiceV2Errors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINTSMSVOICEV2_API InternalServerException PinpointSMSVoiceV2Error::GetModeledError()
{
  assert(this->GetErrorType() == PinpointSMSVoiceV2Errors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINTSMSVOICEV2_API ValidationException PinpointSMSVoiceV2Error::GetModeledError()
{
  assert(this->GetErrorType() == PinpointSMSVoiceV2Errors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINTSMSVOICEV2_API AccessDeniedException PinpointSMSVoiceV2Error::GetModeledError()
{
  assert(this->GetErrorType() == PinpointSMSVoiceV2Errors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace PinpointSMSVoiceV2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceV2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceV2Errors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointSMSVoiceV2Errors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PinpointSMSVoiceV2ErrorMapper
} // namespace PinpointSMSVoiceV2
} // namespace Aws
