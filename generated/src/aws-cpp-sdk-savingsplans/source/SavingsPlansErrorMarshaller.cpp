/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/savingsplans/SavingsPlansErrorMarshaller.h>
#include <aws/savingsplans/SavingsPlansErrors.h>

using namespace Aws::Client;
using namespace Aws::SavingsPlans;

AWSError<CoreErrors> SavingsPlansErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SavingsPlansErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}