/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/partnercentral-channel/PartnerCentralChannelErrorMarshaller.h>
#include <aws/partnercentral-channel/PartnerCentralChannelErrors.h>

using namespace Aws::Client;
using namespace Aws::PartnerCentralChannel;

AWSError<CoreErrors> PartnerCentralChannelErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = PartnerCentralChannelErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}