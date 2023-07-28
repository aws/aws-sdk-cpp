/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryErrorMarshaller.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryErrors.h>

using namespace Aws::Client;
using namespace Aws::ManagedBlockchainQuery;

AWSError<CoreErrors> ManagedBlockchainQueryErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ManagedBlockchainQueryErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}