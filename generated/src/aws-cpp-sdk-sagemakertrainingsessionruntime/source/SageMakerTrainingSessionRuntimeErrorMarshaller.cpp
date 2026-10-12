/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeErrorMarshaller.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::SageMakerTrainingSessionRuntime;

AWSError<CoreErrors> SageMakerTrainingSessionRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SageMakerTrainingSessionRuntimeErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}