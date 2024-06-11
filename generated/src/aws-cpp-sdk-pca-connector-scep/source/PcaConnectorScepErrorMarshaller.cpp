/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pca-connector-scep/PcaConnectorScepErrorMarshaller.h>
#include <aws/pca-connector-scep/PcaConnectorScepErrors.h>

using namespace Aws::Client;
using namespace Aws::PcaConnectorScep;

AWSError<CoreErrors> PcaConnectorScepErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PcaConnectorScepErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}