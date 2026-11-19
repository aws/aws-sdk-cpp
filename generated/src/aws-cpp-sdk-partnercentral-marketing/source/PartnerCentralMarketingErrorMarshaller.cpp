/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingErrorMarshaller.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingErrors.h>

using namespace Aws::Client;
using namespace Aws::PartnerCentralMarketing;

AWSError<CoreErrors> PartnerCentralMarketingErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = PartnerCentralMarketingErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}