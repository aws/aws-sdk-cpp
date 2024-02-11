/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentErrorMarshaller.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceDeployment;

AWSError<CoreErrors> MarketplaceDeploymentErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MarketplaceDeploymentErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}