/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrorMarshaller.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrors.h>

using namespace Aws::Client;
using namespace Aws::AppRegistry;

AWSError<CoreErrors> AppRegistryErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AppRegistryErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}