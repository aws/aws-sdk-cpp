/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mediapackagev2/Mediapackagev2ErrorMarshaller.h>
#include <aws/mediapackagev2/Mediapackagev2Errors.h>

using namespace Aws::Client;
using namespace Aws::mediapackagev2;

AWSError<CoreErrors> Mediapackagev2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Mediapackagev2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}