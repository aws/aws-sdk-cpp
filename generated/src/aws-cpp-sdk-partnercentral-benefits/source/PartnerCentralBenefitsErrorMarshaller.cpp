/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsErrorMarshaller.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsErrors.h>

using namespace Aws::Client;
using namespace Aws::PartnerCentralBenefits;

AWSError<CoreErrors> PartnerCentralBenefitsErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = PartnerCentralBenefitsErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}