/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/managedblockchain/ManagedBlockchainErrorMarshaller.h>
#include <aws/managedblockchain/ManagedBlockchainErrors.h>

using namespace Aws::Client;
using namespace Aws::ManagedBlockchain;

AWSError<CoreErrors> ManagedBlockchainErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ManagedBlockchainErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}