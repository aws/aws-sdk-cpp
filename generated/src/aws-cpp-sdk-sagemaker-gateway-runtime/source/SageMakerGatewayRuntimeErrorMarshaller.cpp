/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrorMarshaller.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::SageMakerGatewayRuntime;

AWSError<CoreErrors> SageMakerGatewayRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SageMakerGatewayRuntimeErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}