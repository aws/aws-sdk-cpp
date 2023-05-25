/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/vpc-lattice/VPCLatticeErrorMarshaller.h>
#include <aws/vpc-lattice/VPCLatticeErrors.h>

using namespace Aws::Client;
using namespace Aws::VPCLattice;

AWSError<CoreErrors> VPCLatticeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = VPCLatticeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}