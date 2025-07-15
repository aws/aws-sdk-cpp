/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/s3vectors/S3VectorsErrorMarshaller.h>
#include <aws/s3vectors/S3VectorsErrors.h>

using namespace Aws::Client;
using namespace Aws::S3Vectors;

AWSError<CoreErrors> S3VectorsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = S3VectorsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}