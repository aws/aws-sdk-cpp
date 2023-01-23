/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/transcribe/TranscribeServiceErrorMarshaller.h>
#include <aws/transcribe/TranscribeServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::TranscribeService;

AWSError<CoreErrors> TranscribeServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TranscribeServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}