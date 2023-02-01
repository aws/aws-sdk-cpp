/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/s3control/S3ControlErrorMarshaller.h>
#include <aws/s3control/S3ControlErrors.h>

using namespace Aws::Client;
using namespace Aws::S3Control;

AWSError<CoreErrors> S3ControlErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = S3ControlErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}