/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrorMarshaller.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::SagemakerEdgeManager;

AWSError<CoreErrors> SagemakerEdgeManagerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SagemakerEdgeManagerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}