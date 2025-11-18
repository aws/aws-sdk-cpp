/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mwaa-serverless/MWAAServerlessErrorMarshaller.h>
#include <aws/mwaa-serverless/MWAAServerlessErrors.h>

using namespace Aws::Client;
using namespace Aws::MWAAServerless;

AWSError<CoreErrors> MWAAServerlessErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = MWAAServerlessErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}