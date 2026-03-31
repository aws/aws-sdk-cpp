/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sustainability/SustainabilityErrorMarshaller.h>
#include <aws/sustainability/SustainabilityErrors.h>

using namespace Aws::Client;
using namespace Aws::Sustainability;

AWSError<CoreErrors> SustainabilityErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SustainabilityErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}