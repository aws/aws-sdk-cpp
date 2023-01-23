/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mediatailor/MediaTailorErrorMarshaller.h>
#include <aws/mediatailor/MediaTailorErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaTailor;

AWSError<CoreErrors> MediaTailorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MediaTailorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}