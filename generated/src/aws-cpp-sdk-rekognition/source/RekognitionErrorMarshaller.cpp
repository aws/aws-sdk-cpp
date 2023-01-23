/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rekognition/RekognitionErrorMarshaller.h>
#include <aws/rekognition/RekognitionErrors.h>

using namespace Aws::Client;
using namespace Aws::Rekognition;

AWSError<CoreErrors> RekognitionErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RekognitionErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}