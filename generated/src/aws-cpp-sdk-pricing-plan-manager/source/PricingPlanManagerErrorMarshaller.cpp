/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pricing-plan-manager/PricingPlanManagerErrorMarshaller.h>
#include <aws/pricing-plan-manager/PricingPlanManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::PricingPlanManager;

AWSError<CoreErrors> PricingPlanManagerErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = PricingPlanManagerErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}