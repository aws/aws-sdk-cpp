/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeErrorMarshaller.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::SagemakerJobRuntime;

AWSError<CoreErrors> SagemakerJobRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SagemakerJobRuntimeErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}