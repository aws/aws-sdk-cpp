/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemaker-metrics/SageMakerMetricsErrorMarshaller.h>
#include <aws/sagemaker-metrics/SageMakerMetricsErrors.h>

using namespace Aws::Client;
using namespace Aws::SageMakerMetrics;

AWSError<CoreErrors> SageMakerMetricsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SageMakerMetricsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}