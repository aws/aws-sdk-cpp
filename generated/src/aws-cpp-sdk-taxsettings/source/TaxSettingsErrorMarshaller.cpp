/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/taxsettings/TaxSettingsErrorMarshaller.h>
#include <aws/taxsettings/TaxSettingsErrors.h>

using namespace Aws::Client;
using namespace Aws::TaxSettings;

AWSError<CoreErrors> TaxSettingsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TaxSettingsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}