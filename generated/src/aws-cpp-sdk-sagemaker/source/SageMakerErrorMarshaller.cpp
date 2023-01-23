/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemaker/SageMakerErrorMarshaller.h>
#include <aws/sagemaker/SageMakerErrors.h>

using namespace Aws::Client;
using namespace Aws::SageMaker;

AWSError<CoreErrors> SageMakerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SageMakerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}