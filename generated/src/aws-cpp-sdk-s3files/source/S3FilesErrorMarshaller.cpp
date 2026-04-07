/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/s3files/S3FilesErrorMarshaller.h>
#include <aws/s3files/S3FilesErrors.h>

using namespace Aws::Client;
using namespace Aws::S3Files;

AWSError<CoreErrors> S3FilesErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = S3FilesErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}