/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/partnercentral-selling/PartnerCentralSellingErrorMarshaller.h>
#include <aws/partnercentral-selling/PartnerCentralSellingErrors.h>

using namespace Aws::Client;
using namespace Aws::PartnerCentralSelling;

AWSError<CoreErrors> PartnerCentralSellingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PartnerCentralSellingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}