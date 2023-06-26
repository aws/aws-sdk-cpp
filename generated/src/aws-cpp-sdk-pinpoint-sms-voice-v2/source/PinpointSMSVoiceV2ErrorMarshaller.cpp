/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ErrorMarshaller.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Errors.h>

using namespace Aws::Client;
using namespace Aws::PinpointSMSVoiceV2;

AWSError<CoreErrors> PinpointSMSVoiceV2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PinpointSMSVoiceV2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}