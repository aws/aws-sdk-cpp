/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/resiliencehubv2/Resiliencehubv2ErrorMarshaller.h>
#include <aws/resiliencehubv2/Resiliencehubv2Errors.h>

using namespace Aws::Client;
using namespace Aws::resiliencehubv2;

AWSError<CoreErrors> Resiliencehubv2ErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = Resiliencehubv2ErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}