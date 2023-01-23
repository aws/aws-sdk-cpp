/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/voice-id/VoiceIDErrorMarshaller.h>
#include <aws/voice-id/VoiceIDErrors.h>

using namespace Aws::Client;
using namespace Aws::VoiceID;

AWSError<CoreErrors> VoiceIDErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = VoiceIDErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}