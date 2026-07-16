/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementErrorMarshaller.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementErrors.h>

using namespace Aws::Client;
using namespace Aws::PartnerCentralRevenueMeasurement;

AWSError<CoreErrors> PartnerCentralRevenueMeasurementErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = PartnerCentralRevenueMeasurementErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}