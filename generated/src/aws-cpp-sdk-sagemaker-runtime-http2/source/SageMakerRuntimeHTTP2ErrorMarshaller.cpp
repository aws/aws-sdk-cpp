/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ErrorMarshaller.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Errors.h>

using namespace Aws::Client;
using namespace Aws::SageMakerRuntimeHTTP2;

AWSError<CoreErrors> SageMakerRuntimeHTTP2ErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SageMakerRuntimeHTTP2ErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}