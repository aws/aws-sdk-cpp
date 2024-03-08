/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/supplychain/SupplyChainErrorMarshaller.h>
#include <aws/supplychain/SupplyChainErrors.h>

using namespace Aws::Client;
using namespace Aws::SupplyChain;

AWSError<CoreErrors> SupplyChainErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SupplyChainErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}