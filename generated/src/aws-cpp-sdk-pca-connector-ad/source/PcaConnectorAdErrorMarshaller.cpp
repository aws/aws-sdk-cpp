/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pca-connector-ad/PcaConnectorAdErrorMarshaller.h>
#include <aws/pca-connector-ad/PcaConnectorAdErrors.h>

using namespace Aws::Client;
using namespace Aws::PcaConnectorAd;

AWSError<CoreErrors> PcaConnectorAdErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PcaConnectorAdErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}