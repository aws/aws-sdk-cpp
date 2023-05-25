/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/privatenetworks/PrivateNetworksErrorMarshaller.h>
#include <aws/privatenetworks/PrivateNetworksErrors.h>

using namespace Aws::Client;
using namespace Aws::PrivateNetworks;

AWSError<CoreErrors> PrivateNetworksErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PrivateNetworksErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}